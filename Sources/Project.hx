import Origin.OriginPoint;
import kha.math.Vector2;
import kha.Framebuffer;
import components.*;

class Project {

	public var windowWidth: Float;
	public var windowHeight: Float;

	private var masterDivision: DivisionRect;

	private var font: kha.Font;

 	public function new(windowWidth: Float, windowHeight: Float) {
		 this.windowWidth = windowWidth;
		 this.windowHeight = windowHeight;
	 }

	public function init() {
		masterDivision = new DivisionRect(new Vector2(0, 0), windowWidth, windowHeight);
		masterDivision.origin = new Vector2();

		var tb = new Textbox(new Vector2(0, 0), "This is a text string<nl>with a new line");
		masterDivision.addChild(tb);

		font = kha.Assets.fonts.get("RobotoMono");
	}
	
	public function update() {

	}

	public function render(frames: Array<Framebuffer>) {
		if(frames.length > 0) {
			var graphics = frames[0].g2;
			graphics.begin();
			graphics.font = font;
			masterDivision.draw(graphics);
			graphics.end();
		}
	}
}