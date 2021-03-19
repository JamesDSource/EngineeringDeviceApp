// Generated by Haxe 4.0.0-preview.5+1aaf080
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <hxinc/Std.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <hxinc/haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <hxinc/haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <hxinc/haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_kha_Kravur
#include <hxinc/kha/Kravur.h>
#endif
#ifndef INCLUDED_kha_KravurImage
#include <hxinc/kha/KravurImage.h>
#endif
#ifndef INCLUDED_kha_Resource
#include <hxinc/kha/Resource.h>
#endif
#ifndef INCLUDED_kha_graphics2_Graphics
#include <hxinc/kha/graphics2/Graphics.h>
#endif
#ifndef INCLUDED_kha_graphics2_truetype_StbTruetype
#include <hxinc/kha/graphics2/truetype/StbTruetype.h>
#endif
#ifndef INCLUDED_kha_graphics2_truetype_Stbtt_bakedchar
#include <hxinc/kha/graphics2/truetype/Stbtt_bakedchar.h>
#endif
#ifndef INCLUDED_kha_graphics2_truetype_Stbtt_fontinfo
#include <hxinc/kha/graphics2/truetype/Stbtt_fontinfo.h>
#endif
#ifndef INCLUDED_kha_graphics2_truetype_Stbtt_temp_font_v_metrics
#include <hxinc/kha/graphics2/truetype/Stbtt_temp_font_v_metrics.h>
#endif
#ifndef INCLUDED_kha_internal_BytesBlob
#include <hxinc/kha/internal/BytesBlob.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_865862c4e1864848_127_new,"kha.Kravur","new",0x6ca37955,"kha.Kravur.new","kha/Kravur.hx",127,0xdd7a3f9a)
HX_LOCAL_STACK_FRAME(_hx_pos_865862c4e1864848_143__get,"kha.Kravur","_get",0x987df302,"kha.Kravur._get","kha/Kravur.hx",143,0xdd7a3f9a)
HX_LOCAL_STACK_FRAME(_hx_pos_865862c4e1864848_199_height,"kha.Kravur","height",0x9f26a612,"kha.Kravur.height","kha/Kravur.hx",199,0xdd7a3f9a)
HX_LOCAL_STACK_FRAME(_hx_pos_865862c4e1864848_203_width,"kha.Kravur","width",0xa8a6463b,"kha.Kravur.width","kha/Kravur.hx",203,0xdd7a3f9a)
HX_LOCAL_STACK_FRAME(_hx_pos_865862c4e1864848_207_widthOfCharacters,"kha.Kravur","widthOfCharacters",0xae851f7c,"kha.Kravur.widthOfCharacters","kha/Kravur.hx",207,0xdd7a3f9a)
HX_LOCAL_STACK_FRAME(_hx_pos_865862c4e1864848_211_baseline,"kha.Kravur","baseline",0x90869b70,"kha.Kravur.baseline","kha/Kravur.hx",211,0xdd7a3f9a)
HX_LOCAL_STACK_FRAME(_hx_pos_865862c4e1864848_214_unload,"kha.Kravur","unload",0x02673f2a,"kha.Kravur.unload","kha/Kravur.hx",214,0xdd7a3f9a)
HX_LOCAL_STACK_FRAME(_hx_pos_865862c4e1864848_140_fromBytes,"kha.Kravur","fromBytes",0x65a94156,"kha.Kravur.fromBytes","kha/Kravur.hx",140,0xdd7a3f9a)
namespace kha{

void Kravur_obj::__construct( ::kha::internal::BytesBlob blob){
            	HX_GC_STACKFRAME(&_hx_pos_865862c4e1864848_127_new)
HXLINE( 133)		this->images =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE( 136)		this->blob = blob;
            	}

Dynamic Kravur_obj::__CreateEmpty() { return new Kravur_obj; }

void *Kravur_obj::_hx_vtable = 0;

Dynamic Kravur_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Kravur_obj > _hx_result = new Kravur_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Kravur_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2ae4e6bd;
}

static ::kha::Resource_obj _hx_kha_Kravur__hx_kha_Resource= {
	( void (hx::Object::*)())&::kha::Kravur_obj::unload,
};

void *Kravur_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xf962acd2: return &_hx_kha_Kravur__hx_kha_Resource;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

 ::kha::KravurImage Kravur_obj::_get(int fontSize){
            	HX_GC_STACKFRAME(&_hx_pos_865862c4e1864848_143__get)
HXLINE( 144)		::Array< int > glyphs = ::kha::graphics2::Graphics_obj::fontGlyphs;
HXLINE( 146)		if (hx::IsNotEq( glyphs,this->oldGlyphs )) {
HXLINE( 147)			this->oldGlyphs = glyphs;
HXLINE( 149)			::kha::KravurImage_obj::charBlocks = ::Array_obj< int >::__new(1)->init(0,glyphs->__get(0));
HXLINE( 150)			int nextChar = (::kha::KravurImage_obj::charBlocks->__get(0) + 1);
HXLINE( 151)			{
HXLINE( 151)				int _g = 1;
HXDLIN( 151)				int _g1 = glyphs->length;
HXDLIN( 151)				while((_g < _g1)){
HXLINE( 151)					_g = (_g + 1);
HXDLIN( 151)					int i = (_g - 1);
HXLINE( 152)					if ((glyphs->__get(i) != nextChar)) {
HXLINE( 153)						::kha::KravurImage_obj::charBlocks->push(glyphs->__get((i - 1)));
HXLINE( 154)						::kha::KravurImage_obj::charBlocks->push(glyphs->__get(i));
HXLINE( 155)						nextChar = (glyphs->__get(i) + 1);
            					}
            					else {
HXLINE( 156)						nextChar = (nextChar + 1);
            					}
            				}
            			}
HXLINE( 158)			::kha::KravurImage_obj::charBlocks->push(glyphs->__get((glyphs->length - 1)));
            		}
HXLINE( 161)		int imageIndex = ((fontSize * 10000) + glyphs->length);
HXLINE( 162)		if (!(this->images->exists(imageIndex))) {
HXLINE( 163)			int width = 64;
HXLINE( 164)			int height = 32;
HXLINE( 165)			::Array< ::Dynamic> this1 = ::Array_obj< ::Dynamic>::__new(glyphs->length);
HXDLIN( 165)			::Array< ::Dynamic> baked = this1;
HXLINE( 166)			{
HXLINE( 166)				int _g2 = 0;
HXDLIN( 166)				int _g11 = baked->length;
HXDLIN( 166)				while((_g2 < _g11)){
HXLINE( 166)					_g2 = (_g2 + 1);
HXDLIN( 166)					int i1 = (_g2 - 1);
HXLINE( 167)					{
HXLINE( 167)						 ::kha::graphics2::truetype::Stbtt_bakedchar val =  ::kha::graphics2::truetype::Stbtt_bakedchar_obj::__alloc( HX_CTX );
HXDLIN( 167)						baked->__unsafe_set(i1,val);
            					}
            				}
            			}
HXLINE( 170)			 ::kha::internal::BytesBlob pixels = null();
HXLINE( 172)			int status = -1;
HXLINE( 173)			while((status <= 0)){
HXLINE( 174)				if ((height < width)) {
HXLINE( 174)					height = (height * 2);
            				}
            				else {
HXLINE( 175)					width = (width * 2);
            				}
HXLINE( 176)				pixels = ::kha::internal::BytesBlob_obj::alloc((width * height));
HXLINE( 177)				status = ::kha::graphics2::truetype::StbTruetype_obj::stbtt_BakeFontBitmap(this->blob,0,( (Float)(fontSize) ),pixels,width,height,glyphs,baked);
            			}
HXLINE( 182)			 ::kha::graphics2::truetype::Stbtt_fontinfo info =  ::kha::graphics2::truetype::Stbtt_fontinfo_obj::__alloc( HX_CTX );
HXLINE( 183)			::kha::graphics2::truetype::StbTruetype_obj::stbtt_InitFont(info,this->blob,0);
HXLINE( 185)			 ::kha::graphics2::truetype::Stbtt_temp_font_v_metrics metrics = ::kha::graphics2::truetype::StbTruetype_obj::stbtt_GetFontVMetrics(info);
HXLINE( 186)			Float scale = ::kha::graphics2::truetype::StbTruetype_obj::stbtt_ScaleForPixelHeight(info,( (Float)(fontSize) ));
HXLINE( 187)			int ascent = ::Math_obj::round((( (Float)(metrics->ascent) ) * scale));
HXLINE( 188)			int descent = ::Math_obj::round((( (Float)(metrics->descent) ) * scale));
HXLINE( 189)			int lineGap = ::Math_obj::round((( (Float)(metrics->lineGap) ) * scale));
HXLINE( 191)			 ::kha::KravurImage image =  ::kha::KravurImage_obj::__alloc( HX_CTX ,::Std_obj::_hx_int(( (Float)(fontSize) )),ascent,descent,lineGap,width,height,baked,pixels);
HXLINE( 192)			this->images->set(imageIndex,image);
HXLINE( 193)			return image;
            		}
HXLINE( 195)		return ( ( ::kha::KravurImage)(this->images->get(imageIndex)) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(Kravur_obj,_get,return )

Float Kravur_obj::height(int fontSize){
            	HX_STACKFRAME(&_hx_pos_865862c4e1864848_199_height)
HXDLIN( 199)		return this->_get(fontSize)->getHeight();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Kravur_obj,height,return )

Float Kravur_obj::width(int fontSize,::String str){
            	HX_STACKFRAME(&_hx_pos_865862c4e1864848_203_width)
HXDLIN( 203)		return this->_get(fontSize)->stringWidth(str);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Kravur_obj,width,return )

Float Kravur_obj::widthOfCharacters(int fontSize,::Array< int > characters,int start,int length){
            	HX_STACKFRAME(&_hx_pos_865862c4e1864848_207_widthOfCharacters)
HXDLIN( 207)		return this->_get(fontSize)->charactersWidth(characters,start,length);
            	}


HX_DEFINE_DYNAMIC_FUNC4(Kravur_obj,widthOfCharacters,return )

Float Kravur_obj::baseline(int fontSize){
            	HX_STACKFRAME(&_hx_pos_865862c4e1864848_211_baseline)
HXDLIN( 211)		return this->_get(fontSize)->getBaselinePosition();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Kravur_obj,baseline,return )

void Kravur_obj::unload(){
            	HX_STACKFRAME(&_hx_pos_865862c4e1864848_214_unload)
HXLINE( 215)		this->blob = null();
HXLINE( 216)		this->images = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Kravur_obj,unload,(void))

 ::kha::Kravur Kravur_obj::fromBytes( ::haxe::io::Bytes bytes){
            	HX_GC_STACKFRAME(&_hx_pos_865862c4e1864848_140_fromBytes)
HXDLIN( 140)		return  ::kha::Kravur_obj::__alloc( HX_CTX ,::kha::internal::BytesBlob_obj::fromBytes(bytes));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Kravur_obj,fromBytes,return )


hx::ObjectPtr< Kravur_obj > Kravur_obj::__new( ::kha::internal::BytesBlob blob) {
	hx::ObjectPtr< Kravur_obj > __this = new Kravur_obj();
	__this->__construct(blob);
	return __this;
}

hx::ObjectPtr< Kravur_obj > Kravur_obj::__alloc(hx::Ctx *_hx_ctx, ::kha::internal::BytesBlob blob) {
	Kravur_obj *__this = (Kravur_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Kravur_obj), true, "kha.Kravur"));
	*(void **)__this = Kravur_obj::_hx_vtable;
	__this->__construct(blob);
	return __this;
}

Kravur_obj::Kravur_obj()
{
}

void Kravur_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Kravur);
	HX_MARK_MEMBER_NAME(oldGlyphs,"oldGlyphs");
	HX_MARK_MEMBER_NAME(blob,"blob");
	HX_MARK_MEMBER_NAME(images,"images");
	HX_MARK_END_CLASS();
}

void Kravur_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(oldGlyphs,"oldGlyphs");
	HX_VISIT_MEMBER_NAME(blob,"blob");
	HX_VISIT_MEMBER_NAME(images,"images");
}

hx::Val Kravur_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"blob") ) { return hx::Val( blob ); }
		if (HX_FIELD_EQ(inName,"_get") ) { return hx::Val( _get_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return hx::Val( width_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"images") ) { return hx::Val( images ); }
		if (HX_FIELD_EQ(inName,"height") ) { return hx::Val( height_dyn() ); }
		if (HX_FIELD_EQ(inName,"unload") ) { return hx::Val( unload_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"baseline") ) { return hx::Val( baseline_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"oldGlyphs") ) { return hx::Val( oldGlyphs ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"widthOfCharacters") ) { return hx::Val( widthOfCharacters_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Kravur_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true; }
	}
	return false;
}

hx::Val Kravur_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"blob") ) { blob=inValue.Cast<  ::kha::internal::BytesBlob >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"images") ) { images=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"oldGlyphs") ) { oldGlyphs=inValue.Cast< ::Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Kravur_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("oldGlyphs",4e,7d,44,b9));
	outFields->push(HX_("blob",5d,3d,19,41));
	outFields->push(HX_("images",b8,50,92,fe));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo Kravur_obj_sMemberStorageInfo[] = {
	{hx::fsObject /* ::Array< int > */ ,(int)offsetof(Kravur_obj,oldGlyphs),HX_("oldGlyphs",4e,7d,44,b9)},
	{hx::fsObject /*  ::kha::internal::BytesBlob */ ,(int)offsetof(Kravur_obj,blob),HX_("blob",5d,3d,19,41)},
	{hx::fsObject /*  ::haxe::ds::IntMap */ ,(int)offsetof(Kravur_obj,images),HX_("images",b8,50,92,fe)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Kravur_obj_sStaticStorageInfo = 0;
#endif

static ::String Kravur_obj_sMemberFields[] = {
	HX_("oldGlyphs",4e,7d,44,b9),
	HX_("blob",5d,3d,19,41),
	HX_("images",b8,50,92,fe),
	HX_("_get",97,c5,19,3f),
	HX_("height",e7,07,4c,02),
	HX_("width",06,b6,62,ca),
	HX_("widthOfCharacters",c7,93,4f,40),
	HX_("baseline",85,dc,27,11),
	HX_("unload",ff,a0,8c,65),
	::String(null()) };

hx::Class Kravur_obj::__mClass;

static ::String Kravur_obj_sStaticFields[] = {
	HX_("fromBytes",a1,f2,20,72),
	::String(null())
};

void Kravur_obj::__register()
{
	Kravur_obj _hx_dummy;
	Kravur_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("kha.Kravur",e3,2a,15,17);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Kravur_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Kravur_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Kravur_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Kravur_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Kravur_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Kravur_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
