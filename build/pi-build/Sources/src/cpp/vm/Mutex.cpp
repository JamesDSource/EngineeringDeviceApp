// Generated by Haxe 4.0.0-preview.5+1aaf080
#include <hxcpp.h>

#ifndef INCLUDED_cpp_vm_Mutex
#include <hxinc/cpp/vm/Mutex.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_35ac2ef3f0c07f34_28_new,"cpp.vm.Mutex","new",0xabb3ca05,"cpp.vm.Mutex.new","c:\\Users\\james\\Desktop\\KodeStudio\\resources\\app\\kodeExtensions\\kha\\Kha\\Tools\\haxe\\std/cpp/vm/Mutex.hx",28,0x2396a39b)
HX_LOCAL_STACK_FRAME(_hx_pos_35ac2ef3f0c07f34_31_acquire,"cpp.vm.Mutex","acquire",0xc3527bfb,"cpp.vm.Mutex.acquire","c:\\Users\\james\\Desktop\\KodeStudio\\resources\\app\\kodeExtensions\\kha\\Kha\\Tools\\haxe\\std/cpp/vm/Mutex.hx",31,0x2396a39b)
HX_LOCAL_STACK_FRAME(_hx_pos_35ac2ef3f0c07f34_37_release,"cpp.vm.Mutex","release",0x675bb5ec,"cpp.vm.Mutex.release","c:\\Users\\james\\Desktop\\KodeStudio\\resources\\app\\kodeExtensions\\kha\\Kha\\Tools\\haxe\\std/cpp/vm/Mutex.hx",37,0x2396a39b)
namespace cpp{
namespace vm{

void Mutex_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_35ac2ef3f0c07f34_28_new)
HXDLIN(  28)		this->m =  ::__hxcpp_mutex_create();
            	}

Dynamic Mutex_obj::__CreateEmpty() { return new Mutex_obj; }

void *Mutex_obj::_hx_vtable = 0;

Dynamic Mutex_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Mutex_obj > _hx_result = new Mutex_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Mutex_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2a1b6345;
}

void Mutex_obj::acquire(){
            	HX_STACKFRAME(&_hx_pos_35ac2ef3f0c07f34_31_acquire)
HXDLIN(  31)		 ::__hxcpp_mutex_acquire(this->m);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Mutex_obj,acquire,(void))

void Mutex_obj::release(){
            	HX_STACKFRAME(&_hx_pos_35ac2ef3f0c07f34_37_release)
HXDLIN(  37)		 ::__hxcpp_mutex_release(this->m);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Mutex_obj,release,(void))


Mutex_obj::Mutex_obj()
{
}

void Mutex_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Mutex);
	HX_MARK_MEMBER_NAME(m,"m");
	HX_MARK_END_CLASS();
}

void Mutex_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(m,"m");
}

hx::Val Mutex_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"m") ) { return hx::Val( m ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"acquire") ) { return hx::Val( acquire_dyn() ); }
		if (HX_FIELD_EQ(inName,"release") ) { return hx::Val( release_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Mutex_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"m") ) { m=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Mutex_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("m",6d,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo Mutex_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Mutex_obj,m),HX_("m",6d,00,00,00)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Mutex_obj_sStaticStorageInfo = 0;
#endif

static ::String Mutex_obj_sMemberFields[] = {
	HX_("m",6d,00,00,00),
	HX_("acquire",d6,4b,e4,b4),
	HX_("release",c7,85,ed,58),
	::String(null()) };

hx::Class Mutex_obj::__mClass;

void Mutex_obj::__register()
{
	Mutex_obj _hx_dummy;
	Mutex_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("cpp.vm.Mutex",93,63,23,f0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Mutex_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Mutex_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Mutex_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Mutex_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace cpp
} // end namespace vm
