package components;

import Origin;

class Textbox implements Component {
	public var origin: kha.math.Vector2;
	public var position: kha.math.Vector2;

	public var originPoint: OriginPoint = OriginPoint.topLeft;
	
	private var text: String;
	private var textSize: kha.math.Vector2;

	private var fontSize: Int = 24;
	private var hSeperation: Float = 12;
	private var vSeperation: Float = 24;
	
	public function new(position: kha.math.Vector2, text: String) {
		this.position = position;
		setText(text);
	}

	public function setTextSize(fontSize: Int, hSeperation: Float, vSeperation: Float) {
		this.fontSize = fontSize;
		this.hSeperation = hSeperation;
		this.vSeperation = vSeperation;

		// To recalculate the text size
		setText(text);
	}

	public function setText(text: String) {
		this.text = text;
		textSize = Text.textSize(text, hSeperation, vSeperation);
	}

	public function getText(): String {
		return text;
	}

	public function draw(graphics: kha.graphics2.Graphics): Void {
		graphics.color = Project.NAVY;
		graphics.fontSize = fontSize;
		Text.drawText(graphics, text, position.add(origin), hSeperation, vSeperation, originPoint);
	}
	
	public function getBoundingBox(): Component.BoundingBox {
		return null;
	}
	
	public function isOver(x: Float, y: Float): Component {
		return this;
	}

	public function mouseClicked(mb: Int, x: Int, y: Int, hoveringOver: Bool): Void {

	}

	public function update(): Void { 
		
	}
}