// Generated by Haxe 4.0.0-preview.5+1aaf080
#include <hxcpp.h>

#ifndef INCLUDED_kha_graphics2_truetype_Stbtt_temp_rect
#include <hxinc/kha/graphics2/truetype/Stbtt_temp_rect.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_dca304a9eac19eaf_22_new,"kha.graphics2.truetype.Stbtt_temp_rect","new",0x2f49c48e,"kha.graphics2.truetype.Stbtt_temp_rect.new","kha/graphics2/truetype/StbTruetype.hx",22,0x5d9e0de9)
namespace kha{
namespace graphics2{
namespace truetype{

void Stbtt_temp_rect_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_dca304a9eac19eaf_22_new)
            	}

Dynamic Stbtt_temp_rect_obj::__CreateEmpty() { return new Stbtt_temp_rect_obj; }

void *Stbtt_temp_rect_obj::_hx_vtable = 0;

Dynamic Stbtt_temp_rect_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Stbtt_temp_rect_obj > _hx_result = new Stbtt_temp_rect_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Stbtt_temp_rect_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2882c282;
}


Stbtt_temp_rect_obj::Stbtt_temp_rect_obj()
{
}

hx::Val Stbtt_temp_rect_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"x0") ) { return hx::Val( x0 ); }
		if (HX_FIELD_EQ(inName,"y0") ) { return hx::Val( y0 ); }
		if (HX_FIELD_EQ(inName,"x1") ) { return hx::Val( x1 ); }
		if (HX_FIELD_EQ(inName,"y1") ) { return hx::Val( y1 ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Stbtt_temp_rect_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"x0") ) { x0=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y0") ) { y0=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x1") ) { x1=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y1") ) { y1=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Stbtt_temp_rect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("x0",b8,68,00,00));
	outFields->push(HX_("y0",97,69,00,00));
	outFields->push(HX_("x1",b9,68,00,00));
	outFields->push(HX_("y1",98,69,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo Stbtt_temp_rect_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Stbtt_temp_rect_obj,x0),HX_("x0",b8,68,00,00)},
	{hx::fsInt,(int)offsetof(Stbtt_temp_rect_obj,y0),HX_("y0",97,69,00,00)},
	{hx::fsInt,(int)offsetof(Stbtt_temp_rect_obj,x1),HX_("x1",b9,68,00,00)},
	{hx::fsInt,(int)offsetof(Stbtt_temp_rect_obj,y1),HX_("y1",98,69,00,00)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Stbtt_temp_rect_obj_sStaticStorageInfo = 0;
#endif

static ::String Stbtt_temp_rect_obj_sMemberFields[] = {
	HX_("x0",b8,68,00,00),
	HX_("y0",97,69,00,00),
	HX_("x1",b9,68,00,00),
	HX_("y1",98,69,00,00),
	::String(null()) };

hx::Class Stbtt_temp_rect_obj::__mClass;

void Stbtt_temp_rect_obj::__register()
{
	Stbtt_temp_rect_obj _hx_dummy;
	Stbtt_temp_rect_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("kha.graphics2.truetype.Stbtt_temp_rect",9c,25,15,3c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Stbtt_temp_rect_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Stbtt_temp_rect_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Stbtt_temp_rect_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Stbtt_temp_rect_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace graphics2
} // end namespace truetype
