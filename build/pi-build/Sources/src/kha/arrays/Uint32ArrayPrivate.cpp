// Generated by Haxe 4.0.0-preview.5+1aaf080
#include <hxcpp.h>

#ifndef INCLUDED_7d028c26efabce49
#define INCLUDED_7d028c26efabce49
#include "cpp_uint32array.h"
#endif
#ifndef INCLUDED_kha_arrays_Uint32ArrayPrivate
#include <hxinc/kha/arrays/Uint32ArrayPrivate.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c2eef44d6b6e5658_32_new,"kha.arrays.Uint32ArrayPrivate","new",0x7a45b2bf,"kha.arrays.Uint32ArrayPrivate.new","kha/arrays/Uint32Array.hx",32,0x6874c248)
namespace kha{
namespace arrays{

void Uint32ArrayPrivate_obj::__construct(hx::Null< int >  __o_elements){
            		int elements = __o_elements.Default(0);
            	HX_STACKFRAME(&_hx_pos_c2eef44d6b6e5658_32_new)
HXLINE(  33)		this->self = uint32array();
HXLINE(  34)		if ((elements > 0)) {
HXLINE(  34)			this->self.alloc(elements);
            		}
            	}

Dynamic Uint32ArrayPrivate_obj::__CreateEmpty() { return new Uint32ArrayPrivate_obj; }

void *Uint32ArrayPrivate_obj::_hx_vtable = 0;

Dynamic Uint32ArrayPrivate_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Uint32ArrayPrivate_obj > _hx_result = new Uint32ArrayPrivate_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Uint32ArrayPrivate_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7fa2bc35;
}


hx::ObjectPtr< Uint32ArrayPrivate_obj > Uint32ArrayPrivate_obj::__new(hx::Null< int >  __o_elements) {
	hx::ObjectPtr< Uint32ArrayPrivate_obj > __this = new Uint32ArrayPrivate_obj();
	__this->__construct(__o_elements);
	return __this;
}

hx::ObjectPtr< Uint32ArrayPrivate_obj > Uint32ArrayPrivate_obj::__alloc(hx::Ctx *_hx_ctx,hx::Null< int >  __o_elements) {
	Uint32ArrayPrivate_obj *__this = (Uint32ArrayPrivate_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Uint32ArrayPrivate_obj), true, "kha.arrays.Uint32ArrayPrivate"));
	*(void **)__this = Uint32ArrayPrivate_obj::_hx_vtable;
	__this->__construct(__o_elements);
	return __this;
}

Uint32ArrayPrivate_obj::Uint32ArrayPrivate_obj()
{
}

void Uint32ArrayPrivate_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Uint32ArrayPrivate);
	HX_MARK_MEMBER_NAME(self,"self");
	HX_MARK_END_CLASS();
}

void Uint32ArrayPrivate_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(self,"self");
}

void Uint32ArrayPrivate_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("self",8c,8b,50,4c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo Uint32ArrayPrivate_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*  uint32array */ ,(int)offsetof(Uint32ArrayPrivate_obj,self),HX_("self",8c,8b,50,4c)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Uint32ArrayPrivate_obj_sStaticStorageInfo = 0;
#endif

hx::Class Uint32ArrayPrivate_obj::__mClass;

void Uint32ArrayPrivate_obj::__register()
{
	Uint32ArrayPrivate_obj _hx_dummy;
	Uint32ArrayPrivate_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("kha.arrays.Uint32ArrayPrivate",4d,e7,2f,32);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Uint32ArrayPrivate_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Uint32ArrayPrivate_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Uint32ArrayPrivate_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace arrays