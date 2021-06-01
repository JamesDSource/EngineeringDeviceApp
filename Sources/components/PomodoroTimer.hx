package components;

import kha.Color;
import kha.Sound;
import Origin.OriginPoint;
import kha.Assets;
import kha.audio1.Audio;
import kha.Image;
import kha.math.Vector2;
import components.Component.BoundingBox;
using kha.graphics2.GraphicsExtension;

typedef CircleButton = {
	position: Vector2,
	radius: Float,
	callBack: (CircleButton) -> Void,
	?overlay: Image
}

class PomodoroTimer implements Component {
	public var origin: kha.math.Vector2;
	public var position: kha.math.Vector2;

	public var width: Float;
	public var height: Float;

	public var circleButtons: Array<CircleButton> = [];
	public var buttonHovering: CircleButton = null;
	public var buttonSize: Float = 58;
	public var buttonMargin: Float = 8;
	public var toggleTimerButton: CircleButton;
	public var resetButton: CircleButton;

	public var playing: Bool = false;

	public final BREAKMESSAGE: String = "Relax";
	public final WORKMESSAGE: String = "Work";
	public final BREAKTIME: Float = 5*60;
	public final BREAKTIMEEXTENDED: Float = 30*60;
	public final WORKTIME: Float = 25*60;

	public var timerIteration: Int = 0;
	public var timeLeft: Float = 0;
	public var work: Bool = true;

	public function new(position: Vector2, width: Float, height: Float) {
		timeLeft = WORKTIME;

		this.position = position;
		this.width = width;
		this.height = height;

		
		toggleTimerButton = {
			position: new Vector2(width/2 - buttonSize/2 - buttonMargin, height - buttonSize/2 - buttonMargin),
			radius: buttonSize/2,
			callBack: toggleTimer,
			overlay: Assets.images.Play	
		}
		resetButton = {
			position: new Vector2(width/2 + buttonSize/2 + buttonMargin, height - buttonSize/2 - buttonMargin),
			radius: buttonSize/2,
			callBack: resetTimer,
			overlay: Assets.images.Reset
		}
		circleButtons.push(toggleTimerButton);
		circleButtons.push(resetButton);
	}
	
	public function draw(graphics: kha.graphics2.Graphics): Void {
		var bbox = getBoundingBox();

		for(button in circleButtons) {
			var pos = bbox.topLeft.add(button.position);
			graphics.color = Color.Black;
			graphics.fillCircle(pos.x, pos.y + 6, button.radius);
			graphics.color = Project.NAVY;
			graphics.fillCircle(pos.x, pos.y, button.radius);

			if(button.overlay != null) {
				graphics.color = Project.BAIGE;
				var img = button.overlay;
				graphics.drawImage(img, pos.x - img.width/2, pos.y - img.height/2);
			}
		}

		graphics.color = Project.NAVY;
		graphics.fontSize = 42;

		var textPos: Vector2 = bbox.topLeft.add(new Vector2(width/2));
		Text.drawText(graphics, work ? WORKMESSAGE : BREAKMESSAGE, textPos, 20, 12, OriginPoint.topCenter);
		textPos.y += graphics.fontSize + 2;

		graphics.color = Project.BAIGE;
		graphics.drawLine(textPos.x - 72, textPos.y, textPos.x + 72, textPos.y, 2);
		textPos.y += 2;

		var seconds = Math.floor(timeLeft%60);
		var minutes = Math.floor(timeLeft/60);
		var timerStr = '${minutes < 10 ? "0" + minutes : Std.string(minutes)}:${seconds < 10 ? "0" + seconds : Std.string(seconds)}';

		graphics.fontSize = 62;
		graphics.color = Color.Black;
		Text.drawText(graphics, timerStr, textPos.add(new Vector2(0, 2)), 24, 12, OriginPoint.topCenter);
		graphics.color = Project.NAVY;
		Text.drawText(graphics, timerStr, textPos, 24, 12, OriginPoint.topCenter);

	}
	
	public function getBoundingBox(): BoundingBox {
		return {
			topLeft: origin.add(position),
			bottomRight: origin.add(position).add(new Vector2(width, height))
		};
	}
	
	public function isOver(x: Float, y: Float): Component {
		buttonHovering = null;
		for(button in circleButtons) {
			var pos = origin.add(position).add(button.position);
			if(pos.sub(new Vector2(x, y)).length <= button.radius) {
				buttonHovering = button;
				break;
			}
		}
		return this;
	}
	
	public function mouseClicked(mb: Int, x: Int, y: Int, hoveringOver: Bool): Void {
		if(mb == 0 && hoveringOver && buttonHovering != null) {
			buttonHovering.callBack(buttonHovering);
		}
	}
	
	public function update(): Void {
		if(playing) {
			timeLeft -= Timer.delta*60;

			if(timeLeft <= 0) {
				work = !work;
				var sndFX: Sound;
				
				if(work) {
					timeLeft = WORKTIME;
					sndFX = Assets.sounds.BackToWork;
				}
				else {
					timerIteration++;
					timeLeft = timerIteration%4 == 0 ? BREAKTIMEEXTENDED : BREAKTIME;
					sndFX = Assets.sounds.TakeABreak;
				}

				var snd = Audio.play(sndFX, false);
				snd.volume = 0.5;
			}
		}
	}

	public function toggleTimer(button: CircleButton) {
		playing = !playing;

		if(playing) {
			button.overlay = Assets.images.Pause;
		}
		else {
			button.overlay = Assets.images.Play;
		}
	}

	public function resetTimer(?button: CircleButton) {
		timerIteration = 0;
		timeLeft = WORKTIME;
		work = true;
		if(playing)
			toggleTimer(toggleTimerButton);
	}
}