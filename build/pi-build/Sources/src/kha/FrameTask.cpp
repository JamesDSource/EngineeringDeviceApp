// Generated by Haxe 4.0.0-preview.5+1aaf080
#include <hxcpp.h>

#ifndef INCLUDED_kha_FrameTask
#include <hxinc/kha/FrameTask.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9b936b371410e5a9_28_new,"kha.FrameTask","new",0x98e6de1a,"kha.FrameTask.new","kha/Scheduler.hx",28,0xd275db8e)
namespace kha{

void FrameTask_obj::__construct( ::Dynamic task,int priority,int id){
            	HX_STACKFRAME(&_hx_pos_9b936b371410e5a9_28_new)
HXLINE(  29)		this->task = task;
HXLINE(  30)		this->priority = priority;
HXLINE(  31)		this->id = id;
HXLINE(  32)		this->active = true;
HXLINE(  33)		this->paused = false;
            	}

Dynamic FrameTask_obj::__CreateEmpty() { return new FrameTask_obj; }

void *FrameTask_obj::_hx_vtable = 0;

Dynamic FrameTask_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FrameTask_obj > _hx_result = new FrameTask_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool FrameTask_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3dbb318e;
}


FrameTask_obj::FrameTask_obj()
{
}

void FrameTask_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FrameTask);
	HX_MARK_MEMBER_NAME(task,"task");
	HX_MARK_MEMBER_NAME(priority,"priority");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(paused,"paused");
	HX_MARK_END_CLASS();
}

void FrameTask_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(task,"task");
	HX_VISIT_MEMBER_NAME(priority,"priority");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(paused,"paused");
}

hx::Val FrameTask_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return hx::Val( id ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"task") ) { return hx::Val( task ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return hx::Val( active ); }
		if (HX_FIELD_EQ(inName,"paused") ) { return hx::Val( paused ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"priority") ) { return hx::Val( priority ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FrameTask_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"task") ) { task=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"paused") ) { paused=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"priority") ) { priority=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FrameTask_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("priority",64,7b,3e,bb));
	outFields->push(HX_("id",db,5b,00,00));
	outFields->push(HX_("active",c6,41,46,16));
	outFields->push(HX_("paused",ae,40,84,ef));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo FrameTask_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FrameTask_obj,task),HX_("task",45,bf,f6,4c)},
	{hx::fsInt,(int)offsetof(FrameTask_obj,priority),HX_("priority",64,7b,3e,bb)},
	{hx::fsInt,(int)offsetof(FrameTask_obj,id),HX_("id",db,5b,00,00)},
	{hx::fsBool,(int)offsetof(FrameTask_obj,active),HX_("active",c6,41,46,16)},
	{hx::fsBool,(int)offsetof(FrameTask_obj,paused),HX_("paused",ae,40,84,ef)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *FrameTask_obj_sStaticStorageInfo = 0;
#endif

static ::String FrameTask_obj_sMemberFields[] = {
	HX_("task",45,bf,f6,4c),
	HX_("priority",64,7b,3e,bb),
	HX_("id",db,5b,00,00),
	HX_("active",c6,41,46,16),
	HX_("paused",ae,40,84,ef),
	::String(null()) };

hx::Class FrameTask_obj::__mClass;

void FrameTask_obj::__register()
{
	FrameTask_obj _hx_dummy;
	FrameTask_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("kha.FrameTask",28,89,2b,1b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FrameTask_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FrameTask_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FrameTask_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FrameTask_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
