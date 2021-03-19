// Generated by Haxe 4.0.0-preview.5+1aaf080
#ifndef INCLUDED_kha_graphics5_FragmentShader
#define INCLUDED_kha_graphics5_FragmentShader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha,Resource)
HX_DECLARE_CLASS2(kha,graphics5,FragmentShader)
HX_DECLARE_CLASS2(kha,internal,BytesBlob)


#include <Kore/pch.h>
#include <Kore/Graphics5/Graphics.h>

namespace kha{
namespace graphics5{


class HXCPP_CLASS_ATTRIBUTES FragmentShader_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef FragmentShader_obj OBJ_;
		FragmentShader_obj();

	public:
		enum { _hx_ClassId = 0x15121e9b };

		void __construct(::Array< ::Dynamic> sources,::Array< ::String > files);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="kha.graphics5.FragmentShader")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"kha.graphics5.FragmentShader"); }
		static hx::ObjectPtr< FragmentShader_obj > __new(::Array< ::Dynamic> sources,::Array< ::String > files);
		static hx::ObjectPtr< FragmentShader_obj > __alloc(hx::Ctx *_hx_ctx,::Array< ::Dynamic> sources,::Array< ::String > files);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FragmentShader_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FragmentShader",35,e3,31,e4); }

		void init( ::kha::internal::BytesBlob source,::String file);
		::Dynamic init_dyn();

		void _hx_delete();
		::Dynamic _hx_delete_dyn();

		void _forceInclude();
		::Dynamic _forceInclude_dyn();

Kore::Graphics5::Shader* shader;
};

} // end namespace kha
} // end namespace graphics5

#endif /* INCLUDED_kha_graphics5_FragmentShader */ 
