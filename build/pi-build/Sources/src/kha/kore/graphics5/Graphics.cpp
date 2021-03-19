// Generated by Haxe 4.0.0-preview.5+1aaf080
#include <hxcpp.h>

#ifndef INCLUDED_kha_Canvas
#include <hxinc/kha/Canvas.h>
#endif
#ifndef INCLUDED_kha_graphics5_Graphics
#include <hxinc/kha/graphics5/Graphics.h>
#endif
#ifndef INCLUDED_kha_graphics5_RenderTarget
#include <hxinc/kha/graphics5/RenderTarget.h>
#endif
#ifndef INCLUDED_kha_kore_graphics5_Graphics
#include <hxinc/kha/kore/graphics5/Graphics.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_067c5af36c700f1b_22_new,"kha.kore.graphics5.Graphics","new",0xe6ee592e,"kha.kore.graphics5.Graphics.new","kha/kore/graphics5/Graphics.hx",22,0x2229db41)
HX_LOCAL_STACK_FRAME(_hx_pos_067c5af36c700f1b_26_renderTargetsInvertedY,"kha.kore.graphics5.Graphics","renderTargetsInvertedY",0xcb9444ca,"kha.kore.graphics5.Graphics.renderTargetsInvertedY","kha/kore/graphics5/Graphics.hx",26,0x2229db41)
HX_LOCAL_STACK_FRAME(_hx_pos_067c5af36c700f1b_30_begin,"kha.kore.graphics5.Graphics","begin",0x593ec277,"kha.kore.graphics5.Graphics.begin","kha/kore/graphics5/Graphics.hx",30,0x2229db41)
HX_LOCAL_STACK_FRAME(_hx_pos_067c5af36c700f1b_34_end,"kha.kore.graphics5.Graphics","end",0xe6e78ca9,"kha.kore.graphics5.Graphics.end","kha/kore/graphics5/Graphics.hx",34,0x2229db41)
HX_LOCAL_STACK_FRAME(_hx_pos_067c5af36c700f1b_38_swapBuffers,"kha.kore.graphics5.Graphics","swapBuffers",0xc7996fee,"kha.kore.graphics5.Graphics.swapBuffers","kha/kore/graphics5/Graphics.hx",38,0x2229db41)
namespace kha{
namespace kore{
namespace graphics5{

void Graphics_obj::__construct(::Dynamic target){
            	HX_STACKFRAME(&_hx_pos_067c5af36c700f1b_22_new)
HXDLIN(  22)		this->target = target;
            	}

Dynamic Graphics_obj::__CreateEmpty() { return new Graphics_obj; }

void *Graphics_obj::_hx_vtable = 0;

Dynamic Graphics_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Graphics_obj > _hx_result = new Graphics_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Graphics_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x17639522;
}

static ::kha::graphics5::Graphics_obj _hx_kha_kore_graphics5_Graphics__hx_kha_graphics5_Graphics= {
	( bool (hx::Object::*)())&::kha::kore::graphics5::Graphics_obj::renderTargetsInvertedY,
	( void (hx::Object::*)( ::kha::graphics5::RenderTarget))&::kha::kore::graphics5::Graphics_obj::begin,
	( void (hx::Object::*)())&::kha::kore::graphics5::Graphics_obj::end,
	( void (hx::Object::*)())&::kha::kore::graphics5::Graphics_obj::swapBuffers,
};

void *Graphics_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x3b0dbfd1: return &_hx_kha_kore_graphics5_Graphics__hx_kha_graphics5_Graphics;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

bool Graphics_obj::renderTargetsInvertedY(){
            	HX_STACKFRAME(&_hx_pos_067c5af36c700f1b_26_renderTargetsInvertedY)
HXDLIN(  26)		return Kore::Graphics5::renderTargetsInvertedY();;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,renderTargetsInvertedY,return )

void Graphics_obj::begin( ::kha::graphics5::RenderTarget target){
            	HX_STACKFRAME(&_hx_pos_067c5af36c700f1b_30_begin)
HXDLIN(  30)		Kore::Graphics5::begin(target->renderTarget);;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,begin,(void))

void Graphics_obj::end(){
            	HX_STACKFRAME(&_hx_pos_067c5af36c700f1b_34_end)
HXDLIN(  34)		Kore::Graphics5::end();;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,end,(void))

void Graphics_obj::swapBuffers(){
            	HX_STACKFRAME(&_hx_pos_067c5af36c700f1b_38_swapBuffers)
HXDLIN(  38)		Kore::Graphics5::swapBuffers();;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,swapBuffers,(void))


hx::ObjectPtr< Graphics_obj > Graphics_obj::__new(::Dynamic target) {
	hx::ObjectPtr< Graphics_obj > __this = new Graphics_obj();
	__this->__construct(target);
	return __this;
}

hx::ObjectPtr< Graphics_obj > Graphics_obj::__alloc(hx::Ctx *_hx_ctx,::Dynamic target) {
	Graphics_obj *__this = (Graphics_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Graphics_obj), true, "kha.kore.graphics5.Graphics"));
	*(void **)__this = Graphics_obj::_hx_vtable;
	__this->__construct(target);
	return __this;
}

Graphics_obj::Graphics_obj()
{
}

void Graphics_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Graphics);
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_END_CLASS();
}

void Graphics_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(target,"target");
}

hx::Val Graphics_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { return hx::Val( end_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"begin") ) { return hx::Val( begin_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { return hx::Val( target ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"swapBuffers") ) { return hx::Val( swapBuffers_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"renderTargetsInvertedY") ) { return hx::Val( renderTargetsInvertedY_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Graphics_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast< ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Graphics_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("target",51,f3,ec,86));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo Graphics_obj_sMemberStorageInfo[] = {
	{hx::fsObject /* ::Dynamic */ ,(int)offsetof(Graphics_obj,target),HX_("target",51,f3,ec,86)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Graphics_obj_sStaticStorageInfo = 0;
#endif

static ::String Graphics_obj_sMemberFields[] = {
	HX_("target",51,f3,ec,86),
	HX_("renderTargetsInvertedY",d8,54,7d,0d),
	HX_("begin",29,ea,55,b0),
	HX_("end",db,03,4d,00),
	HX_("swapBuffers",20,69,f4,b8),
	::String(null()) };

hx::Class Graphics_obj::__mClass;

void Graphics_obj::__register()
{
	Graphics_obj _hx_dummy;
	Graphics_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("kha.kore.graphics5.Graphics",3c,ea,6a,7b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Graphics_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Graphics_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Graphics_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Graphics_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace kore
} // end namespace graphics5
