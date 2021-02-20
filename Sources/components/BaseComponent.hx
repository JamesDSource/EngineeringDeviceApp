package components;

@:uiComp("base")
class BaseComponent implements domkit.Model<BaseComponent> implements domkit.Object {
	private var children: Array<BaseComponent> = [];
	public var dom: domkit.Properties<BaseComponent>;
	public var parent: BaseComponent;
	public function getChildren(): Array<BaseComponent> return children;

	public function new(?parent: BaseComponent) {
		if(parent != null) {
			this.parent = parent;
			parent.children.push(this);
		}
	}

	public function remove() {
		if(parent != null) {
			parent.children.remove(this);
			parent = null;
		}
	}
}
