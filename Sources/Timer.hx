import kha.Scheduler;

class Timer {
	public static var delta: Float = 0;
	public static var current: Float = 0;

	public static function update() {
		delta = Scheduler.time() - current;
		current = Scheduler.time();
	}
}