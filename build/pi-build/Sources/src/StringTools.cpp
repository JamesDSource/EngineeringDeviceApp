// Generated by Haxe 4.0.0-preview.5+1aaf080
#include <hxcpp.h>

#ifndef INCLUDED_5f5af744d9ff5693
#define INCLUDED_5f5af744d9ff5693
#include "cpp/Pointer.h"
#endif
#ifndef INCLUDED_StringTools
#include <hxinc/StringTools.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_cb3ec82c04c2cadf_115_urlDecode,"StringTools","urlDecode",0x71b947f9,"StringTools.urlDecode","c:\\Program Files\\WindowsApps\\5649RobertKonrad.KodeStudio_18.11.0.0_x64__j9akr42m5hw02\\resources\\app\\kodeExtensions\\kha\\Kha\\Tools\\haxe\\std/StringTools.hx",115,0x4d20f56c)
HX_LOCAL_STACK_FRAME(_hx_pos_cb3ec82c04c2cadf_223_endsWith,"StringTools","endsWith",0x0eb5bfe2,"StringTools.endsWith","c:\\Program Files\\WindowsApps\\5649RobertKonrad.KodeStudio_18.11.0.0_x64__j9akr42m5hw02\\resources\\app\\kodeExtensions\\kha\\Kha\\Tools\\haxe\\std/StringTools.hx",223,0x4d20f56c)

void StringTools_obj::__construct() { }

Dynamic StringTools_obj::__CreateEmpty() { return new StringTools_obj; }

void *StringTools_obj::_hx_vtable = 0;

Dynamic StringTools_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< StringTools_obj > _hx_result = new StringTools_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool StringTools_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0363db6a;
}

::String StringTools_obj::urlDecode(::String s){
            	HX_STACKFRAME(&_hx_pos_cb3ec82c04c2cadf_115_urlDecode)
HXDLIN( 115)		return ( (::String)(s.__URLDecode()) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringTools_obj,urlDecode,return )

bool StringTools_obj::endsWith(::String s,::String end){
            	HX_STACKFRAME(&_hx_pos_cb3ec82c04c2cadf_223_endsWith)
HXLINE( 229)		if ((s.length < end.length)) {
HXLINE( 230)			return false;
            		}
HXLINE( 231)		::cpp::Pointer< char > p0 = cpp::Pointer_obj::fromPointer(s.__s);
HXDLIN( 231)		::cpp::Pointer< char > p01 = p0->add((s.length - end.length));
HXLINE( 232)		::cpp::Pointer< char > p1 = cpp::Pointer_obj::fromPointer(end.__s);
HXLINE( 233)		{
HXLINE( 233)			int _g = 0;
HXDLIN( 233)			int _g1 = end.length;
HXDLIN( 233)			while((_g < _g1)){
HXLINE( 233)				_g = (_g + 1);
HXDLIN( 233)				int i = (_g - 1);
HXLINE( 234)				char & _hx_tmp = p01->at(i);
HXDLIN( 234)				char & _hx_tmp1 = p1->at(i);
HXDLIN( 234)				if (hx::IsNotEq( _hx_tmp,_hx_tmp1 )) {
HXLINE( 235)					return false;
            				}
            			}
            		}
HXLINE( 236)		return true;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringTools_obj,endsWith,return )


StringTools_obj::StringTools_obj()
{
}

bool StringTools_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"endsWith") ) { outValue = endsWith_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"urlDecode") ) { outValue = urlDecode_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *StringTools_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *StringTools_obj_sStaticStorageInfo = 0;
#endif

hx::Class StringTools_obj::__mClass;

static ::String StringTools_obj_sStaticFields[] = {
	HX_("urlDecode",fd,b9,5b,05),
	HX_("endsWith",5e,7a,b6,db),
	::String(null())
};

void StringTools_obj::__register()
{
	StringTools_obj _hx_dummy;
	StringTools_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("StringTools",6a,db,63,03);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &StringTools_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(StringTools_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< StringTools_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StringTools_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StringTools_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

