// Generated by Haxe 4.0.0-preview.5+1aaf080
#ifndef INCLUDED_components_Component
#define INCLUDED_components_Component

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(components,Component)
HX_DECLARE_CLASS2(kha,graphics2,Graphics)
HX_DECLARE_CLASS2(kha,math,Vector2)

namespace components{


class HXCPP_CLASS_ATTRIBUTES Component_obj {
	public:
		typedef hx::Object super;
		HX_DO_INTERFACE_RTTI;

		void (hx::Object :: *_hx_draw)( ::kha::graphics2::Graphics graphics); 
		static inline void draw( ::Dynamic _hx_, ::kha::graphics2::Graphics graphics) {
			(_hx_.mPtr->*( static_cast< ::components::Component_obj *>(_hx_.mPtr->_hx_getInterface(0x32011c87)))->_hx_draw)(graphics);
		}
		 ::Dynamic (hx::Object :: *_hx_getBoundingBox)(); 
		static inline  ::Dynamic getBoundingBox( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( static_cast< ::components::Component_obj *>(_hx_.mPtr->_hx_getInterface(0x32011c87)))->_hx_getBoundingBox)();
		}
		::Dynamic (hx::Object :: *_hx_isOver)(Float x,Float y); 
		static inline ::Dynamic isOver( ::Dynamic _hx_,Float x,Float y) {
			return (_hx_.mPtr->*( static_cast< ::components::Component_obj *>(_hx_.mPtr->_hx_getInterface(0x32011c87)))->_hx_isOver)(x,y);
		}
};

} // end namespace components

#endif /* INCLUDED_components_Component */ 
