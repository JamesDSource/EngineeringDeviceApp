// Generated by Haxe 4.0.0-preview.5+1aaf080
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <hxinc/haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_kha_netsync_Entity
#include <hxinc/kha/netsync/Entity.h>
#endif

namespace kha{
namespace netsync{


static ::String Entity_obj_sMemberFields[] = {
	HX_("_id",fa,71,48,00),
	HX_("_size",a0,bc,64,ff),
	HX_("_send",27,a9,61,ff),
	HX_("_receive",64,bb,10,64),
	::String(null()) };

hx::Class Entity_obj::__mClass;

void Entity_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("kha.netsync.Entity",c3,68,57,53);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = hx::Class_obj::dupFunctions(Entity_obj_sMemberFields);
	__mClass->mCanCast = hx::TIsInterface< (int)0x4b942fd7 >;
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace netsync
