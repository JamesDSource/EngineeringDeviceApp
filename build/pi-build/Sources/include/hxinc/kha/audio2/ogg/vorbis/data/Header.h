// Generated by Haxe 4.0.0-preview.5+1aaf080
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_Header
#define INCLUDED_kha_audio2_ogg_vorbis_data_Header

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_5d80631968e67c5f_37_new)
HX_DECLARE_CLASS4(kha,audio2,ogg,vorbis,VorbisDecodeState)
HX_DECLARE_CLASS5(kha,audio2,ogg,vorbis,data,Codebook)
HX_DECLARE_CLASS5(kha,audio2,ogg,vorbis,data,Comment)
HX_DECLARE_CLASS5(kha,audio2,ogg,vorbis,data,Floor)
HX_DECLARE_CLASS5(kha,audio2,ogg,vorbis,data,Header)
HX_DECLARE_CLASS5(kha,audio2,ogg,vorbis,data,Mapping)
HX_DECLARE_CLASS5(kha,audio2,ogg,vorbis,data,Mode)
HX_DECLARE_CLASS5(kha,audio2,ogg,vorbis,data,Residue)

namespace kha{
namespace audio2{
namespace ogg{
namespace vorbis{
namespace data{


class HXCPP_CLASS_ATTRIBUTES Header_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Header_obj OBJ_;
		Header_obj();

	public:
		enum { _hx_ClassId = 0x3258cf5d };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="kha.audio2.ogg.vorbis.data.Header")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"kha.audio2.ogg.vorbis.data.Header"); }

		hx::ObjectPtr< Header_obj > __new() {
			hx::ObjectPtr< Header_obj > __this = new Header_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Header_obj > __alloc(hx::Ctx *_hx_ctx) {
			Header_obj *__this = (Header_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Header_obj), true, "kha.audio2.ogg.vorbis.data.Header"));
			*(void **)__this = Header_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_5d80631968e67c5f_37_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Header_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Header",ad,7d,94,31); }

		static void __boot();
		static int PACKET_ID;
		static int PACKET_COMMENT;
		static int PACKET_SETUP;
		static  ::kha::audio2::ogg::vorbis::data::Header read( ::kha::audio2::ogg::vorbis::VorbisDecodeState decodeState);
		static ::Dynamic read_dyn();

		int maximumBitRate;
		int nominalBitRate;
		int minimumBitRate;
		int sampleRate;
		int channel;
		int blocksize0;
		int blocksize1;
		::Array< ::Dynamic> codebooks;
		::Array< ::Dynamic> floorConfig;
		::Array< ::Dynamic> residueConfig;
		::Array< ::Dynamic> mapping;
		::Array< ::Dynamic> modes;
		 ::kha::audio2::ogg::vorbis::data::Comment comment;
		::String vendor;
};

} // end namespace kha
} // end namespace audio2
} // end namespace ogg
} // end namespace vorbis
} // end namespace data

#endif /* INCLUDED_kha_audio2_ogg_vorbis_data_Header */ 
