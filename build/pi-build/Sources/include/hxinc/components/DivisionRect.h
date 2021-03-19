// Generated by Haxe 4.0.0-preview.5+1aaf080
#ifndef INCLUDED_components_DivisionRect
#define INCLUDED_components_DivisionRect

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_components_Component
#include <hxinc/components/Component.h>
#endif
HX_DECLARE_CLASS1(components,Component)
HX_DECLARE_CLASS1(components,DivisionRect)
HX_DECLARE_CLASS2(kha,graphics2,Graphics)
HX_DECLARE_CLASS2(kha,math,Vector2)

namespace components{


class HXCPP_CLASS_ATTRIBUTES DivisionRect_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef DivisionRect_obj OBJ_;
		DivisionRect_obj();

	public:
		enum { _hx_ClassId = 0x58a53f67 };

		void __construct( ::kha::math::Vector2 position,Float width,Float height);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="components.DivisionRect")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"components.DivisionRect"); }
		static hx::ObjectPtr< DivisionRect_obj > __new( ::kha::math::Vector2 position,Float width,Float height);
		static hx::ObjectPtr< DivisionRect_obj > __alloc(hx::Ctx *_hx_ctx, ::kha::math::Vector2 position,Float width,Float height);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DivisionRect_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("DivisionRect",11,bd,92,27); }

		 ::kha::math::Vector2 origin;
		 ::kha::math::Vector2 position;
		Float width;
		Float height;
		::Array< ::Dynamic> children;
		void draw( ::kha::graphics2::Graphics graphics);
		::Dynamic draw_dyn();

		 ::Dynamic getBoundingBox();
		::Dynamic getBoundingBox_dyn();

		::Dynamic isOver(Float x,Float y);
		::Dynamic isOver_dyn();

		void addChild(::Dynamic child);
		::Dynamic addChild_dyn();

};

} // end namespace components

#endif /* INCLUDED_components_DivisionRect */ 