import kha.Assets;
import kha.Font;
import kha.Framebuffer;

class Project {

	private var font: Font;

 	public function new() {}

	public function init() {
		font = Assets.fonts.get("RobotoMono");
	}
	
	public function update() {

	}

	public function render(frames: Array<Framebuffer>) {
		if(frames.length > 0) {
			var graphics = frames[0].g2;
			graphics.begin();
			graphics.font = font;
			graphics.fontSize = 24;
			graphics.drawString("Hello World", 60, 60);
			graphics.end();
		}
	}
}