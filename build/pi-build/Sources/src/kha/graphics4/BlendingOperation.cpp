// Generated by Haxe 4.0.0-preview.5+1aaf080
#include <hxcpp.h>

#ifndef INCLUDED_kha_graphics4_BlendingOperation
#include <hxinc/kha/graphics4/BlendingOperation.h>
#endif
namespace kha{
namespace graphics4{

::kha::graphics4::BlendingOperation BlendingOperation_obj::Add;

::kha::graphics4::BlendingOperation BlendingOperation_obj::Max;

::kha::graphics4::BlendingOperation BlendingOperation_obj::Min;

::kha::graphics4::BlendingOperation BlendingOperation_obj::ReverseSubtract;

::kha::graphics4::BlendingOperation BlendingOperation_obj::Subtract;

bool BlendingOperation_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Add",01,aa,31,00)) { outValue = BlendingOperation_obj::Add; return true; }
	if (inName==HX_("Max",84,c2,3a,00)) { outValue = BlendingOperation_obj::Max; return true; }
	if (inName==HX_("Min",72,c9,3a,00)) { outValue = BlendingOperation_obj::Min; return true; }
	if (inName==HX_("ReverseSubtract",36,64,bc,6d)) { outValue = BlendingOperation_obj::ReverseSubtract; return true; }
	if (inName==HX_("Subtract",34,31,c3,d1)) { outValue = BlendingOperation_obj::Subtract; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(BlendingOperation_obj)

int BlendingOperation_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Add",01,aa,31,00)) return 0;
	if (inName==HX_("Max",84,c2,3a,00)) return 4;
	if (inName==HX_("Min",72,c9,3a,00)) return 3;
	if (inName==HX_("ReverseSubtract",36,64,bc,6d)) return 2;
	if (inName==HX_("Subtract",34,31,c3,d1)) return 1;
	return super::__FindIndex(inName);
}

int BlendingOperation_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Add",01,aa,31,00)) return 0;
	if (inName==HX_("Max",84,c2,3a,00)) return 0;
	if (inName==HX_("Min",72,c9,3a,00)) return 0;
	if (inName==HX_("ReverseSubtract",36,64,bc,6d)) return 0;
	if (inName==HX_("Subtract",34,31,c3,d1)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val BlendingOperation_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Add",01,aa,31,00)) return Add;
	if (inName==HX_("Max",84,c2,3a,00)) return Max;
	if (inName==HX_("Min",72,c9,3a,00)) return Min;
	if (inName==HX_("ReverseSubtract",36,64,bc,6d)) return ReverseSubtract;
	if (inName==HX_("Subtract",34,31,c3,d1)) return Subtract;
	return super::__Field(inName,inCallProp);
}

static ::String BlendingOperation_obj_sStaticFields[] = {
	HX_("Add",01,aa,31,00),
	HX_("Subtract",34,31,c3,d1),
	HX_("ReverseSubtract",36,64,bc,6d),
	HX_("Min",72,c9,3a,00),
	HX_("Max",84,c2,3a,00),
	::String(null())
};

hx::Class BlendingOperation_obj::__mClass;

Dynamic __Create_BlendingOperation_obj() { return new BlendingOperation_obj; }

void BlendingOperation_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_("kha.graphics4.BlendingOperation",a7,d4,66,ad), hx::TCanCast< BlendingOperation_obj >,BlendingOperation_obj_sStaticFields,0,
	&__Create_BlendingOperation_obj, &__Create,
	&super::__SGetClass(), &CreateBlendingOperation_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &BlendingOperation_obj::__GetStatic;
}

void BlendingOperation_obj::__boot()
{
Add = hx::CreateConstEnum< BlendingOperation_obj >(HX_("Add",01,aa,31,00),0);
Max = hx::CreateConstEnum< BlendingOperation_obj >(HX_("Max",84,c2,3a,00),4);
Min = hx::CreateConstEnum< BlendingOperation_obj >(HX_("Min",72,c9,3a,00),3);
ReverseSubtract = hx::CreateConstEnum< BlendingOperation_obj >(HX_("ReverseSubtract",36,64,bc,6d),2);
Subtract = hx::CreateConstEnum< BlendingOperation_obj >(HX_("Subtract",34,31,c3,d1),1);
}


} // end namespace kha
} // end namespace graphics4
