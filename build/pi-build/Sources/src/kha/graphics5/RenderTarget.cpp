// Generated by Haxe 4.0.0-preview.5+1aaf080
#include <hxcpp.h>

#ifndef INCLUDED_kha_graphics4_TextureFormat
#include <hxinc/kha/graphics4/TextureFormat.h>
#endif
#ifndef INCLUDED_kha_graphics5_RenderTarget
#include <hxinc/kha/graphics5/RenderTarget.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_35507d6b7b99b3bb_12_new,"kha.graphics5.RenderTarget","new",0xac8c33c7,"kha.graphics5.RenderTarget.new","kha/graphics5/RenderTarget.hx",12,0xd0e23087)
HX_LOCAL_STACK_FRAME(_hx_pos_35507d6b7b99b3bb_16_init,"kha.graphics5.RenderTarget","init",0x4ad9d1c9,"kha.graphics5.RenderTarget.init","kha/graphics5/RenderTarget.hx",16,0xd0e23087)
HX_LOCAL_STACK_FRAME(_hx_pos_35507d6b7b99b3bb_21_getRenderTargetFormat,"kha.graphics5.RenderTarget","getRenderTargetFormat",0x9457f53b,"kha.graphics5.RenderTarget.getRenderTargetFormat","kha/graphics5/RenderTarget.hx",21,0xd0e23087)
namespace kha{
namespace graphics5{

void RenderTarget_obj::__construct(int width,int height,int depthBufferBits,bool antialiasing, ::kha::graphics4::TextureFormat format,int stencilBufferBits,int contextId){
            	HX_STACKFRAME(&_hx_pos_35507d6b7b99b3bb_12_new)
HXDLIN(  12)		this->init(width,height,depthBufferBits,antialiasing,::kha::graphics5::RenderTarget_obj::getRenderTargetFormat(format),stencilBufferBits,contextId);
            	}

Dynamic RenderTarget_obj::__CreateEmpty() { return new RenderTarget_obj; }

void *RenderTarget_obj::_hx_vtable = 0;

Dynamic RenderTarget_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< RenderTarget_obj > _hx_result = new RenderTarget_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return _hx_result;
}

bool RenderTarget_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x073fb94d;
}

void RenderTarget_obj::init(int width,int height,int depthBufferBits,bool antialiasing,int format,int stencilBufferBits,int contextId){
            	HX_STACKFRAME(&_hx_pos_35507d6b7b99b3bb_16_init)
            	renderTarget = new Kore::Graphics5::RenderTarget(width, height, depthBufferBits, antialiasing, (Kore::Graphics5::RenderTargetFormat)format, stencilBufferBits, contextId);

            	}


HX_DEFINE_DYNAMIC_FUNC7(RenderTarget_obj,init,(void))

int RenderTarget_obj::getRenderTargetFormat( ::kha::graphics4::TextureFormat format){
            	HX_STACKFRAME(&_hx_pos_35507d6b7b99b3bb_21_getRenderTargetFormat)
HXDLIN(  21)		switch((int)(format->_hx_getIndex())){
            			case (int)0: {
HXLINE(  23)				return 0;
            			}
            			break;
            			case (int)1: {
HXLINE(  33)				return 5;
            			}
            			break;
            			case (int)2: {
HXLINE(  29)				return 3;
            			}
            			break;
            			case (int)3: {
HXLINE(  31)				return 4;
            			}
            			break;
            			case (int)4: {
HXLINE(  25)				return 1;
            			}
            			break;
            			case (int)5: {
HXLINE(  27)				return 2;
            			}
            			break;
            			case (int)6: {
HXLINE(  35)				return 6;
            			}
            			break;
            		}
HXLINE(  21)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(RenderTarget_obj,getRenderTargetFormat,return )


hx::ObjectPtr< RenderTarget_obj > RenderTarget_obj::__new(int width,int height,int depthBufferBits,bool antialiasing, ::kha::graphics4::TextureFormat format,int stencilBufferBits,int contextId) {
	hx::ObjectPtr< RenderTarget_obj > __this = new RenderTarget_obj();
	__this->__construct(width,height,depthBufferBits,antialiasing,format,stencilBufferBits,contextId);
	return __this;
}

hx::ObjectPtr< RenderTarget_obj > RenderTarget_obj::__alloc(hx::Ctx *_hx_ctx,int width,int height,int depthBufferBits,bool antialiasing, ::kha::graphics4::TextureFormat format,int stencilBufferBits,int contextId) {
	RenderTarget_obj *__this = (RenderTarget_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(RenderTarget_obj), false, "kha.graphics5.RenderTarget"));
	*(void **)__this = RenderTarget_obj::_hx_vtable;
	__this->__construct(width,height,depthBufferBits,antialiasing,format,stencilBufferBits,contextId);
	return __this;
}

RenderTarget_obj::RenderTarget_obj()
{
}

hx::Val RenderTarget_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return hx::Val( init_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool RenderTarget_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 21:
		if (HX_FIELD_EQ(inName,"getRenderTargetFormat") ) { outValue = getRenderTargetFormat_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *RenderTarget_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *RenderTarget_obj_sStaticStorageInfo = 0;
#endif

static ::String RenderTarget_obj_sMemberFields[] = {
	HX_("init",10,3b,bb,45),
	::String(null()) };

hx::Class RenderTarget_obj::__mClass;

static ::String RenderTarget_obj_sStaticFields[] = {
	HX_("getRenderTargetFormat",14,ac,07,63),
	::String(null())
};

void RenderTarget_obj::__register()
{
	RenderTarget_obj _hx_dummy;
	RenderTarget_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("kha.graphics5.RenderTarget",55,44,cf,c9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &RenderTarget_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(RenderTarget_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(RenderTarget_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< RenderTarget_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RenderTarget_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RenderTarget_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace graphics5
