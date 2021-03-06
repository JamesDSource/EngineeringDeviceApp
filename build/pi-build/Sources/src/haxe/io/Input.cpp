// Generated by Haxe 4.0.0-preview.5+1aaf080
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <hxinc/haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Encoding
#include <hxinc/haxe/io/Encoding.h>
#endif
#ifndef INCLUDED_haxe_io_Eof
#include <hxinc/haxe/io/Eof.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <hxinc/haxe/io/Error.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <hxinc/haxe/io/Input.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_0fe28b7afb2e6880_51_readByte,"haxe.io.Input","readByte",0x4de8a3c2,"haxe.io.Input.readByte","c:\\Program Files\\WindowsApps\\5649RobertKonrad.KodeStudio_18.11.0.0_x64__j9akr42m5hw02\\resources\\app\\kodeExtensions\\kha\\Kha\\Tools\\haxe\\std/haxe/io/Input.hx",51,0x3b95c6cc)
HX_LOCAL_STACK_FRAME(_hx_pos_0fe28b7afb2e6880_64_readBytes,"haxe.io.Input","readBytes",0xdda6a671,"haxe.io.Input.readBytes","c:\\Program Files\\WindowsApps\\5649RobertKonrad.KodeStudio_18.11.0.0_x64__j9akr42m5hw02\\resources\\app\\kodeExtensions\\kha\\Kha\\Tools\\haxe\\std/haxe/io/Input.hx",64,0x3b95c6cc)
HX_LOCAL_STACK_FRAME(_hx_pos_0fe28b7afb2e6880_135_readFullBytes,"haxe.io.Input","readFullBytes",0x3db9a162,"haxe.io.Input.readFullBytes","c:\\Program Files\\WindowsApps\\5649RobertKonrad.KodeStudio_18.11.0.0_x64__j9akr42m5hw02\\resources\\app\\kodeExtensions\\kha\\Kha\\Tools\\haxe\\std/haxe/io/Input.hx",135,0x3b95c6cc)
HX_LOCAL_STACK_FRAME(_hx_pos_0fe28b7afb2e6880_147_read,"haxe.io.Input","read",0x27b9839a,"haxe.io.Input.read","c:\\Program Files\\WindowsApps\\5649RobertKonrad.KodeStudio_18.11.0.0_x64__j9akr42m5hw02\\resources\\app\\kodeExtensions\\kha\\Kha\\Tools\\haxe\\std/haxe/io/Input.hx",147,0x3b95c6cc)
HX_LOCAL_STACK_FRAME(_hx_pos_0fe28b7afb2e6880_281_readInt32,"haxe.io.Input","readInt32",0xde2f3154,"haxe.io.Input.readInt32","c:\\Program Files\\WindowsApps\\5649RobertKonrad.KodeStudio_18.11.0.0_x64__j9akr42m5hw02\\resources\\app\\kodeExtensions\\kha\\Kha\\Tools\\haxe\\std/haxe/io/Input.hx",281,0x3b95c6cc)
HX_LOCAL_STACK_FRAME(_hx_pos_0fe28b7afb2e6880_303_readString,"haxe.io.Input","readString",0xfdebd00b,"haxe.io.Input.readString","c:\\Program Files\\WindowsApps\\5649RobertKonrad.KodeStudio_18.11.0.0_x64__j9akr42m5hw02\\resources\\app\\kodeExtensions\\kha\\Kha\\Tools\\haxe\\std/haxe/io/Input.hx",303,0x3b95c6cc)
namespace haxe{
namespace io{

void Input_obj::__construct() { }

Dynamic Input_obj::__CreateEmpty() { return new Input_obj; }

void *Input_obj::_hx_vtable = 0;

Dynamic Input_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Input_obj > _hx_result = new Input_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Input_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5c18cd32;
}

int Input_obj::readByte(){
            	HX_STACKFRAME(&_hx_pos_0fe28b7afb2e6880_51_readByte)
HXDLIN(  51)		HX_STACK_DO_THROW(HX_("Not implemented",15,1e,32,34));
HXDLIN(  51)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,readByte,return )

int Input_obj::readBytes( ::haxe::io::Bytes s,int pos,int len){
            	HX_STACKFRAME(&_hx_pos_0fe28b7afb2e6880_64_readBytes)
HXLINE(  65)		int k = len;
HXLINE(  66)		::Array< unsigned char > b = s->b;
HXLINE(  67)		bool _hx_tmp;
HXDLIN(  67)		bool _hx_tmp1;
HXDLIN(  67)		if ((pos >= 0)) {
HXLINE(  67)			_hx_tmp1 = (len < 0);
            		}
            		else {
HXLINE(  67)			_hx_tmp1 = true;
            		}
HXDLIN(  67)		if (!(_hx_tmp1)) {
HXLINE(  67)			_hx_tmp = ((pos + len) > s->length);
            		}
            		else {
HXLINE(  67)			_hx_tmp = true;
            		}
HXDLIN(  67)		if (_hx_tmp) {
HXLINE(  68)			HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds_dyn());
            		}
HXLINE(  69)		try {
            			HX_STACK_CATCHABLE( ::haxe::io::Eof, 0);
HXLINE(  70)			while((k > 0)){
HXLINE(  76)				b[pos] = ( (unsigned char)(this->readByte()) );
HXLINE(  80)				pos = (pos + 1);
HXLINE(  81)				k = (k - 1);
            			}
            		}
            		catch( ::Dynamic _hx_e){
            			if (_hx_e.IsClass<  ::haxe::io::Eof >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::haxe::io::Eof eof = _hx_e;
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE(  84)		return (len - k);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Input_obj,readBytes,return )

void Input_obj::readFullBytes( ::haxe::io::Bytes s,int pos,int len){
            	HX_STACKFRAME(&_hx_pos_0fe28b7afb2e6880_135_readFullBytes)
HXDLIN( 135)		while((len > 0)){
HXLINE( 136)			int k = this->readBytes(s,pos,len);
HXLINE( 137)			if ((k == 0)) {
HXLINE( 138)				HX_STACK_DO_THROW(::haxe::io::Error_obj::Blocked_dyn());
            			}
HXLINE( 139)			pos = (pos + k);
HXLINE( 140)			len = (len - k);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Input_obj,readFullBytes,(void))

 ::haxe::io::Bytes Input_obj::read(int nbytes){
            	HX_STACKFRAME(&_hx_pos_0fe28b7afb2e6880_147_read)
HXLINE( 148)		 ::haxe::io::Bytes s = ::haxe::io::Bytes_obj::alloc(nbytes);
HXLINE( 149)		int p = 0;
HXLINE( 150)		while((nbytes > 0)){
HXLINE( 151)			int k = this->readBytes(s,p,nbytes);
HXLINE( 152)			if ((k == 0)) {
HXLINE( 152)				HX_STACK_DO_THROW(::haxe::io::Error_obj::Blocked_dyn());
            			}
HXLINE( 153)			p = (p + k);
HXLINE( 154)			nbytes = (nbytes - k);
            		}
HXLINE( 156)		return s;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,read,return )

int Input_obj::readInt32(){
            	HX_STACKFRAME(&_hx_pos_0fe28b7afb2e6880_281_readInt32)
HXLINE( 282)		int ch1 = this->readByte();
HXLINE( 283)		int ch2 = this->readByte();
HXLINE( 284)		int ch3 = this->readByte();
HXLINE( 285)		int ch4 = this->readByte();
HXLINE( 296)		if (this->bigEndian) {
HXLINE( 296)			return (((ch4 | (ch3 << 8)) | (ch2 << 16)) | (ch1 << 24));
            		}
            		else {
HXLINE( 296)			return (((ch1 | (ch2 << 8)) | (ch3 << 16)) | (ch4 << 24));
            		}
HXDLIN( 296)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,readInt32,return )

::String Input_obj::readString(int len, ::haxe::io::Encoding encoding){
            	HX_STACKFRAME(&_hx_pos_0fe28b7afb2e6880_303_readString)
HXLINE( 304)		 ::haxe::io::Bytes b = ::haxe::io::Bytes_obj::alloc(len);
HXLINE( 305)		this->readFullBytes(b,0,len);
HXLINE( 309)		return b->getString(0,len,encoding);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Input_obj,readString,return )


Input_obj::Input_obj()
{
}

hx::Val Input_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"read") ) { return hx::Val( read_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"readByte") ) { return hx::Val( readByte_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"bigEndian") ) { return hx::Val( bigEndian ); }
		if (HX_FIELD_EQ(inName,"readBytes") ) { return hx::Val( readBytes_dyn() ); }
		if (HX_FIELD_EQ(inName,"readInt32") ) { return hx::Val( readInt32_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"readString") ) { return hx::Val( readString_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"readFullBytes") ) { return hx::Val( readFullBytes_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Input_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"bigEndian") ) { bigEndian=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Input_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bigEndian",7b,d5,5a,20));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo Input_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Input_obj,bigEndian),HX_("bigEndian",7b,d5,5a,20)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Input_obj_sStaticStorageInfo = 0;
#endif

static ::String Input_obj_sMemberFields[] = {
	HX_("bigEndian",7b,d5,5a,20),
	HX_("readByte",7e,f9,1a,69),
	HX_("readBytes",35,55,7f,8e),
	HX_("readFullBytes",26,02,0b,ce),
	HX_("read",56,4b,a7,4b),
	HX_("readInt32",18,e0,07,8f),
	HX_("readString",c7,0c,ac,0a),
	::String(null()) };

hx::Class Input_obj::__mClass;

void Input_obj::__register()
{
	Input_obj _hx_dummy;
	Input_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("haxe.io.Input",aa,0e,f5,9f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Input_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Input_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Input_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Input_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace io
