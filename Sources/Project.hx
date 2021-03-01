import kha.math.Vector2;
import kha.Framebuffer;
import components.*;

class Project {

	public var windowWidth: Float;
	public var windowHeight: Float;

	private var masterDivision: DivisionRect;

 	public function new(windowWidth: Float, windowHeight: Float) {
		 this.windowWidth = windowWidth;
		 this.windowHeight = windowHeight;
	 }

	public function init() {
		masterDivision = new DivisionRect(new Vector2(0, 0), windowWidth, windowHeight);
		masterDivision.origin = new Vector2();
		masterDivision.addChild(new DivisionRect(new Vector2(100, 100), 100, 200));
	}
	
	public function update() {

	}

	public function render(frames: Array<Framebuffer>) {
		if(frames.length > 0) {
			var graphics = frames[0].g2;
			graphics.begin();
			masterDivision.draw(graphics);
			graphics.end();
		}
	}
}