package components;

interface Component {
	public var origin: kha.math.Vector2;
	public var position: kha.math.Vector2;
	public function draw(graphics: kha.graphics2.Graphics): Void;
	public function getSize(): kha.math.Vector2;
	public function isOver(x: Float, y: Float): Component;
}