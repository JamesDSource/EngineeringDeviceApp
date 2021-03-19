// Generated by Haxe 4.0.0-preview.5+1aaf080
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_kha_math_Vector2
#include <hxinc/kha/math/Vector2.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7787bea69ddd0b3f_5_new,"kha.math.Vector2","new",0x249cae45,"kha.math.Vector2.new","kha/math/Vector2.hx",5,0xe0e7152b)
HX_LOCAL_STACK_FRAME(_hx_pos_7787bea69ddd0b3f_20_get_length,"kha.math.Vector2","get_length",0xbaebdd6a,"kha.math.Vector2.get_length","kha/math/Vector2.hx",20,0xe0e7152b)
HX_LOCAL_STACK_FRAME(_hx_pos_7787bea69ddd0b3f_23_set_length,"kha.math.Vector2","set_length",0xbe697bde,"kha.math.Vector2.set_length","kha/math/Vector2.hx",23,0xe0e7152b)
namespace kha{
namespace math{

void Vector2_obj::__construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y){
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            	HX_STACKFRAME(&_hx_pos_7787bea69ddd0b3f_5_new)
HXLINE(   6)		this->x = x;
HXLINE(   7)		this->y = y;
            	}

Dynamic Vector2_obj::__CreateEmpty() { return new Vector2_obj; }

void *Vector2_obj::_hx_vtable = 0;

Dynamic Vector2_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Vector2_obj > _hx_result = new Vector2_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Vector2_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7b04fbeb;
}

Float Vector2_obj::get_length(){
            	HX_STACKFRAME(&_hx_pos_7787bea69ddd0b3f_20_get_length)
HXDLIN(  20)		return ::Math_obj::sqrt(((this->x * this->x) + (this->y * this->y)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Vector2_obj,get_length,return )

Float Vector2_obj::set_length(Float length){
            	HX_STACKFRAME(&_hx_pos_7787bea69ddd0b3f_23_set_length)
HXLINE(  24)		Float currentLength = this->get_length();
HXLINE(  25)		if ((currentLength == 0)) {
HXLINE(  25)			return ( (Float)(0) );
            		}
HXLINE(  26)		Float mul = (length / currentLength);
HXLINE(  27)		 ::kha::math::Vector2 _hx_tmp = hx::ObjectPtr<OBJ_>(this);
HXDLIN(  27)		_hx_tmp->x = (_hx_tmp->x * mul);
HXLINE(  28)		 ::kha::math::Vector2 _hx_tmp1 = hx::ObjectPtr<OBJ_>(this);
HXDLIN(  28)		_hx_tmp1->y = (_hx_tmp1->y * mul);
HXLINE(  29)		return length;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Vector2_obj,set_length,return )


hx::ObjectPtr< Vector2_obj > Vector2_obj::__new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y) {
	hx::ObjectPtr< Vector2_obj > __this = new Vector2_obj();
	__this->__construct(__o_x,__o_y);
	return __this;
}

hx::ObjectPtr< Vector2_obj > Vector2_obj::__alloc(hx::Ctx *_hx_ctx,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y) {
	Vector2_obj *__this = (Vector2_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Vector2_obj), false, "kha.math.Vector2"));
	*(void **)__this = Vector2_obj::_hx_vtable;
	__this->__construct(__o_x,__o_y);
	return __this;
}

Vector2_obj::Vector2_obj()
{
}

hx::Val Vector2_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return hx::Val( y ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_length() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return hx::Val( get_length_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_length") ) { return hx::Val( set_length_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Vector2_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_length(inValue.Cast< Float >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Vector2_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("length",e6,94,07,9f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo Vector2_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Vector2_obj,x),HX_("x",78,00,00,00)},
	{hx::fsFloat,(int)offsetof(Vector2_obj,y),HX_("y",79,00,00,00)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Vector2_obj_sStaticStorageInfo = 0;
#endif

static ::String Vector2_obj_sMemberFields[] = {
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("get_length",af,04,8f,8f),
	HX_("set_length",23,a3,0c,93),
	::String(null()) };

hx::Class Vector2_obj::__mClass;

void Vector2_obj::__register()
{
	Vector2_obj _hx_dummy;
	Vector2_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("kha.math.Vector2",d3,27,35,a9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Vector2_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Vector2_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Vector2_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Vector2_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace math
