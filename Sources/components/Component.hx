package components;

typedef BoundingBox = {
	topLeft: kha.math.Vector2,
	bottomRight: kha.math.Vector2
}

interface Component {
	public var origin: kha.math.Vector2;
	public var position: kha.math.Vector2;
	public function draw(graphics: kha.graphics2.Graphics): Void;
	public function getBoundingBox(): BoundingBox;
	public function isOver(x: Float, y: Float): Component;
	public function mouseClicked(mb: Int, x: Int, y: Int, hoveringOver: Bool): Void;
	public function update(): Void;
}