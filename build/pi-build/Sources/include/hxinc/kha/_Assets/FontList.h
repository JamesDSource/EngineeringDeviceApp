// Generated by Haxe 4.0.0-preview.5+1aaf080
#ifndef INCLUDED_kha__Assets_FontList
#define INCLUDED_kha__Assets_FontList

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha,Kravur)
HX_DECLARE_CLASS1(kha,Resource)
HX_DECLARE_CLASS2(kha,_Assets,FontList)

namespace kha{
namespace _Assets{


class HXCPP_CLASS_ATTRIBUTES FontList_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef FontList_obj OBJ_;
		FontList_obj();

	public:
		enum { _hx_ClassId = 0x0cc63163 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="kha._Assets.FontList")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"kha._Assets.FontList"); }
		static hx::ObjectPtr< FontList_obj > __new();
		static hx::ObjectPtr< FontList_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FontList_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FontList",ed,f5,e2,a3); }

		 ::kha::Kravur get(::String name);
		::Dynamic get_dyn();

		 ::kha::Kravur RobotoMono;
		::String RobotoMonoName;
		 ::Dynamic RobotoMonoDescription;
		void RobotoMonoLoad( ::Dynamic done, ::Dynamic failure);
		::Dynamic RobotoMonoLoad_dyn();

		void RobotoMonoUnload();
		::Dynamic RobotoMonoUnload_dyn();

		::Array< ::String > names;
};

} // end namespace kha
} // end namespace _Assets

#endif /* INCLUDED_kha__Assets_FontList */ 
