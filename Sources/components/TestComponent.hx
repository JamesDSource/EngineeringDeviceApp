package components;

import components.BaseComponent;

@:uiComp("text")
class TextComponent extends BaseComponent {
	@p(string) public var text: String;
}