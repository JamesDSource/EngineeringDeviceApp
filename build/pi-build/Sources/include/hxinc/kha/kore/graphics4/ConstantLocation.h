// Generated by Haxe 4.0.0-preview.5+1aaf080
#ifndef INCLUDED_kha_kore_graphics4_ConstantLocation
#define INCLUDED_kha_kore_graphics4_ConstantLocation

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_kha_graphics4_ConstantLocation
#include <hxinc/kha/graphics4/ConstantLocation.h>
#endif
HX_DECLARE_CLASS2(kha,graphics4,ConstantLocation)
HX_DECLARE_CLASS3(kha,kore,graphics4,ConstantLocation)


#include <Kore/pch.h>
#include <Kore/Graphics4/Shader.h>

namespace kha{
namespace kore{
namespace graphics4{


class HXCPP_CLASS_ATTRIBUTES ConstantLocation_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ConstantLocation_obj OBJ_;
		ConstantLocation_obj();

	public:
		enum { _hx_ClassId = 0x3f26b36b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="kha.kore.graphics4.ConstantLocation")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"kha.kore.graphics4.ConstantLocation"); }
		static hx::ObjectPtr< ConstantLocation_obj > __new();
		static hx::ObjectPtr< ConstantLocation_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ConstantLocation_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("ConstantLocation",d9,cb,06,4a); }

Kore::Graphics4::ConstantLocation location;
};

} // end namespace kha
} // end namespace kore
} // end namespace graphics4

#endif /* INCLUDED_kha_kore_graphics4_ConstantLocation */ 
