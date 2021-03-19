// Generated by Haxe 4.0.0-preview.5+1aaf080
#include <hxcpp.h>

#ifndef INCLUDED_kha_graphics4_TextureFormat
#include <hxinc/kha/graphics4/TextureFormat.h>
#endif
namespace kha{
namespace graphics4{

::kha::graphics4::TextureFormat TextureFormat_obj::A16;

::kha::graphics4::TextureFormat TextureFormat_obj::A32;

::kha::graphics4::TextureFormat TextureFormat_obj::DEPTH16;

::kha::graphics4::TextureFormat TextureFormat_obj::L8;

::kha::graphics4::TextureFormat TextureFormat_obj::RGBA128;

::kha::graphics4::TextureFormat TextureFormat_obj::RGBA32;

::kha::graphics4::TextureFormat TextureFormat_obj::RGBA64;

bool TextureFormat_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("A16",66,7d,31,00)) { outValue = TextureFormat_obj::A16; return true; }
	if (inName==HX_("A32",20,7f,31,00)) { outValue = TextureFormat_obj::A32; return true; }
	if (inName==HX_("DEPTH16",88,92,1e,ea)) { outValue = TextureFormat_obj::DEPTH16; return true; }
	if (inName==HX_("L8",6c,42,00,00)) { outValue = TextureFormat_obj::L8; return true; }
	if (inName==HX_("RGBA128",03,2a,c5,e0)) { outValue = TextureFormat_obj::RGBA128; return true; }
	if (inName==HX_("RGBA32",53,5a,88,d6)) { outValue = TextureFormat_obj::RGBA32; return true; }
	if (inName==HX_("RGBA64",f2,5c,88,d6)) { outValue = TextureFormat_obj::RGBA64; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(TextureFormat_obj)

int TextureFormat_obj::__FindIndex(::String inName)
{
	if (inName==HX_("A16",66,7d,31,00)) return 6;
	if (inName==HX_("A32",20,7f,31,00)) return 5;
	if (inName==HX_("DEPTH16",88,92,1e,ea)) return 3;
	if (inName==HX_("L8",6c,42,00,00)) return 1;
	if (inName==HX_("RGBA128",03,2a,c5,e0)) return 2;
	if (inName==HX_("RGBA32",53,5a,88,d6)) return 0;
	if (inName==HX_("RGBA64",f2,5c,88,d6)) return 4;
	return super::__FindIndex(inName);
}

int TextureFormat_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("A16",66,7d,31,00)) return 0;
	if (inName==HX_("A32",20,7f,31,00)) return 0;
	if (inName==HX_("DEPTH16",88,92,1e,ea)) return 0;
	if (inName==HX_("L8",6c,42,00,00)) return 0;
	if (inName==HX_("RGBA128",03,2a,c5,e0)) return 0;
	if (inName==HX_("RGBA32",53,5a,88,d6)) return 0;
	if (inName==HX_("RGBA64",f2,5c,88,d6)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val TextureFormat_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("A16",66,7d,31,00)) return A16;
	if (inName==HX_("A32",20,7f,31,00)) return A32;
	if (inName==HX_("DEPTH16",88,92,1e,ea)) return DEPTH16;
	if (inName==HX_("L8",6c,42,00,00)) return L8;
	if (inName==HX_("RGBA128",03,2a,c5,e0)) return RGBA128;
	if (inName==HX_("RGBA32",53,5a,88,d6)) return RGBA32;
	if (inName==HX_("RGBA64",f2,5c,88,d6)) return RGBA64;
	return super::__Field(inName,inCallProp);
}

static ::String TextureFormat_obj_sStaticFields[] = {
	HX_("RGBA32",53,5a,88,d6),
	HX_("L8",6c,42,00,00),
	HX_("RGBA128",03,2a,c5,e0),
	HX_("DEPTH16",88,92,1e,ea),
	HX_("RGBA64",f2,5c,88,d6),
	HX_("A32",20,7f,31,00),
	HX_("A16",66,7d,31,00),
	::String(null())
};

hx::Class TextureFormat_obj::__mClass;

Dynamic __Create_TextureFormat_obj() { return new TextureFormat_obj; }

void TextureFormat_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_("kha.graphics4.TextureFormat",e3,e1,e1,42), hx::TCanCast< TextureFormat_obj >,TextureFormat_obj_sStaticFields,0,
	&__Create_TextureFormat_obj, &__Create,
	&super::__SGetClass(), &CreateTextureFormat_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &TextureFormat_obj::__GetStatic;
}

void TextureFormat_obj::__boot()
{
A16 = hx::CreateConstEnum< TextureFormat_obj >(HX_("A16",66,7d,31,00),6);
A32 = hx::CreateConstEnum< TextureFormat_obj >(HX_("A32",20,7f,31,00),5);
DEPTH16 = hx::CreateConstEnum< TextureFormat_obj >(HX_("DEPTH16",88,92,1e,ea),3);
L8 = hx::CreateConstEnum< TextureFormat_obj >(HX_("L8",6c,42,00,00),1);
RGBA128 = hx::CreateConstEnum< TextureFormat_obj >(HX_("RGBA128",03,2a,c5,e0),2);
RGBA32 = hx::CreateConstEnum< TextureFormat_obj >(HX_("RGBA32",53,5a,88,d6),0);
RGBA64 = hx::CreateConstEnum< TextureFormat_obj >(HX_("RGBA64",f2,5c,88,d6),4);
}


} // end namespace kha
} // end namespace graphics4
