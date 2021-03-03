import Origin.OriginPoint;

enum TokenType {
	text;
	newLine;
}

typedef Token = {
	type: TokenType,
	value: Dynamic
}

class Text {
	public static function textSize(text: String, hSeperation: Float, vSeperation: Float, ?preGenTokens: Array<Token>): kha.math.Vector2 {
		var newLines: Int = 0,
			longestLineLength: Int = 0,
			tokens: Array<Token> = preGenTokens != null ? preGenTokens : getTokens(text);
		
		for(token in tokens) {
			switch(token.type) {
				case TokenType.text:
					var str: String = cast(token.value, String);
					if(str.length > longestLineLength) {
						longestLineLength = str.length;
					}
				case TokenType.newLine:
					newLines++;
			}

		}
		
		return new kha.math.Vector2(longestLineLength*hSeperation, (newLines + 1)*vSeperation);
	}

	public static function drawText(graphics: kha.graphics2.Graphics, text: String, position: kha.math.Vector2, hSeperation: Float, vSeperation: Float, origin: OriginPoint = OriginPoint.topLeft): Void {
		var tokens = getTokens(text),
			textSize = textSize(text, hSeperation, vSeperation, tokens),
			offsets = Origin.getOriginOffset(origin, textSize),
			startingPos = position.add(offsets),
			currentPos = new kha.math.Vector2(startingPos.x, startingPos.y);

		for(token in tokens) {
			switch(token.type) {
				case TokenType.text:
					var str: String = cast(token.value, String);
					for(i in 0...str.length) {
						graphics.drawString(str.charAt(i), currentPos.x, currentPos.y);
						currentPos.x += hSeperation;
					}
				case TokenType.newLine:
					currentPos.x = startingPos.x;
					currentPos.y += vSeperation;
			}
		}
	}

	public static function getTokens(text: String) {
		var tokens: Array<Token> = [];
		
		var textReturn = "";
		var i: Int = -1; 
		while(i + 1 < text.length) {
			i++;
			var char: String = text.charAt(i);
			textReturn += char;

			if(char == "<") {
				var peek = i;
				var cmd = "";
				while(peek < text.length) {
					peek++;
					if(text.charAt(peek) == ">") {
						break;
					}
					else {
						cmd += text.charAt(peek);
					}
				}
				i = peek;
				switch(cmd) {
					case "nl":
						tokens.push({type: TokenType.newLine, value: null});
					default:
						throw "Unknown command";
				}
			}
			else {
				var peek = i - 1;
				var tokenString = "";
				while(peek < text.length) {
					if(peek + 1 < text.length) {
						if(text.charAt(peek + 1) == "<") {
							break;
						}
						else {
							peek++;
							tokenString += text.charAt(peek);
						}
					}
					else {
						peek++;
					}
				}
				i = peek;
				tokens.push({type: TokenType.text, value: tokenString});
			}
		}


		return tokens;
	}
}