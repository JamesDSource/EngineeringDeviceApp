// Generated by Haxe 4.0.0-preview.5+1aaf080
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <hxinc/haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_kha_input_Keyboard
#include <hxinc/kha/input/Keyboard.h>
#endif
#ifndef INCLUDED_kha_kore_Keyboard
#include <hxinc/kha/kore/Keyboard.h>
#endif
#ifndef INCLUDED_kha_netsync_Controller
#include <hxinc/kha/netsync/Controller.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d93e16d4ecb08834_11_new,"kha.kore.Keyboard","new",0xf0b10ae6,"kha.kore.Keyboard.new","kha/kore/Keyboard.hx",11,0xeccf92ea)
HX_LOCAL_STACK_FRAME(_hx_pos_d93e16d4ecb08834_15_show,"kha.kore.Keyboard","show",0xad88cfb7,"kha.kore.Keyboard.show","kha/kore/Keyboard.hx",15,0xeccf92ea)
HX_LOCAL_STACK_FRAME(_hx_pos_d93e16d4ecb08834_20_hide,"kha.kore.Keyboard","hide",0xa6442f7c,"kha.kore.Keyboard.hide","kha/kore/Keyboard.hx",20,0xeccf92ea)
HX_LOCAL_STACK_FRAME(_hx_pos_5233b5d470c7b040_117__receive,"kha.kore.Keyboard","_receive",0x49539b1e,"kha.kore.Keyboard._receive","kha/netsync/ControllerBuilder.hx",117,0xeaffa5e1)
namespace kha{
namespace kore{

void Keyboard_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_d93e16d4ecb08834_11_new)
HXDLIN(  11)		super::__construct();
            	}

Dynamic Keyboard_obj::__CreateEmpty() { return new Keyboard_obj; }

void *Keyboard_obj::_hx_vtable = 0;

Dynamic Keyboard_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Keyboard_obj > _hx_result = new Keyboard_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Keyboard_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x58f0db11) {
		if (inClassId<=(int)0x4a682bb4) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x4a682bb4;
		} else {
			return inClassId==(int)0x58f0db11;
		}
	} else {
		return inClassId==(int)0x6eb26782;
	}
}

void Keyboard_obj::show(){
            	HX_STACKFRAME(&_hx_pos_d93e16d4ecb08834_15_show)
            	Kore::System::showKeyboard();

            	}


void Keyboard_obj::hide(){
            	HX_STACKFRAME(&_hx_pos_d93e16d4ecb08834_20_hide)
            	Kore::System::hideKeyboard();

            	}


void Keyboard_obj::_receive( ::haxe::io::Bytes bytes){
            	HX_STACKFRAME(&_hx_pos_5233b5d470c7b040_117__receive)
HXDLIN( 117)		int funcindex = (((( (int)(bytes->b->__get(0)) ) | (( (int)(bytes->b->__get(1)) ) << 8)) | (( (int)(bytes->b->__get(2)) ) << 16)) | (( (int)(bytes->b->__get(3)) ) << 24));
            	}



hx::ObjectPtr< Keyboard_obj > Keyboard_obj::__new() {
	hx::ObjectPtr< Keyboard_obj > __this = new Keyboard_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Keyboard_obj > Keyboard_obj::__alloc(hx::Ctx *_hx_ctx) {
	Keyboard_obj *__this = (Keyboard_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Keyboard_obj), true, "kha.kore.Keyboard"));
	*(void **)__this = Keyboard_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Keyboard_obj::Keyboard_obj()
{
}

hx::Val Keyboard_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"show") ) { return hx::Val( show_dyn() ); }
		if (HX_FIELD_EQ(inName,"hide") ) { return hx::Val( hide_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_receive") ) { return hx::Val( _receive_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *Keyboard_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Keyboard_obj_sStaticStorageInfo = 0;
#endif

static ::String Keyboard_obj_sMemberFields[] = {
	HX_("show",fd,d4,52,4c),
	HX_("hide",c2,34,0e,45),
	HX_("_receive",64,bb,10,64),
	::String(null()) };

hx::Class Keyboard_obj::__mClass;

void Keyboard_obj::__register()
{
	Keyboard_obj _hx_dummy;
	Keyboard_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("kha.kore.Keyboard",f4,5f,14,29);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Keyboard_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Keyboard_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Keyboard_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Keyboard_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace kore
