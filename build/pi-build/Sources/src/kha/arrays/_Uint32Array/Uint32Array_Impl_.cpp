// Generated by Haxe 4.0.0-preview.5+1aaf080
#include <hxcpp.h>

#ifndef INCLUDED_7d028c26efabce49
#define INCLUDED_7d028c26efabce49
#include "cpp_uint32array.h"
#endif
#ifndef INCLUDED_kha_arrays_Uint32ArrayPrivate
#include <hxinc/kha/arrays/Uint32ArrayPrivate.h>
#endif
#ifndef INCLUDED_kha_arrays__Uint32Array_Uint32Array_Impl_
#include <hxinc/kha/arrays/_Uint32Array/Uint32Array_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_3cebbac1c767366f_39__new,"kha.arrays._Uint32Array.Uint32Array_Impl_","_new",0x60ae5b12,"kha.arrays._Uint32Array.Uint32Array_Impl_._new","kha/arrays/Uint32Array.hx",39,0x6874c248)
HX_LOCAL_STACK_FRAME(_hx_pos_3cebbac1c767366f_44_free,"kha.arrays._Uint32Array.Uint32Array_Impl_","free",0x6551e25d,"kha.arrays._Uint32Array.Uint32Array_Impl_.free","kha/arrays/Uint32Array.hx",44,0x6874c248)
HX_LOCAL_STACK_FRAME(_hx_pos_3cebbac1c767366f_50_get_length,"kha.arrays._Uint32Array.Uint32Array_Impl_","get_length",0xcfb72520,"kha.arrays._Uint32Array.Uint32Array_Impl_.get_length","kha/arrays/Uint32Array.hx",50,0x6874c248)
HX_LOCAL_STACK_FRAME(_hx_pos_3cebbac1c767366f_54_set,"kha.arrays._Uint32Array.Uint32Array_Impl_","set",0x60ec5711,"kha.arrays._Uint32Array.Uint32Array_Impl_.set","kha/arrays/Uint32Array.hx",54,0x6874c248)
HX_LOCAL_STACK_FRAME(_hx_pos_3cebbac1c767366f_58_get,"kha.arrays._Uint32Array.Uint32Array_Impl_","get",0x60e33c05,"kha.arrays._Uint32Array.Uint32Array_Impl_.get","kha/arrays/Uint32Array.hx",58,0x6874c248)
HX_LOCAL_STACK_FRAME(_hx_pos_3cebbac1c767366f_63_arrayRead,"kha.arrays._Uint32Array.Uint32Array_Impl_","arrayRead",0xd23a9e3e,"kha.arrays._Uint32Array.Uint32Array_Impl_.arrayRead","kha/arrays/Uint32Array.hx",63,0x6874c248)
HX_LOCAL_STACK_FRAME(_hx_pos_3cebbac1c767366f_68_arrayWrite,"kha.arrays._Uint32Array.Uint32Array_Impl_","arrayWrite",0x0aaea4f7,"kha.arrays._Uint32Array.Uint32Array_Impl_.arrayWrite","kha/arrays/Uint32Array.hx",68,0x6874c248)
namespace kha{
namespace arrays{
namespace _Uint32Array{

void Uint32Array_Impl__obj::__construct() { }

Dynamic Uint32Array_Impl__obj::__CreateEmpty() { return new Uint32Array_Impl__obj; }

void *Uint32Array_Impl__obj::_hx_vtable = 0;

Dynamic Uint32Array_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Uint32Array_Impl__obj > _hx_result = new Uint32Array_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Uint32Array_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x05670ac5;
}

 ::kha::arrays::Uint32ArrayPrivate Uint32Array_Impl__obj::_new(hx::Null< int >  __o_elements){
            		int elements = __o_elements.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_3cebbac1c767366f_39__new)
HXDLIN(  39)		 ::kha::arrays::Uint32ArrayPrivate this1 =  ::kha::arrays::Uint32ArrayPrivate_obj::__alloc( HX_CTX ,elements);
HXDLIN(  39)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Uint32Array_Impl__obj,_new,return )

void Uint32Array_Impl__obj::free( ::kha::arrays::Uint32ArrayPrivate this1){
            	HX_STACKFRAME(&_hx_pos_3cebbac1c767366f_44_free)
HXDLIN(  44)		this1->self.free();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Uint32Array_Impl__obj,free,(void))

int Uint32Array_Impl__obj::get_length( ::kha::arrays::Uint32ArrayPrivate this1){
            	HX_STACKFRAME(&_hx_pos_3cebbac1c767366f_50_get_length)
HXDLIN(  50)		return this1->self.length();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Uint32Array_Impl__obj,get_length,return )

int Uint32Array_Impl__obj::set( ::kha::arrays::Uint32ArrayPrivate this1,int index,int value){
            	HX_STACKFRAME(&_hx_pos_3cebbac1c767366f_54_set)
HXDLIN(  54)		return this1->self.set(index,value);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Uint32Array_Impl__obj,set,return )

int Uint32Array_Impl__obj::get( ::kha::arrays::Uint32ArrayPrivate this1,int index){
            	HX_STACKFRAME(&_hx_pos_3cebbac1c767366f_58_get)
HXDLIN(  58)		return this1->self.get(index);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Uint32Array_Impl__obj,get,return )

int Uint32Array_Impl__obj::arrayRead( ::kha::arrays::Uint32ArrayPrivate this1,int index){
            	HX_STACKFRAME(&_hx_pos_3cebbac1c767366f_63_arrayRead)
HXDLIN(  63)		return this1->self.get(index);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Uint32Array_Impl__obj,arrayRead,return )

int Uint32Array_Impl__obj::arrayWrite( ::kha::arrays::Uint32ArrayPrivate this1,int index,int value){
            	HX_STACKFRAME(&_hx_pos_3cebbac1c767366f_68_arrayWrite)
HXDLIN(  68)		return this1->self.set(index,value);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Uint32Array_Impl__obj,arrayWrite,return )


Uint32Array_Impl__obj::Uint32Array_Impl__obj()
{
}

bool Uint32Array_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { outValue = set_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"free") ) { outValue = free_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"arrayRead") ) { outValue = arrayRead_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { outValue = get_length_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"arrayWrite") ) { outValue = arrayWrite_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *Uint32Array_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Uint32Array_Impl__obj_sStaticStorageInfo = 0;
#endif

hx::Class Uint32Array_Impl__obj::__mClass;

static ::String Uint32Array_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("free",ac,9c,c2,43),
	HX_("get_length",af,04,8f,8f),
	HX_("set",a2,9b,57,00),
	HX_("get",96,80,4e,00),
	HX_("arrayRead",8f,25,19,95),
	HX_("arrayWrite",86,84,86,ca),
	::String(null())
};

void Uint32Array_Impl__obj::__register()
{
	Uint32Array_Impl__obj _hx_dummy;
	Uint32Array_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("kha.arrays._Uint32Array.Uint32Array_Impl_",5d,f8,0c,60);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Uint32Array_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Uint32Array_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Uint32Array_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Uint32Array_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Uint32Array_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace arrays
} // end namespace _Uint32Array
