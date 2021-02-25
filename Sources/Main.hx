package;

import kha.Assets;
import kha.Framebuffer;
import kha.Scheduler;
import kha.System;

class Main {
	static var proj: Project = new Project();

	public static function main() {
		System.start({title: "Meditation App", width: 800, height: 480}, function (_) {
			// Just loading everything is ok for small projects
			Assets.loadEverything(function () {
				// Avoid passing update/render directly,
				// so replacing them via code injection works
				proj.init();
				Scheduler.addTimeTask(function () { proj.update(); }, 0, 1 / 60);
				System.notifyOnFrames(function (frames) { proj.render(frames); });
			});
		});
	}
}
