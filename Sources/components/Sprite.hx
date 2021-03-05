package components;

import Origin.OriginPoint;

class Sprite implements Component {
	public var origin: kha.math.Vector2;
	public var position: kha.math.Vector2;
	public var image: kha.Image;
	public var imageOrigin: OriginPoint;
	
	public function new(position: kha.math.Vector2, image: kha.Image, imageOrigin: OriginPoint = OriginPoint.topLeft) {
		this.position = position;
		this.image = image;
		this.imageOrigin = imageOrigin;
	}

	public function draw(graphics: kha.graphics2.Graphics): Void {
		var drawPos = getTopLeft();
		graphics.drawImage(image, drawPos.x, drawPos.y);
	}

	public function getBoundingBox(): Component.BoundingBox {
		var tl = getTopLeft();
		return {topLeft: tl, bottomRight: tl.add(new kha.math.Vector2(image.width, image.height))};
	}

	public function isOver(x: Float, y: Float): Component {
		return null;
	}

	public function getTopLeft(): kha.math.Vector2 {
		var originOffset = Origin.getOriginOffset(imageOrigin, new kha.math.Vector2(image.width, image.height));
		return origin.add(position).add(originOffset);
	}
}