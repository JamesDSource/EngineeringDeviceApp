// Generated by Haxe 4.0.0-preview.5+1aaf080
#include <hxcpp.h>

#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_PageFlag
#include <hxinc/kha/audio2/ogg/vorbis/data/PageFlag.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_b71661c6d28d32ad_57_boot,"kha.audio2.ogg.vorbis.data.PageFlag","boot",0x358e7715,"kha.audio2.ogg.vorbis.data.PageFlag.boot","kha/audio2/ogg/vorbis/data/Page.hx",57,0x2c32c11e)
HX_LOCAL_STACK_FRAME(_hx_pos_b71661c6d28d32ad_58_boot,"kha.audio2.ogg.vorbis.data.PageFlag","boot",0x358e7715,"kha.audio2.ogg.vorbis.data.PageFlag.boot","kha/audio2/ogg/vorbis/data/Page.hx",58,0x2c32c11e)
HX_LOCAL_STACK_FRAME(_hx_pos_b71661c6d28d32ad_59_boot,"kha.audio2.ogg.vorbis.data.PageFlag","boot",0x358e7715,"kha.audio2.ogg.vorbis.data.PageFlag.boot","kha/audio2/ogg/vorbis/data/Page.hx",59,0x2c32c11e)
namespace kha{
namespace audio2{
namespace ogg{
namespace vorbis{
namespace data{

void PageFlag_obj::__construct() { }

Dynamic PageFlag_obj::__CreateEmpty() { return new PageFlag_obj; }

void *PageFlag_obj::_hx_vtable = 0;

Dynamic PageFlag_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< PageFlag_obj > _hx_result = new PageFlag_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PageFlag_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1df7bf6b;
}

int PageFlag_obj::CONTINUED_PACKET;

int PageFlag_obj::FIRST_PAGE;

int PageFlag_obj::LAST_PAGE;


PageFlag_obj::PageFlag_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *PageFlag_obj_sMemberStorageInfo = 0;
static hx::StaticInfo PageFlag_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &PageFlag_obj::CONTINUED_PACKET,HX_("CONTINUED_PACKET",ca,14,58,3c)},
	{hx::fsInt,(void *) &PageFlag_obj::FIRST_PAGE,HX_("FIRST_PAGE",1e,d4,ef,06)},
	{hx::fsInt,(void *) &PageFlag_obj::LAST_PAGE,HX_("LAST_PAGE",18,b4,0d,1f)},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void PageFlag_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PageFlag_obj::CONTINUED_PACKET,"CONTINUED_PACKET");
	HX_MARK_MEMBER_NAME(PageFlag_obj::FIRST_PAGE,"FIRST_PAGE");
	HX_MARK_MEMBER_NAME(PageFlag_obj::LAST_PAGE,"LAST_PAGE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void PageFlag_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PageFlag_obj::CONTINUED_PACKET,"CONTINUED_PACKET");
	HX_VISIT_MEMBER_NAME(PageFlag_obj::FIRST_PAGE,"FIRST_PAGE");
	HX_VISIT_MEMBER_NAME(PageFlag_obj::LAST_PAGE,"LAST_PAGE");
};

#endif

hx::Class PageFlag_obj::__mClass;

static ::String PageFlag_obj_sStaticFields[] = {
	HX_("CONTINUED_PACKET",ca,14,58,3c),
	HX_("FIRST_PAGE",1e,d4,ef,06),
	HX_("LAST_PAGE",18,b4,0d,1f),
	::String(null())
};

void PageFlag_obj::__register()
{
	PageFlag_obj _hx_dummy;
	PageFlag_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("kha.audio2.ogg.vorbis.data.PageFlag",6b,58,6c,b0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = PageFlag_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(PageFlag_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< PageFlag_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = PageFlag_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PageFlag_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PageFlag_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void PageFlag_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_b71661c6d28d32ad_57_boot)
HXDLIN(  57)		CONTINUED_PACKET = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_b71661c6d28d32ad_58_boot)
HXDLIN(  58)		FIRST_PAGE = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_b71661c6d28d32ad_59_boot)
HXDLIN(  59)		LAST_PAGE = 4;
            	}
}

} // end namespace kha
} // end namespace audio2
} // end namespace ogg
} // end namespace vorbis
} // end namespace data
