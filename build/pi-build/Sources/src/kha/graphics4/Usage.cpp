// Generated by Haxe 4.0.0-preview.5+1aaf080
#include <hxcpp.h>

#ifndef INCLUDED_kha_graphics4_Usage
#include <hxinc/kha/graphics4/Usage.h>
#endif
namespace kha{
namespace graphics4{

::kha::graphics4::Usage Usage_obj::DynamicUsage;

::kha::graphics4::Usage Usage_obj::ReadableUsage;

::kha::graphics4::Usage Usage_obj::StaticUsage;

bool Usage_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("DynamicUsage",42,ed,eb,28)) { outValue = Usage_obj::DynamicUsage; return true; }
	if (inName==HX_("ReadableUsage",f1,ba,ca,36)) { outValue = Usage_obj::ReadableUsage; return true; }
	if (inName==HX_("StaticUsage",73,d1,2e,a3)) { outValue = Usage_obj::StaticUsage; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Usage_obj)

int Usage_obj::__FindIndex(::String inName)
{
	if (inName==HX_("DynamicUsage",42,ed,eb,28)) return 1;
	if (inName==HX_("ReadableUsage",f1,ba,ca,36)) return 2;
	if (inName==HX_("StaticUsage",73,d1,2e,a3)) return 0;
	return super::__FindIndex(inName);
}

int Usage_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("DynamicUsage",42,ed,eb,28)) return 0;
	if (inName==HX_("ReadableUsage",f1,ba,ca,36)) return 0;
	if (inName==HX_("StaticUsage",73,d1,2e,a3)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val Usage_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("DynamicUsage",42,ed,eb,28)) return DynamicUsage;
	if (inName==HX_("ReadableUsage",f1,ba,ca,36)) return ReadableUsage;
	if (inName==HX_("StaticUsage",73,d1,2e,a3)) return StaticUsage;
	return super::__Field(inName,inCallProp);
}

static ::String Usage_obj_sStaticFields[] = {
	HX_("StaticUsage",73,d1,2e,a3),
	HX_("DynamicUsage",42,ed,eb,28),
	HX_("ReadableUsage",f1,ba,ca,36),
	::String(null())
};

hx::Class Usage_obj::__mClass;

Dynamic __Create_Usage_obj() { return new Usage_obj; }

void Usage_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_("kha.graphics4.Usage",92,83,45,64), hx::TCanCast< Usage_obj >,Usage_obj_sStaticFields,0,
	&__Create_Usage_obj, &__Create,
	&super::__SGetClass(), &CreateUsage_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Usage_obj::__GetStatic;
}

void Usage_obj::__boot()
{
DynamicUsage = hx::CreateConstEnum< Usage_obj >(HX_("DynamicUsage",42,ed,eb,28),1);
ReadableUsage = hx::CreateConstEnum< Usage_obj >(HX_("ReadableUsage",f1,ba,ca,36),2);
StaticUsage = hx::CreateConstEnum< Usage_obj >(HX_("StaticUsage",73,d1,2e,a3),0);
}


} // end namespace kha
} // end namespace graphics4
