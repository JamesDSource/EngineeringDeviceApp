// Generated by Haxe 4.0.0-preview.5+1aaf080
#include <hxcpp.h>

#ifndef INCLUDED_kha_arrays_Float32ArrayPrivate
#include <hxinc/kha/arrays/Float32ArrayPrivate.h>
#endif
#ifndef INCLUDED_kha_audio2_Buffer
#include <hxinc/kha/audio2/Buffer.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_cd50d79d01d5e014_12_new,"kha.audio2.Buffer","new",0xffac43da,"kha.audio2.Buffer.new","kha/audio2/Buffer.hx",12,0x623cbeb6)
namespace kha{
namespace audio2{

void Buffer_obj::__construct(int size,int channels,int samplesPerSecond){
            	HX_GC_STACKFRAME(&_hx_pos_cd50d79d01d5e014_12_new)
HXLINE(  13)		this->size = size;
HXLINE(  14)		 ::kha::arrays::Float32ArrayPrivate this1 =  ::kha::arrays::Float32ArrayPrivate_obj::__alloc( HX_CTX ,size);
HXDLIN(  14)		this->data = this1;
HXLINE(  15)		this->channels = channels;
HXLINE(  16)		this->samplesPerSecond = samplesPerSecond;
HXLINE(  17)		this->readLocation = 0;
HXLINE(  18)		this->writeLocation = 0;
            	}

Dynamic Buffer_obj::__CreateEmpty() { return new Buffer_obj; }

void *Buffer_obj::_hx_vtable = 0;

Dynamic Buffer_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Buffer_obj > _hx_result = new Buffer_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool Buffer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3de9c960;
}


hx::ObjectPtr< Buffer_obj > Buffer_obj::__new(int size,int channels,int samplesPerSecond) {
	hx::ObjectPtr< Buffer_obj > __this = new Buffer_obj();
	__this->__construct(size,channels,samplesPerSecond);
	return __this;
}

hx::ObjectPtr< Buffer_obj > Buffer_obj::__alloc(hx::Ctx *_hx_ctx,int size,int channels,int samplesPerSecond) {
	Buffer_obj *__this = (Buffer_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Buffer_obj), true, "kha.audio2.Buffer"));
	*(void **)__this = Buffer_obj::_hx_vtable;
	__this->__construct(size,channels,samplesPerSecond);
	return __this;
}

Buffer_obj::Buffer_obj()
{
}

void Buffer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Buffer);
	HX_MARK_MEMBER_NAME(channels,"channels");
	HX_MARK_MEMBER_NAME(samplesPerSecond,"samplesPerSecond");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(readLocation,"readLocation");
	HX_MARK_MEMBER_NAME(writeLocation,"writeLocation");
	HX_MARK_END_CLASS();
}

void Buffer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(channels,"channels");
	HX_VISIT_MEMBER_NAME(samplesPerSecond,"samplesPerSecond");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(readLocation,"readLocation");
	HX_VISIT_MEMBER_NAME(writeLocation,"writeLocation");
}

hx::Val Buffer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return hx::Val( data ); }
		if (HX_FIELD_EQ(inName,"size") ) { return hx::Val( size ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"channels") ) { return hx::Val( channels ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"readLocation") ) { return hx::Val( readLocation ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"writeLocation") ) { return hx::Val( writeLocation ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"samplesPerSecond") ) { return hx::Val( samplesPerSecond ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Buffer_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast<  ::kha::arrays::Float32ArrayPrivate >(); return inValue; }
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"channels") ) { channels=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"readLocation") ) { readLocation=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"writeLocation") ) { writeLocation=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"samplesPerSecond") ) { samplesPerSecond=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Buffer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("channels",50,aa,ee,6a));
	outFields->push(HX_("samplesPerSecond",e8,cd,b6,e5));
	outFields->push(HX_("data",2a,56,63,42));
	outFields->push(HX_("size",c1,a0,53,4c));
	outFields->push(HX_("readLocation",ab,bb,7b,20));
	outFields->push(HX_("writeLocation",34,0e,e8,a8));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo Buffer_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Buffer_obj,channels),HX_("channels",50,aa,ee,6a)},
	{hx::fsInt,(int)offsetof(Buffer_obj,samplesPerSecond),HX_("samplesPerSecond",e8,cd,b6,e5)},
	{hx::fsObject /*  ::kha::arrays::Float32ArrayPrivate */ ,(int)offsetof(Buffer_obj,data),HX_("data",2a,56,63,42)},
	{hx::fsInt,(int)offsetof(Buffer_obj,size),HX_("size",c1,a0,53,4c)},
	{hx::fsInt,(int)offsetof(Buffer_obj,readLocation),HX_("readLocation",ab,bb,7b,20)},
	{hx::fsInt,(int)offsetof(Buffer_obj,writeLocation),HX_("writeLocation",34,0e,e8,a8)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Buffer_obj_sStaticStorageInfo = 0;
#endif

static ::String Buffer_obj_sMemberFields[] = {
	HX_("channels",50,aa,ee,6a),
	HX_("samplesPerSecond",e8,cd,b6,e5),
	HX_("data",2a,56,63,42),
	HX_("size",c1,a0,53,4c),
	HX_("readLocation",ab,bb,7b,20),
	HX_("writeLocation",34,0e,e8,a8),
	::String(null()) };

hx::Class Buffer_obj::__mClass;

void Buffer_obj::__register()
{
	Buffer_obj _hx_dummy;
	Buffer_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("kha.audio2.Buffer",e8,0e,5b,e6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Buffer_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Buffer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Buffer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Buffer_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace audio2
