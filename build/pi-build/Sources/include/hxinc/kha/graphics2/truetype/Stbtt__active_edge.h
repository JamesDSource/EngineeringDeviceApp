// Generated by Haxe 4.0.0-preview.5+1aaf080
#ifndef INCLUDED_kha_graphics2_truetype_Stbtt__active_edge
#define INCLUDED_kha_graphics2_truetype_Stbtt__active_edge

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_95359e1b7d695f50_165_new)
HX_DECLARE_CLASS3(kha,graphics2,truetype,Stbtt__active_edge)

namespace kha{
namespace graphics2{
namespace truetype{


class HXCPP_CLASS_ATTRIBUTES Stbtt__active_edge_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Stbtt__active_edge_obj OBJ_;
		Stbtt__active_edge_obj();

	public:
		enum { _hx_ClassId = 0x11d58b64 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="kha.graphics2.truetype.Stbtt__active_edge")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"kha.graphics2.truetype.Stbtt__active_edge"); }

		hx::ObjectPtr< Stbtt__active_edge_obj > __new() {
			hx::ObjectPtr< Stbtt__active_edge_obj > __this = new Stbtt__active_edge_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Stbtt__active_edge_obj > __alloc(hx::Ctx *_hx_ctx) {
			Stbtt__active_edge_obj *__this = (Stbtt__active_edge_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Stbtt__active_edge_obj), true, "kha.graphics2.truetype.Stbtt__active_edge"));
			*(void **)__this = Stbtt__active_edge_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_95359e1b7d695f50_165_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Stbtt__active_edge_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Stbtt__active_edge",95,38,8f,4d); }

		 ::kha::graphics2::truetype::Stbtt__active_edge next;
		Float fx;
		Float fdx;
		Float fdy;
		Float direction;
		Float sy;
		Float ey;
};

} // end namespace kha
} // end namespace graphics2
} // end namespace truetype

#endif /* INCLUDED_kha_graphics2_truetype_Stbtt__active_edge */ 
