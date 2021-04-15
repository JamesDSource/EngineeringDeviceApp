package components;

import kha.math.Vector2;
import kha.Color;

class DivisionRect implements Component {
	public var origin: kha.math.Vector2;
	public var position: kha.math.Vector2;

	public var width: Float;
	public var height: Float;
	public var children: Array<Component> = [];
	public var color: Color;

	public function new(position: Vector2, width: Float, height: Float, color: Color = Color.Black) {
		this.position = position;
		this.width = width;
		this.height = height;
		this.color = color;
	}

	public function draw(graphics: kha.graphics2.Graphics) {
		var globalPos = origin.add(position);
		
		graphics.color = color;
		graphics.fillRect(globalPos.x, globalPos.y, width, height);

		for(child in children) {
			child.draw(graphics);
		}

	}

	public function getBoundingBox(): Component.BoundingBox {
		var orgGlobal = origin.add(position);
		return {topLeft: orgGlobal, bottomRight: orgGlobal.add(new Vector2(width, height))};
	}

	public function isOver(x: Float, y: Float): Component {
		for(child in children) {
			var bounds: Component.BoundingBox = child.getBoundingBox();
			if(	x >= bounds.topLeft.x && 
				x <= bounds.bottomRight.x && 
				y >= bounds.topLeft.y &&
				y <= bounds.bottomRight.y) 
			{
				return child.isOver(x, y);
			}
		}

		return null;
	}

	public function addChild(child: Component) {
		children.push(child);
		child.origin = origin.add(position);
	}
}