package components;

import kha.math.Vector2;

class Date extends Textbox {
	public function new(position: Vector2) {
		super(position, "");
	}
	
	public override function update() {
		var date = std.Date.now();
		var month = date.getMonth() + 1;
		var day = date.getDate();

		var str: String = "";
		switch(month) {
			case 1:
				str += "January";
			case 2:
				str += "February";
			case 3:
				str += "March";
			case 4:
				str += "April";
			case 5:
				str += "May";
			case 6:
				str += "June";
			case 7:
				str += "July";
			case 8:
				str += "August";
			case 9:
				str += "September";
			case 10:
				str += "October";
			case 11:
				str += "November";
			case 12:
				str += "December";
		}

		str += ' $day';

		switch(day%10) {
			case 1:
				str += "st";
			case 2:
				str += "nd";
			case 3:
				str += "rd";
			case 4 | 5 | 6 | 7 | 8 | 9 | 0:
				str += "th";
			default:
		}

		var hours: Int = date.getHours()%12;
		var minutes: Int = date.getMinutes();
		str += ' ${date.getFullYear()}<nl>$hours:${minutes < 10 ? "0" + minutes : Std.string(minutes)} ${date.getHours() > 12 ? "PM" : "AM"}';

		setText(str);
	}
}