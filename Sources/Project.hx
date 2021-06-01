import kha.Assets;
import kha.Image;
import kha.input.Mouse;
import kha.Color;
import Origin.OriginPoint;
import kha.math.Vector2;
import kha.Framebuffer;
import components.*;

class Project {

	public var windowWidth: Float;
	public var windowHeight: Float;

	public static final NAVY 	= Color.fromBytes(51, 63, 88);
	public static final BLUE 	= Color.fromBytes(74, 122, 150);
	public static final PINK 	= Color.fromBytes(255, 128, 128);
	public static final BAIGE 	= Color.fromBytes(251, 187, 173);

	private var masterDivision: DivisionRect;

	private var todoListDiv: DivisionRect;
	private var toolBarDiv: DivisionRect;
	private var calenderDiv: DivisionRect;
	private var pomodoroTimerDiv: DivisionRect;
	private var meditationDiv: DivisionRect;

	private var leftMargin = 25;

	private var font: kha.Font;
	
	public static var hoveringOver: Component = null;

 	public function new(windowWidth: Float, windowHeight: Float) {
		 this.windowWidth = windowWidth;
		 this.windowHeight = windowHeight;
	 }

	public function init() {
		masterDivision = new DivisionRect(new Vector2(0, 0), windowWidth, windowHeight, NAVY);
		masterDivision.origin = new Vector2();

		todoListDiv = 		new DivisionRect(new Vector2(leftMargin, 25), 675, 220, Color.White);
		toolBarDiv = 		new DivisionRect(new Vector2(725, 25), 50, 220, Color.White);
		calenderDiv = 		new DivisionRect(new Vector2(leftMargin, 270), 275, 185, Color.White);
		pomodoroTimerDiv = 	new DivisionRect(new Vector2(325, 270), 250, 185, Color.White);
		meditationDiv = 	new DivisionRect(new Vector2(600, 270), 175, 185, Color.White);

		masterDivision.addChild(todoListDiv);
		masterDivision.addChild(toolBarDiv);
		masterDivision.addChild(calenderDiv);
		masterDivision.addChild(pomodoroTimerDiv);
		masterDivision.addChild(meditationDiv);

		var listMargin: Float = 8;
		var list: TodoList = new TodoList(new Vector2(listMargin, listMargin), todoListDiv.width - listMargin*2, todoListDiv.height - listMargin*2, 10, 4);
		todoListDiv.addChild(list);

		var pencilIcon: Image = Assets.images.penciliconScaled;
		var pencilSprite: Sprite = new Sprite(new Vector2(), pencilIcon);
		toolBarDiv.addChild(pencilSprite);

		var meditationIcon: Image = Assets.images.meditationicon;
		var meditationSprite: Sprite = new Sprite(new Vector2(meditationDiv.width/2, 16), meditationIcon, OriginPoint.topCenter);
		meditationDiv.addChild(meditationSprite);
		
		var pomodoroTimer: PomodoroTimer = new PomodoroTimer(new Vector2(), pomodoroTimerDiv.width, pomodoroTimerDiv.height);
		pomodoroTimerDiv.addChild(pomodoroTimer);

		var dateDisplay: Date = new Date(new Vector2(calenderDiv.width/2));
		dateDisplay.setTextSize(32, 13, 28);
		dateDisplay.originPoint = OriginPoint.topCenter;
		calenderDiv.addChild(dateDisplay);

		font = kha.Assets.fonts.RobotoMono;

		Mouse.get().notify(onMouseClicked, null, onMouseMove, null);
	}
	
	public function update() {
		Timer.update();
		masterDivision.update();
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

	private function onMouseClicked(mb: Int, x: Int, y: Int) {
		masterDivision.mouseClicked(mb, x, y, true);
	}
}