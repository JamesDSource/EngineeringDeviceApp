package components;

class DivisionRect implements Component {
	public var origin: kha.math.Vector2;
	public var position: kha.math.Vector2;

	public var width: Float;
	public var height: Float;
	public var children: Array<Component> = [];

	public function new(position: kha.math.Vector2, width: Float, height: Float) {
		this.position = position;
		this.width = width;
		this.height = height;
	}

	public function draw(graphics: kha.graphics2.Graphics) {
		var globalPos = origin.add(position);
		
		// background
		graphics.color = kha.Color.Blue;
		graphics.drawRect(globalPos.x, globalPos.y, width, height);
		graphics.fillRect(globalPos.x, globalPos.y, width, height);

		// to-do list
		graphics.color = kha.Color.White;
		graphics.drawRect(25, 25, 675, 220);
		graphics.fillRect(25, 25, 675, 220);
		
		graphics.color = kha.Color.Black;
		graphics.drawRect(50, 45, 30, 30);
		graphics.drawLine(100, 75, 675, 75, 1);
		
		graphics.drawRect(50, 95, 30, 30);
		graphics.drawLine(100, 125, 675, 125, 1);
		
		graphics.drawRect(50, 145, 30, 30);
		graphics.drawLine(100, 175, 675, 175, 1);

		graphics.drawRect(50, 195, 30, 30);
		graphics.drawLine(100, 225, 675, 225, 1);

		// toolbar
		graphics.color = kha.Color.White;
		graphics.drawRect(725, 25, 50, 220);
		graphics.fillRect(725, 25, 50, 220);

		// calendar
		graphics.color = kha.Color.White;
		graphics.drawRect(25, 270, 275, 185);
		graphics.fillRect(25, 270, 275, 185);

		// pomodoro timer
		graphics.color = kha.Color.White;
		graphics.drawRect(325, 270, 250, 185);
		graphics.fillRect(325, 270, 250, 185);

		// meditation
		graphics.color = kha.Color.White;
		graphics.drawRect(600, 270, 175, 185);
		graphics.fillRect(600, 270, 175, 185);

		for(child in children) {
			child.draw(graphics);
		}

	}

	public function getBoundingBox(): Component.BoundingBox {
		return {topLeft: null, bottomRight: null};
	}

	public function isOver(x: Float, y: Float): Component {
		return null;
	}

	public function addChild(child: Component) {
		children.push(child);
		child.origin = origin.add(position);
	}
}