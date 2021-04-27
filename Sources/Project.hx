import kha.input.Mouse;
import kha.Color;
import Origin.OriginPoint;
import kha.math.Vector2;
import kha.Framebuffer;
import components.*;

class Project {

	public var windowWidth: Float;
	public var windowHeight: Float;

	public var navy = Color.fromBytes(51, 63, 88, 255);

	private var masterDivision: DivisionRect;

	private var toDoList: DivisionRect;
	private var toolBar: DivisionRect;
	private var calender: DivisionRect;
	private var pomodoroTimer: DivisionRect;
	private var meditation: DivisionRect;

	private var leftMargin = 25;

	private var font: kha.Font;

	private var hoveringOver: Component = null;

 	public function new(windowWidth: Float, windowHeight: Float) {
		 this.windowWidth = windowWidth;
		 this.windowHeight = windowHeight;
	 }

	public function init() {
		masterDivision = new DivisionRect(new Vector2(0, 0), windowWidth, windowHeight, navy);
		masterDivision.origin = new Vector2();

		toDoList = new DivisionRect(new Vector2(leftMargin, 25), 675, 220, Color.White);
		toolBar = new DivisionRect(new Vector2(725, 25), 50, 220, Color.White);
		calender = new DivisionRect(new Vector2(leftMargin, 270), 275, 185, Color.White);
		pomodoroTimer = new DivisionRect(new Vector2(325, 270), 250, 185, Color.White);
		meditation = new DivisionRect(new Vector2(600, 270), 175, 185, Color.White);

		masterDivision.addChild(toDoList);
		masterDivision.addChild(toolBar);
		masterDivision.addChild(calender);
		masterDivision.addChild(pomodoroTimer);
		masterDivision.addChild(meditation);

		font = kha.Assets.fonts.get("RobotoMono");

		Mouse.get().notify(null, null, onMouseMove, null);
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

	private function onMouseMove(x: Int, y: Int, cx: Int, cy: Int) {
		if(x > 0 && y > 0 && x < windowWidth && y < windowHeight) {
			hoveringOver = masterDivision.isOver(x, y);
		}
	}
}