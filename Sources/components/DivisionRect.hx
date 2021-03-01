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

		graphics.color = kha.Color.fromFloats(0, 1, 0, 1);
		graphics.drawRect(globalPos.x, globalPos.y, width, height);
		
		for(child in children) {
			child.draw(graphics);
		}
	}

	public function getSize(): kha.math.Vector2 {
		return new kha.math.Vector2(width, height);
	}

	public function isOver(x: Float, y: Float): Component {
		return null;
	}

	public function addChild(child: Component) {
		children.push(child);
		child.origin = origin.add(position);
	}
}