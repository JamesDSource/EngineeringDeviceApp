// Generated by Haxe 4.0.0-preview.5+1aaf080
#include <hxcpp.h>

#ifndef INCLUDED_TokenType
#include <hxinc/TokenType.h>
#endif

::TokenType TokenType_obj::newLine;

::TokenType TokenType_obj::text;

bool TokenType_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("newLine",74,c4,7f,f7)) { outValue = TokenType_obj::newLine; return true; }
	if (inName==HX_("text",ad,cc,f9,4c)) { outValue = TokenType_obj::text; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(TokenType_obj)

int TokenType_obj::__FindIndex(::String inName)
{
	if (inName==HX_("newLine",74,c4,7f,f7)) return 1;
	if (inName==HX_("text",ad,cc,f9,4c)) return 0;
	return super::__FindIndex(inName);
}

int TokenType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("newLine",74,c4,7f,f7)) return 0;
	if (inName==HX_("text",ad,cc,f9,4c)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val TokenType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("newLine",74,c4,7f,f7)) return newLine;
	if (inName==HX_("text",ad,cc,f9,4c)) return text;
	return super::__Field(inName,inCallProp);
}

static ::String TokenType_obj_sStaticFields[] = {
	HX_("text",ad,cc,f9,4c),
	HX_("newLine",74,c4,7f,f7),
	::String(null())
};

hx::Class TokenType_obj::__mClass;

Dynamic __Create_TokenType_obj() { return new TokenType_obj; }

void TokenType_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_("TokenType",33,f2,8f,55), hx::TCanCast< TokenType_obj >,TokenType_obj_sStaticFields,0,
	&__Create_TokenType_obj, &__Create,
	&super::__SGetClass(), &CreateTokenType_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &TokenType_obj::__GetStatic;
}

void TokenType_obj::__boot()
{
newLine = hx::CreateConstEnum< TokenType_obj >(HX_("newLine",74,c4,7f,f7),1);
text = hx::CreateConstEnum< TokenType_obj >(HX_("text",ad,cc,f9,4c),0);
}


