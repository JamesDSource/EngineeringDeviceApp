// Generated by Haxe 4.0.0-preview.5+1aaf080
#ifndef INCLUDED_kha_Assets
#define INCLUDED_kha_Assets

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha,Assets)
HX_DECLARE_CLASS1(kha,Canvas)
HX_DECLARE_CLASS1(kha,Image)
HX_DECLARE_CLASS1(kha,Kravur)
HX_DECLARE_CLASS1(kha,Resource)
HX_DECLARE_CLASS1(kha,Sound)
HX_DECLARE_CLASS1(kha,Video)
HX_DECLARE_CLASS2(kha,_Assets,BlobList)
HX_DECLARE_CLASS2(kha,_Assets,FontList)
HX_DECLARE_CLASS2(kha,_Assets,ImageList)
HX_DECLARE_CLASS2(kha,_Assets,SoundList)
HX_DECLARE_CLASS2(kha,_Assets,VideoList)
HX_DECLARE_CLASS2(kha,internal,BytesBlob)

namespace kha{


class HXCPP_CLASS_ATTRIBUTES Assets_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Assets_obj OBJ_;
		Assets_obj();

	public:
		enum { _hx_ClassId = 0x7959a1a3 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="kha.Assets")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"kha.Assets"); }

		hx::ObjectPtr< Assets_obj > __new() {
			hx::ObjectPtr< Assets_obj > __this = new Assets_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Assets_obj > __alloc(hx::Ctx *_hx_ctx) {
			Assets_obj *__this = (Assets_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Assets_obj), false, "kha.Assets"));
			*(void **)__this = Assets_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Assets_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Assets",a3,bc,97,80); }

		static void __boot();
		static  ::kha::_Assets::ImageList images;
		static  ::kha::_Assets::SoundList sounds;
		static  ::kha::_Assets::BlobList blobs;
		static  ::kha::_Assets::FontList fonts;
		static  ::kha::_Assets::VideoList videos;
		static Float progress;
		static void loadEverything( ::Dynamic callback, ::Dynamic filter, ::Dynamic uncompressSoundsFilter, ::Dynamic failed);
		static ::Dynamic loadEverything_dyn();

		static void loadImage(::String name, ::Dynamic done, ::Dynamic failed, ::Dynamic pos);
		static ::Dynamic loadImage_dyn();

		static void loadImageFromPath(::String path,bool readable, ::Dynamic done, ::Dynamic failed, ::Dynamic pos);
		static ::Dynamic loadImageFromPath_dyn();

		static ::Array< ::String > imageFormats;
		static ::Array< ::String > get_imageFormats();
		static ::Dynamic get_imageFormats_dyn();

		static void loadBlob(::String name, ::Dynamic done, ::Dynamic failed, ::Dynamic pos);
		static ::Dynamic loadBlob_dyn();

		static void loadBlobFromPath(::String path, ::Dynamic done, ::Dynamic failed, ::Dynamic pos);
		static ::Dynamic loadBlobFromPath_dyn();

		static void loadSound(::String name, ::Dynamic done, ::Dynamic failed, ::Dynamic pos);
		static ::Dynamic loadSound_dyn();

		static void loadSoundFromPath(::String path, ::Dynamic done, ::Dynamic failed, ::Dynamic pos);
		static ::Dynamic loadSoundFromPath_dyn();

		static ::Array< ::String > soundFormats;
		static ::Array< ::String > get_soundFormats();
		static ::Dynamic get_soundFormats_dyn();

		static void loadFont(::String name, ::Dynamic done, ::Dynamic failed, ::Dynamic pos);
		static ::Dynamic loadFont_dyn();

		static void loadFontFromPath(::String path, ::Dynamic done, ::Dynamic failed, ::Dynamic pos);
		static ::Dynamic loadFontFromPath_dyn();

		static ::Array< ::String > fontFormats;
		static ::Array< ::String > get_fontFormats();
		static ::Dynamic get_fontFormats_dyn();

		static void loadVideo(::String name, ::Dynamic done, ::Dynamic failed, ::Dynamic pos);
		static ::Dynamic loadVideo_dyn();

		static void loadVideoFromPath(::String path, ::Dynamic done, ::Dynamic failed, ::Dynamic pos);
		static ::Dynamic loadVideoFromPath_dyn();

		static ::Array< ::String > videoFormats;
		static ::Array< ::String > get_videoFormats();
		static ::Dynamic get_videoFormats_dyn();

		static  ::Dynamic reporter( ::Dynamic custom, ::Dynamic pos);
		static ::Dynamic reporter_dyn();

};

} // end namespace kha

#endif /* INCLUDED_kha_Assets */ 
