// Generated by Haxe 4.0.0-preview.5+1aaf080
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <hxinc/haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_kha_Resource
#include <hxinc/kha/Resource.h>
#endif
#ifndef INCLUDED_kha_graphics4_GeometryShader
#include <hxinc/kha/graphics4/GeometryShader.h>
#endif
#ifndef INCLUDED_kha_internal_BytesBlob
#include <hxinc/kha/internal/BytesBlob.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_82b1c26a021a807a_14_new,"kha.graphics4.GeometryShader","new",0x699e56d8,"kha.graphics4.GeometryShader.new","kha/graphics4/GeometryShader.hx",14,0x31a51616)
HX_LOCAL_STACK_FRAME(_hx_pos_82b1c26a021a807a_18_init,"kha.graphics4.GeometryShader","init",0xfda65d98,"kha.graphics4.GeometryShader.init","kha/graphics4/GeometryShader.hx",18,0x31a51616)
HX_LOCAL_STACK_FRAME(_hx_pos_82b1c26a021a807a_22_delete,"kha.graphics4.GeometryShader","delete",0x4db794b3,"kha.graphics4.GeometryShader.delete","kha/graphics4/GeometryShader.hx",22,0x31a51616)
HX_LOCAL_STACK_FRAME(_hx_pos_82b1c26a021a807a_27__forceInclude,"kha.graphics4.GeometryShader","_forceInclude",0x580936d4,"kha.graphics4.GeometryShader._forceInclude","kha/graphics4/GeometryShader.hx",27,0x31a51616)
namespace kha{
namespace graphics4{

void GeometryShader_obj::__construct(::Array< ::Dynamic> sources,::Array< ::String > files){
            	HX_STACKFRAME(&_hx_pos_82b1c26a021a807a_14_new)
HXDLIN(  14)		this->init(sources->__get(0).StaticCast<  ::kha::internal::BytesBlob >(),files->__get(0));
            	}

Dynamic GeometryShader_obj::__CreateEmpty() { return new GeometryShader_obj; }

void *GeometryShader_obj::_hx_vtable = 0;

Dynamic GeometryShader_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GeometryShader_obj > _hx_result = new GeometryShader_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool GeometryShader_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x763a44fc;
}

void GeometryShader_obj::init( ::kha::internal::BytesBlob source,::String file){
            	HX_STACKFRAME(&_hx_pos_82b1c26a021a807a_18_init)
HXDLIN(  18)		shader = new Kore::Graphics4::Shader(source->bytes->b->Pointer(), source->get_length(), Kore::Graphics4::GeometryShader);;
            	}


HX_DEFINE_DYNAMIC_FUNC2(GeometryShader_obj,init,(void))

void GeometryShader_obj::_hx_delete(){
            	HX_STACKFRAME(&_hx_pos_82b1c26a021a807a_22_delete)
HXDLIN(  22)		delete shader; shader = nullptr;;
            	}


HX_DEFINE_DYNAMIC_FUNC0(GeometryShader_obj,_hx_delete,(void))

void GeometryShader_obj::_forceInclude(){
            	HX_STACKFRAME(&_hx_pos_82b1c26a021a807a_27__forceInclude)
HXDLIN(  27)		::haxe::io::Bytes_obj::alloc(0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(GeometryShader_obj,_forceInclude,(void))


hx::ObjectPtr< GeometryShader_obj > GeometryShader_obj::__new(::Array< ::Dynamic> sources,::Array< ::String > files) {
	hx::ObjectPtr< GeometryShader_obj > __this = new GeometryShader_obj();
	__this->__construct(sources,files);
	return __this;
}

hx::ObjectPtr< GeometryShader_obj > GeometryShader_obj::__alloc(hx::Ctx *_hx_ctx,::Array< ::Dynamic> sources,::Array< ::String > files) {
	GeometryShader_obj *__this = (GeometryShader_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GeometryShader_obj), false, "kha.graphics4.GeometryShader"));
	*(void **)__this = GeometryShader_obj::_hx_vtable;
	__this->__construct(sources,files);
	return __this;
}

GeometryShader_obj::GeometryShader_obj()
{
}

hx::Val GeometryShader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return hx::Val( init_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"delete") ) { return hx::Val( _hx_delete_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_forceInclude") ) { return hx::Val( _forceInclude_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *GeometryShader_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *GeometryShader_obj_sStaticStorageInfo = 0;
#endif

static ::String GeometryShader_obj_sMemberFields[] = {
	HX_("init",10,3b,bb,45),
	HX_("delete",2b,c0,d8,6a),
	HX_("_forceInclude",5c,ea,d8,d9),
	::String(null()) };

hx::Class GeometryShader_obj::__mClass;

void GeometryShader_obj::__register()
{
	GeometryShader_obj _hx_dummy;
	GeometryShader_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("kha.graphics4.GeometryShader",e6,4a,cc,5f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(GeometryShader_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GeometryShader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GeometryShader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GeometryShader_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace graphics4
