// Generated by Haxe 4.0.0-preview.5+1aaf080
#include <hxcpp.h>

#ifndef INCLUDED_OriginPoint
#include <hxinc/OriginPoint.h>
#endif
#ifndef INCLUDED_Text
#include <hxinc/Text.h>
#endif
#ifndef INCLUDED_components_Component
#include <hxinc/components/Component.h>
#endif
#ifndef INCLUDED_components_Textbox
#include <hxinc/components/Textbox.h>
#endif
#ifndef INCLUDED_kha_graphics2_Graphics
#include <hxinc/kha/graphics2/Graphics.h>
#endif
#ifndef INCLUDED_kha_math_Vector2
#include <hxinc/kha/math/Vector2.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d4b7230e79e45e5e_5_new,"components.Textbox","new",0x6cd1dbf8,"components.Textbox.new","components/Textbox.hx",5,0xc76235b9)
HX_LOCAL_STACK_FRAME(_hx_pos_d4b7230e79e45e5e_23_setTextSize,"components.Textbox","setTextSize",0x39072168,"components.Textbox.setTextSize","components/Textbox.hx",23,0xc76235b9)
HX_LOCAL_STACK_FRAME(_hx_pos_d4b7230e79e45e5e_32_setText,"components.Textbox","setText",0x8345c507,"components.Textbox.setText","components/Textbox.hx",32,0xc76235b9)
HX_LOCAL_STACK_FRAME(_hx_pos_d4b7230e79e45e5e_38_getText,"components.Textbox","getText",0x904433fb,"components.Textbox.getText","components/Textbox.hx",38,0xc76235b9)
HX_LOCAL_STACK_FRAME(_hx_pos_d4b7230e79e45e5e_41_draw,"components.Textbox","draw",0xc43c456c,"components.Textbox.draw","components/Textbox.hx",41,0xc76235b9)
HX_LOCAL_STACK_FRAME(_hx_pos_d4b7230e79e45e5e_47_getBoundingBox,"components.Textbox","getBoundingBox",0x58e6d379,"components.Textbox.getBoundingBox","components/Textbox.hx",47,0xc76235b9)
HX_LOCAL_STACK_FRAME(_hx_pos_d4b7230e79e45e5e_51_isOver,"components.Textbox","isOver",0x073299c6,"components.Textbox.isOver","components/Textbox.hx",51,0xc76235b9)
namespace components{

void Textbox_obj::__construct( ::kha::math::Vector2 position,::String text){
            	HX_STACKFRAME(&_hx_pos_d4b7230e79e45e5e_5_new)
HXLINE(  16)		this->vSeperation = ((Float)24);
HXLINE(  15)		this->hSeperation = ((Float)12);
HXLINE(  14)		this->fontSize = 24;
HXLINE(   9)		this->originPoint = ::OriginPoint_obj::topLeft_dyn();
HXLINE(  19)		this->position = position;
HXLINE(  20)		this->setText(text);
            	}

Dynamic Textbox_obj::__CreateEmpty() { return new Textbox_obj; }

void *Textbox_obj::_hx_vtable = 0;

Dynamic Textbox_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Textbox_obj > _hx_result = new Textbox_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Textbox_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7f5dfeec;
}

static ::components::Component_obj _hx_components_Textbox__hx_components_Component= {
	( void (hx::Object::*)( ::kha::graphics2::Graphics))&::components::Textbox_obj::draw,
	(  ::Dynamic (hx::Object::*)())&::components::Textbox_obj::getBoundingBox,
	( ::Dynamic (hx::Object::*)(Float,Float))&::components::Textbox_obj::isOver,
};

void *Textbox_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x32011c87: return &_hx_components_Textbox__hx_components_Component;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void Textbox_obj::setTextSize(int fontSize,Float hSeperation,Float vSeperation){
            	HX_STACKFRAME(&_hx_pos_d4b7230e79e45e5e_23_setTextSize)
HXLINE(  24)		this->fontSize = fontSize;
HXLINE(  25)		this->hSeperation = hSeperation;
HXLINE(  26)		this->vSeperation = vSeperation;
HXLINE(  29)		this->setText(this->text);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Textbox_obj,setTextSize,(void))

void Textbox_obj::setText(::String text){
            	HX_STACKFRAME(&_hx_pos_d4b7230e79e45e5e_32_setText)
HXLINE(  33)		this->text = text;
HXLINE(  34)		this->textSize = ::Text_obj::textSize(text,this->hSeperation,this->vSeperation,null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(Textbox_obj,setText,(void))

::String Textbox_obj::getText(){
            	HX_STACKFRAME(&_hx_pos_d4b7230e79e45e5e_38_getText)
HXDLIN(  38)		return this->text;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Textbox_obj,getText,return )

void Textbox_obj::draw( ::kha::graphics2::Graphics graphics){
            	HX_GC_STACKFRAME(&_hx_pos_d4b7230e79e45e5e_41_draw)
HXLINE(  42)		graphics->set_fontSize(this->fontSize);
HXLINE(  43)		::String _hx_tmp = this->text;
HXDLIN(  43)		 ::kha::math::Vector2 _this = this->position;
HXDLIN(  43)		 ::kha::math::Vector2 vec = this->origin;
HXDLIN(  43)		 ::kha::math::Vector2 _hx_tmp1 =  ::kha::math::Vector2_obj::__alloc( HX_CTX ,(_this->x + vec->x),(_this->y + vec->y));
HXDLIN(  43)		::Text_obj::drawText(graphics,_hx_tmp,_hx_tmp1,this->hSeperation,this->vSeperation,this->originPoint);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Textbox_obj,draw,(void))

 ::Dynamic Textbox_obj::getBoundingBox(){
            	HX_STACKFRAME(&_hx_pos_d4b7230e79e45e5e_47_getBoundingBox)
HXDLIN(  47)		return  ::Dynamic(hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("topLeft",3c,09,c1,e8),null())
            			->setFixed(1,HX_("bottomRight",f1,a0,f4,4e),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Textbox_obj,getBoundingBox,return )

::Dynamic Textbox_obj::isOver(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_d4b7230e79e45e5e_51_isOver)
HXDLIN(  51)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Textbox_obj,isOver,return )


hx::ObjectPtr< Textbox_obj > Textbox_obj::__new( ::kha::math::Vector2 position,::String text) {
	hx::ObjectPtr< Textbox_obj > __this = new Textbox_obj();
	__this->__construct(position,text);
	return __this;
}

hx::ObjectPtr< Textbox_obj > Textbox_obj::__alloc(hx::Ctx *_hx_ctx, ::kha::math::Vector2 position,::String text) {
	Textbox_obj *__this = (Textbox_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Textbox_obj), true, "components.Textbox"));
	*(void **)__this = Textbox_obj::_hx_vtable;
	__this->__construct(position,text);
	return __this;
}

Textbox_obj::Textbox_obj()
{
}

void Textbox_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Textbox);
	HX_MARK_MEMBER_NAME(origin,"origin");
	HX_MARK_MEMBER_NAME(position,"position");
	HX_MARK_MEMBER_NAME(originPoint,"originPoint");
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(textSize,"textSize");
	HX_MARK_MEMBER_NAME(fontSize,"fontSize");
	HX_MARK_MEMBER_NAME(hSeperation,"hSeperation");
	HX_MARK_MEMBER_NAME(vSeperation,"vSeperation");
	HX_MARK_END_CLASS();
}

void Textbox_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(origin,"origin");
	HX_VISIT_MEMBER_NAME(position,"position");
	HX_VISIT_MEMBER_NAME(originPoint,"originPoint");
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(textSize,"textSize");
	HX_VISIT_MEMBER_NAME(fontSize,"fontSize");
	HX_VISIT_MEMBER_NAME(hSeperation,"hSeperation");
	HX_VISIT_MEMBER_NAME(vSeperation,"vSeperation");
}

hx::Val Textbox_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return hx::Val( text ); }
		if (HX_FIELD_EQ(inName,"draw") ) { return hx::Val( draw_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"origin") ) { return hx::Val( origin ); }
		if (HX_FIELD_EQ(inName,"isOver") ) { return hx::Val( isOver_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"setText") ) { return hx::Val( setText_dyn() ); }
		if (HX_FIELD_EQ(inName,"getText") ) { return hx::Val( getText_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { return hx::Val( position ); }
		if (HX_FIELD_EQ(inName,"textSize") ) { return hx::Val( textSize ); }
		if (HX_FIELD_EQ(inName,"fontSize") ) { return hx::Val( fontSize ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"originPoint") ) { return hx::Val( originPoint ); }
		if (HX_FIELD_EQ(inName,"hSeperation") ) { return hx::Val( hSeperation ); }
		if (HX_FIELD_EQ(inName,"vSeperation") ) { return hx::Val( vSeperation ); }
		if (HX_FIELD_EQ(inName,"setTextSize") ) { return hx::Val( setTextSize_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getBoundingBox") ) { return hx::Val( getBoundingBox_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Textbox_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { text=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"origin") ) { origin=inValue.Cast<  ::kha::math::Vector2 >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { position=inValue.Cast<  ::kha::math::Vector2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textSize") ) { textSize=inValue.Cast<  ::kha::math::Vector2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fontSize") ) { fontSize=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"originPoint") ) { originPoint=inValue.Cast<  ::OriginPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hSeperation") ) { hSeperation=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vSeperation") ) { vSeperation=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Textbox_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("origin",e6,19,01,4b));
	outFields->push(HX_("position",a9,a0,fa,ca));
	outFields->push(HX_("originPoint",8a,68,36,6d));
	outFields->push(HX_("text",ad,cc,f9,4c));
	outFields->push(HX_("textSize",0e,f4,4e,4f));
	outFields->push(HX_("fontSize",30,be,d1,ce));
	outFields->push(HX_("hSeperation",d2,d9,52,15));
	outFields->push(HX_("vSeperation",60,b7,7c,21));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo Textbox_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*  ::kha::math::Vector2 */ ,(int)offsetof(Textbox_obj,origin),HX_("origin",e6,19,01,4b)},
	{hx::fsObject /*  ::kha::math::Vector2 */ ,(int)offsetof(Textbox_obj,position),HX_("position",a9,a0,fa,ca)},
	{hx::fsObject /*  ::OriginPoint */ ,(int)offsetof(Textbox_obj,originPoint),HX_("originPoint",8a,68,36,6d)},
	{hx::fsString,(int)offsetof(Textbox_obj,text),HX_("text",ad,cc,f9,4c)},
	{hx::fsObject /*  ::kha::math::Vector2 */ ,(int)offsetof(Textbox_obj,textSize),HX_("textSize",0e,f4,4e,4f)},
	{hx::fsInt,(int)offsetof(Textbox_obj,fontSize),HX_("fontSize",30,be,d1,ce)},
	{hx::fsFloat,(int)offsetof(Textbox_obj,hSeperation),HX_("hSeperation",d2,d9,52,15)},
	{hx::fsFloat,(int)offsetof(Textbox_obj,vSeperation),HX_("vSeperation",60,b7,7c,21)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Textbox_obj_sStaticStorageInfo = 0;
#endif

static ::String Textbox_obj_sMemberFields[] = {
	HX_("origin",e6,19,01,4b),
	HX_("position",a9,a0,fa,ca),
	HX_("originPoint",8a,68,36,6d),
	HX_("text",ad,cc,f9,4c),
	HX_("textSize",0e,f4,4e,4f),
	HX_("fontSize",30,be,d1,ce),
	HX_("hSeperation",d2,d9,52,15),
	HX_("vSeperation",60,b7,7c,21),
	HX_("setTextSize",d0,bd,af,7f),
	HX_("setText",6f,0d,7e,12),
	HX_("getText",63,7c,7c,1f),
	HX_("draw",04,2c,70,42),
	HX_("getBoundingBox",11,e8,45,0d),
	HX_("isOver",5e,56,1f,67),
	::String(null()) };

hx::Class Textbox_obj::__mClass;

void Textbox_obj::__register()
{
	Textbox_obj _hx_dummy;
	Textbox_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("components.Textbox",06,c0,4e,2b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Textbox_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Textbox_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Textbox_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Textbox_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace components
