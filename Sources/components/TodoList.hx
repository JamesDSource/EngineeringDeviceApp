package components;

import kha.input.Mouse;
import kha.input.KeyCode;
import kha.input.Keyboard;
import components.Component.BoundingBox;
import kha.math.Vector2;

class TodoList implements Component {
	public var origin: Vector2 = new Vector2(0, 0);
	public var position: Vector2;
	public var size: Vector2;
	public var elements: Array<{text: String, checked: Bool}> = [];
	public var elementsShown: Int;
	public var elementHovering: Null<Int> = null;
	public var elementEditing: Null<Int> = null;
	public var elementsOffset: Int = 0;
	public var elementHeight: Float = 0;
	public var squareSize: Float = 0;
	public var t: Int = 0;
	
	public function new(position: Vector2, width: Float, height: Float, elementsCount: Int, elementsShown: Int) {
		Keyboard.get().notify(onKeyCodeDown, null, onKeyCharDown);
		Mouse.get().notify(null, null, null, wheelListener);
		
		this.position = position;
		size = new Vector2(width, height);

		for(i in 0...elementsCount) {
			elements.push({text: "", checked: false});
		}

		this.elementsShown = elementsShown;

		elementHeight = size.y/elementsShown;
		squareSize = elementHeight*0.6;
	}

	public function draw(graphics: kha.graphics2.Graphics): Void {
		var bbox: BoundingBox = getBoundingBox();
		var bboxHeight: Float = bbox.bottomRight.y - bbox.topLeft.y;

		var scrollBarSize = size.x*0.01;

		var range = elementsOffset...Std.int(Math.min(elements.length, elementsOffset + elementsShown));
		var j = 0;
		for(i in range) {
			graphics.color = Project.NAVY;
			var element = elements[i];
			var drawSquarePos: Vector2 = new Vector2(0, j*elementHeight + elementHeight/2 - squareSize/2);
			drawSquarePos = drawSquarePos.add(origin.add(position));

			if(element.checked) {
				graphics.color = Project.PINK;
				graphics.drawLine(drawSquarePos.x, drawSquarePos.y, drawSquarePos.x + squareSize, drawSquarePos.y + squareSize, 4);
				graphics.drawLine(drawSquarePos.x + squareSize, drawSquarePos.y, drawSquarePos.x, drawSquarePos.y + squareSize, 4);
				graphics.color = Project.NAVY;
			}

			graphics.drawRect(drawSquarePos.x, drawSquarePos.y, squareSize, squareSize, 2);

			var drawLinePos: Vector2 = drawSquarePos.add(new Vector2(squareSize*1.5, squareSize));
			graphics.drawLine(drawLinePos.x, drawLinePos.y, bbox.bottomRight.x - scrollBarSize, drawLinePos.y, 2);

			graphics.color = Project.BLUE;
			drawLinePos.y -= 34;
			graphics.fontSize = 32;
			graphics.drawString(element.text + (elementEditing == i && Std.int(t/30)%2 == 0 ? "|" : ""), drawLinePos.x, drawLinePos.y);
			j++;
		}

		graphics.color = Project.NAVY;
		graphics.drawLine(bbox.bottomRight.x - scrollBarSize/2, bbox.topLeft.y, bbox.bottomRight.x - scrollBarSize/2, bbox.bottomRight.y, 2);
		var scrollProgress: Float = elementsOffset/(elements.length - elementsShown);
		var scrollBarHeight: Float = (elementsShown/elements.length)*bboxHeight;
		graphics.color = Project.PINK;
		graphics.fillRect(bbox.bottomRight.x - scrollBarSize, bbox.topLeft.y + scrollProgress*(bboxHeight - scrollBarHeight), scrollBarSize, scrollBarHeight);
	};
	
	public function getBoundingBox(): BoundingBox {
		return {
			topLeft: origin.add(position),
			bottomRight: origin.add(position).add(size)
		};
	};
	
	public function isOver(x: Float, y: Float): Component {
		elementHovering = Std.int((y - (origin.y + position.y))/elementHeight);
		elementHovering = Std.int(Math.max(0, Math.min(elementHovering, elements.length - 1)));
		elementHovering += elementsOffset;
		return this;
	};

	public function mouseClicked(mb: Int, x: Int, y: Int, hoveringOver: Bool): Void {
		if(mb == 0) {
			if(hoveringOver) {
				if(x > getBoundingBox().topLeft.x + squareSize)
					elementEditing = elementHovering;
				else
					elements[elementHovering].checked = !elements[elementHovering].checked;
			}
			else {
				elementEditing = null;
			}
		}
	}

	public function update(): Void {
		t++;
		if(t > 3000000)
			t = 0;
	}

	public function onKeyCodeDown(keyCode: Int): Void {
		if(elementEditing != null) {
			var str: String = elements[elementEditing].text;
			switch(keyCode) {
				case KeyCode.Backspace:
					elements[elementEditing].text = str.substring(0, str.length - 1);
				case KeyCode.Escape:
					elementEditing = null;
			}
		}
	}

	public function onKeyCharDown(char: String): Void { 
		if(elementEditing != null) {
			elements[elementEditing].text += char;
		}
	}

	public function wheelListener(scroll: Int): Void {
		if(this == Project.hoveringOver) {
			elementsOffset += scroll;
			elementsOffset = Std.int(Math.max(0, Math.min(elements.length - elementsShown, elementsOffset)));
		}
	}
}