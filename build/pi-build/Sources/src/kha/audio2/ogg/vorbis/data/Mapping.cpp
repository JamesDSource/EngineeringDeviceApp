// Generated by Haxe 4.0.0-preview.5+1aaf080
#include <hxcpp.h>

#ifndef INCLUDED_kha_audio2_ogg_vorbis_VorbisDecodeState
#include <hxinc/kha/audio2/ogg/vorbis/VorbisDecodeState.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_VorbisTools
#include <hxinc/kha/audio2/ogg/vorbis/VorbisTools.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_Floor
#include <hxinc/kha/audio2/ogg/vorbis/data/Floor.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_Floor1
#include <hxinc/kha/audio2/ogg/vorbis/data/Floor1.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_Mapping
#include <hxinc/kha/audio2/ogg/vorbis/data/Mapping.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_MappingChannel
#include <hxinc/kha/audio2/ogg/vorbis/data/MappingChannel.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_ReaderError
#include <hxinc/kha/audio2/ogg/vorbis/data/ReaderError.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_ReaderErrorType
#include <hxinc/kha/audio2/ogg/vorbis/data/ReaderErrorType.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_74f37dde401c2255_14_new,"kha.audio2.ogg.vorbis.data.Mapping","new",0xf4d4ea30,"kha.audio2.ogg.vorbis.data.Mapping.new","kha/audio2/ogg/vorbis/data/Mapping.hx",14,0x30bf6281)
HX_LOCAL_STACK_FRAME(_hx_pos_74f37dde401c2255_89_doFloor,"kha.audio2.ogg.vorbis.data.Mapping","doFloor",0xc69df411,"kha.audio2.ogg.vorbis.data.Mapping.doFloor","kha/audio2/ogg/vorbis/data/Mapping.hx",89,0x30bf6281)
HX_LOCAL_STACK_FRAME(_hx_pos_74f37dde401c2255_18_read,"kha.audio2.ogg.vorbis.data.Mapping","read",0x481cc786,"kha.audio2.ogg.vorbis.data.Mapping.read","kha/audio2/ogg/vorbis/data/Mapping.hx",18,0x30bf6281)
static const int _hx_array_data_afb0523e_10[] = {
	(int)0,(int)1,(int)2,(int)2,(int)3,(int)3,(int)3,(int)3,(int)4,(int)4,(int)4,(int)4,(int)4,(int)4,(int)4,(int)4,
};
static const int _hx_array_data_afb0523e_11[] = {
	(int)0,(int)1,(int)2,(int)2,(int)3,(int)3,(int)3,(int)3,(int)4,(int)4,(int)4,(int)4,(int)4,(int)4,(int)4,(int)4,
};
namespace kha{
namespace audio2{
namespace ogg{
namespace vorbis{
namespace data{

void Mapping_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_74f37dde401c2255_14_new)
            	}

Dynamic Mapping_obj::__CreateEmpty() { return new Mapping_obj; }

void *Mapping_obj::_hx_vtable = 0;

Dynamic Mapping_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Mapping_obj > _hx_result = new Mapping_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Mapping_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1b63d376;
}

void Mapping_obj::doFloor(::Array< ::Dynamic> floors,int i,int n,::Array< Float > target,::Array< int > finalY,::Array< bool > step2Flag){
            	HX_GC_STACKFRAME(&_hx_pos_74f37dde401c2255_89_doFloor)
HXLINE(  90)		int n2 = (n >> 1);
HXLINE(  91)		int s = ( ( ::kha::audio2::ogg::vorbis::data::MappingChannel)(_hx_array_unsafe_get(this->chan,i)) )->mux;
HXDLIN(  91)		 ::Dynamic floor;
HXLINE(  92)		 ::kha::audio2::ogg::vorbis::data::Floor floor1 = ( ( ::kha::audio2::ogg::vorbis::data::Floor)(_hx_array_unsafe_get(floors,( (int)(_hx_array_unsafe_get(this->submapFloor,s)) ))) );
HXLINE(  93)		if ((floor1->type == 0)) {
HXLINE(  94)			HX_STACK_DO_THROW( ::kha::audio2::ogg::vorbis::data::ReaderError_obj::__alloc( HX_CTX ,::kha::audio2::ogg::vorbis::data::ReaderErrorType_obj::INVALID_STREAM_dyn(),null(),hx::SourceInfo(HX_("kha/audio2/ogg/vorbis/data/Mapping.hx",81,62,bf,30),94,HX_("kha.audio2.ogg.vorbis.data.Mapping",3e,52,b0,af),HX_("doFloor",41,b2,c3,35))));
            		}
            		else {
HXLINE(  96)			 ::kha::audio2::ogg::vorbis::data::Floor1 g = floor1->floor1;
HXLINE(  97)			int lx = 0;
HXDLIN(  97)			int ly = (finalY->__get(0) * g->floor1Multiplier);
HXLINE(  98)			{
HXLINE(  98)				int _g = 1;
HXDLIN(  98)				int _g1 = g->values;
HXDLIN(  98)				while((_g < _g1)){
HXLINE(  98)					_g = (_g + 1);
HXDLIN(  98)					int q = (_g - 1);
HXLINE(  99)					int j = ( (int)(_hx_array_unsafe_get(g->sortedOrder,q)) );
HXLINE( 100)					if ((finalY->__get(j) >= 0)) {
HXLINE( 102)						int hy = (finalY->__get(j) * g->floor1Multiplier);
HXLINE( 103)						int hx = ( (int)(_hx_array_unsafe_get(g->xlist,j)) );
HXLINE( 104)						::kha::audio2::ogg::vorbis::VorbisTools_obj::drawLine(target,lx,ly,hx,hy,n2);
HXLINE( 105)						lx = hx;
HXLINE( 106)						ly = hy;
            					}
            				}
            			}
HXLINE( 109)			if ((lx < n2)) {
HXLINE( 111)				int _g2 = lx;
HXDLIN( 111)				int _g3 = n2;
HXDLIN( 111)				while((_g2 < _g3)){
HXLINE( 111)					_g2 = (_g2 + 1);
HXDLIN( 111)					int j1 = (_g2 - 1);
HXLINE( 112)					{
HXLINE( 112)						int _g21 = j1;
HXDLIN( 112)						::Array< Float > _g31 = target;
HXDLIN( 112)						{
HXLINE( 112)							Float val = ( (Float)(_hx_array_unsafe_get(_g31,_g21)) );
HXDLIN( 112)							_g31->__unsafe_set(_g21,(val * ::kha::audio2::ogg::vorbis::VorbisTools_obj::INVERSE_DB_TABLE->__get(ly)));
            						}
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC6(Mapping_obj,doFloor,(void))

 ::kha::audio2::ogg::vorbis::data::Mapping Mapping_obj::read( ::kha::audio2::ogg::vorbis::VorbisDecodeState decodeState,int channels){
            	HX_GC_STACKFRAME(&_hx_pos_74f37dde401c2255_18_read)
HXLINE(  19)		 ::kha::audio2::ogg::vorbis::data::Mapping m =  ::kha::audio2::ogg::vorbis::data::Mapping_obj::__alloc( HX_CTX );
HXLINE(  20)		int mappingType = decodeState->readBits(16);
HXLINE(  21)		if ((mappingType != 0)) {
HXLINE(  22)			HX_STACK_DO_THROW( ::kha::audio2::ogg::vorbis::data::ReaderError_obj::__alloc( HX_CTX ,::kha::audio2::ogg::vorbis::data::ReaderErrorType_obj::INVALID_SETUP_dyn(),(HX_("mapping type ",94,35,6c,d8) + mappingType),hx::SourceInfo(HX_("kha/audio2/ogg/vorbis/data/Mapping.hx",81,62,bf,30),22,HX_("kha.audio2.ogg.vorbis.data.Mapping",3e,52,b0,af),HX_("read",56,4b,a7,4b))));
            		}
HXLINE(  25)		::Array< ::Dynamic> this1 = ::Array_obj< ::Dynamic>::__new(channels);
HXDLIN(  25)		m->chan = this1;
HXLINE(  26)		{
HXLINE(  26)			int _g = 0;
HXDLIN(  26)			int _g1 = channels;
HXDLIN(  26)			while((_g < _g1)){
HXLINE(  26)				_g = (_g + 1);
HXDLIN(  26)				int j = (_g - 1);
HXLINE(  27)				{
HXLINE(  27)					::Array< ::Dynamic> this2 = m->chan;
HXDLIN(  27)					 ::kha::audio2::ogg::vorbis::data::MappingChannel val =  ::kha::audio2::ogg::vorbis::data::MappingChannel_obj::__alloc( HX_CTX );
HXDLIN(  27)					this2->__unsafe_set(j,val);
            				}
            			}
            		}
HXLINE(  30)		if ((decodeState->readBits(1) != 0)) {
HXLINE(  31)			m->submaps = (decodeState->readBits(4) + 1);
            		}
            		else {
HXLINE(  33)			m->submaps = 1;
            		}
HXLINE(  40)		if ((decodeState->readBits(1) != 0)) {
HXLINE(  41)			m->couplingSteps = (decodeState->readBits(8) + 1);
HXLINE(  42)			{
HXLINE(  42)				int _g2 = 0;
HXDLIN(  42)				int _g3 = m->couplingSteps;
HXDLIN(  42)				while((_g2 < _g3)){
HXLINE(  42)					_g2 = (_g2 + 1);
HXDLIN(  42)					int k = (_g2 - 1);
HXLINE(  43)					 ::kha::audio2::ogg::vorbis::data::MappingChannel _hx_tmp = ( ( ::kha::audio2::ogg::vorbis::data::MappingChannel)(_hx_array_unsafe_get(m->chan,k)) );
HXDLIN(  43)					int n = (channels - 1);
HXDLIN(  43)					::Array< int > log2_4 = ::Array_obj< int >::fromData( _hx_array_data_afb0523e_10,16);
HXDLIN(  43)					int _hx_tmp1;
HXDLIN(  43)					if ((n < 16384)) {
HXLINE(  43)						if ((n < 16)) {
HXLINE(  43)							_hx_tmp1 = log2_4->__get(n);
            						}
            						else {
HXLINE(  43)							if ((n < 512)) {
HXLINE(  43)								_hx_tmp1 = (5 + log2_4->__get((n >> 5)));
            							}
            							else {
HXLINE(  43)								_hx_tmp1 = (10 + log2_4->__get((n >> 10)));
            							}
            						}
            					}
            					else {
HXLINE(  43)						if ((n < 16777216)) {
HXLINE(  43)							if ((n < 524288)) {
HXLINE(  43)								_hx_tmp1 = (15 + log2_4->__get((n >> 15)));
            							}
            							else {
HXLINE(  43)								_hx_tmp1 = (20 + log2_4->__get((n >> 20)));
            							}
            						}
            						else {
HXLINE(  43)							if ((n < 536870912)) {
HXLINE(  43)								_hx_tmp1 = (25 + log2_4->__get((n >> 25)));
            							}
            							else {
HXLINE(  43)								if ((n < (int)-2147483648)) {
HXLINE(  43)									_hx_tmp1 = (30 + log2_4->__get((n >> 30)));
            								}
            								else {
HXLINE(  43)									_hx_tmp1 = 0;
            								}
            							}
            						}
            					}
HXDLIN(  43)					_hx_tmp->magnitude = decodeState->readBits(_hx_tmp1);
HXLINE(  44)					 ::kha::audio2::ogg::vorbis::data::MappingChannel _hx_tmp2 = ( ( ::kha::audio2::ogg::vorbis::data::MappingChannel)(_hx_array_unsafe_get(m->chan,k)) );
HXDLIN(  44)					int n1 = (channels - 1);
HXDLIN(  44)					::Array< int > log2_41 = ::Array_obj< int >::fromData( _hx_array_data_afb0523e_11,16);
HXDLIN(  44)					int _hx_tmp3;
HXDLIN(  44)					if ((n1 < 16384)) {
HXLINE(  44)						if ((n1 < 16)) {
HXLINE(  44)							_hx_tmp3 = log2_41->__get(n1);
            						}
            						else {
HXLINE(  44)							if ((n1 < 512)) {
HXLINE(  44)								_hx_tmp3 = (5 + log2_41->__get((n1 >> 5)));
            							}
            							else {
HXLINE(  44)								_hx_tmp3 = (10 + log2_41->__get((n1 >> 10)));
            							}
            						}
            					}
            					else {
HXLINE(  44)						if ((n1 < 16777216)) {
HXLINE(  44)							if ((n1 < 524288)) {
HXLINE(  44)								_hx_tmp3 = (15 + log2_41->__get((n1 >> 15)));
            							}
            							else {
HXLINE(  44)								_hx_tmp3 = (20 + log2_41->__get((n1 >> 20)));
            							}
            						}
            						else {
HXLINE(  44)							if ((n1 < 536870912)) {
HXLINE(  44)								_hx_tmp3 = (25 + log2_41->__get((n1 >> 25)));
            							}
            							else {
HXLINE(  44)								if ((n1 < (int)-2147483648)) {
HXLINE(  44)									_hx_tmp3 = (30 + log2_41->__get((n1 >> 30)));
            								}
            								else {
HXLINE(  44)									_hx_tmp3 = 0;
            								}
            							}
            						}
            					}
HXDLIN(  44)					_hx_tmp2->angle = decodeState->readBits(_hx_tmp3);
HXLINE(  45)					if ((( ( ::kha::audio2::ogg::vorbis::data::MappingChannel)(_hx_array_unsafe_get(m->chan,k)) )->magnitude >= channels)) {
HXLINE(  46)						HX_STACK_DO_THROW( ::kha::audio2::ogg::vorbis::data::ReaderError_obj::__alloc( HX_CTX ,::kha::audio2::ogg::vorbis::data::ReaderErrorType_obj::INVALID_SETUP_dyn(),null(),hx::SourceInfo(HX_("kha/audio2/ogg/vorbis/data/Mapping.hx",81,62,bf,30),46,HX_("kha.audio2.ogg.vorbis.data.Mapping",3e,52,b0,af),HX_("read",56,4b,a7,4b))));
            					}
HXLINE(  48)					if ((( ( ::kha::audio2::ogg::vorbis::data::MappingChannel)(_hx_array_unsafe_get(m->chan,k)) )->angle >= channels)) {
HXLINE(  49)						HX_STACK_DO_THROW( ::kha::audio2::ogg::vorbis::data::ReaderError_obj::__alloc( HX_CTX ,::kha::audio2::ogg::vorbis::data::ReaderErrorType_obj::INVALID_SETUP_dyn(),null(),hx::SourceInfo(HX_("kha/audio2/ogg/vorbis/data/Mapping.hx",81,62,bf,30),49,HX_("kha.audio2.ogg.vorbis.data.Mapping",3e,52,b0,af),HX_("read",56,4b,a7,4b))));
            					}
HXLINE(  51)					int _hx_tmp4 = ( ( ::kha::audio2::ogg::vorbis::data::MappingChannel)(_hx_array_unsafe_get(m->chan,k)) )->magnitude;
HXDLIN(  51)					if ((_hx_tmp4 == ( ( ::kha::audio2::ogg::vorbis::data::MappingChannel)(_hx_array_unsafe_get(m->chan,k)) )->angle)) {
HXLINE(  52)						HX_STACK_DO_THROW( ::kha::audio2::ogg::vorbis::data::ReaderError_obj::__alloc( HX_CTX ,::kha::audio2::ogg::vorbis::data::ReaderErrorType_obj::INVALID_SETUP_dyn(),null(),hx::SourceInfo(HX_("kha/audio2/ogg/vorbis/data/Mapping.hx",81,62,bf,30),52,HX_("kha.audio2.ogg.vorbis.data.Mapping",3e,52,b0,af),HX_("read",56,4b,a7,4b))));
            					}
            				}
            			}
            		}
            		else {
HXLINE(  56)			m->couplingSteps = 0;
            		}
HXLINE(  60)		if ((decodeState->readBits(2) != 0)) {
HXLINE(  61)			HX_STACK_DO_THROW( ::kha::audio2::ogg::vorbis::data::ReaderError_obj::__alloc( HX_CTX ,::kha::audio2::ogg::vorbis::data::ReaderErrorType_obj::INVALID_SETUP_dyn(),null(),hx::SourceInfo(HX_("kha/audio2/ogg/vorbis/data/Mapping.hx",81,62,bf,30),61,HX_("kha.audio2.ogg.vorbis.data.Mapping",3e,52,b0,af),HX_("read",56,4b,a7,4b))));
            		}
HXLINE(  63)		if ((m->submaps > 1)) {
HXLINE(  64)			int _g21 = 0;
HXDLIN(  64)			int _g31 = channels;
HXDLIN(  64)			while((_g21 < _g31)){
HXLINE(  64)				_g21 = (_g21 + 1);
HXDLIN(  64)				int j1 = (_g21 - 1);
HXLINE(  65)				( ( ::kha::audio2::ogg::vorbis::data::MappingChannel)(_hx_array_unsafe_get(m->chan,j1)) )->mux = decodeState->readBits(4);
HXLINE(  66)				 ::kha::audio2::ogg::vorbis::data::MappingChannel _hx_tmp5 = ( ( ::kha::audio2::ogg::vorbis::data::MappingChannel)(_hx_array_unsafe_get(m->chan,j1)) );
HXDLIN(  66)				if ((_hx_tmp5->mux >= m->submaps)) {
HXLINE(  67)					HX_STACK_DO_THROW( ::kha::audio2::ogg::vorbis::data::ReaderError_obj::__alloc( HX_CTX ,::kha::audio2::ogg::vorbis::data::ReaderErrorType_obj::INVALID_SETUP_dyn(),null(),hx::SourceInfo(HX_("kha/audio2/ogg/vorbis/data/Mapping.hx",81,62,bf,30),67,HX_("kha.audio2.ogg.vorbis.data.Mapping",3e,52,b0,af),HX_("read",56,4b,a7,4b))));
            				}
            			}
            		}
            		else {
HXLINE(  71)			int _g22 = 0;
HXDLIN(  71)			int _g32 = channels;
HXDLIN(  71)			while((_g22 < _g32)){
HXLINE(  71)				_g22 = (_g22 + 1);
HXDLIN(  71)				int j2 = (_g22 - 1);
HXLINE(  72)				( ( ::kha::audio2::ogg::vorbis::data::MappingChannel)(_hx_array_unsafe_get(m->chan,j2)) )->mux = 0;
            			}
            		}
HXLINE(  76)		::Array< int > this3 = ::Array_obj< int >::__new(m->submaps);
HXDLIN(  76)		m->submapFloor = this3;
HXLINE(  77)		::Array< int > this4 = ::Array_obj< int >::__new(m->submaps);
HXDLIN(  77)		m->submapResidue = this4;
HXLINE(  79)		{
HXLINE(  79)			int _g23 = 0;
HXDLIN(  79)			int _g33 = m->submaps;
HXDLIN(  79)			while((_g23 < _g33)){
HXLINE(  79)				_g23 = (_g23 + 1);
HXDLIN(  79)				int j3 = (_g23 - 1);
HXLINE(  80)				decodeState->readBits(8);
HXLINE(  81)				{
HXLINE(  81)					::Array< int > this5 = m->submapFloor;
HXDLIN(  81)					int val1 = decodeState->readBits(8);
HXDLIN(  81)					this5->__unsafe_set(j3,val1);
            				}
HXLINE(  82)				{
HXLINE(  82)					::Array< int > this6 = m->submapResidue;
HXDLIN(  82)					int val2 = decodeState->readBits(8);
HXDLIN(  82)					this6->__unsafe_set(j3,val2);
            				}
            			}
            		}
HXLINE(  85)		return m;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Mapping_obj,read,return )


hx::ObjectPtr< Mapping_obj > Mapping_obj::__new() {
	hx::ObjectPtr< Mapping_obj > __this = new Mapping_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Mapping_obj > Mapping_obj::__alloc(hx::Ctx *_hx_ctx) {
	Mapping_obj *__this = (Mapping_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Mapping_obj), true, "kha.audio2.ogg.vorbis.data.Mapping"));
	*(void **)__this = Mapping_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Mapping_obj::Mapping_obj()
{
}

void Mapping_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Mapping);
	HX_MARK_MEMBER_NAME(couplingSteps,"couplingSteps");
	HX_MARK_MEMBER_NAME(chan,"chan");
	HX_MARK_MEMBER_NAME(submaps,"submaps");
	HX_MARK_MEMBER_NAME(submapFloor,"submapFloor");
	HX_MARK_MEMBER_NAME(submapResidue,"submapResidue");
	HX_MARK_END_CLASS();
}

void Mapping_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(couplingSteps,"couplingSteps");
	HX_VISIT_MEMBER_NAME(chan,"chan");
	HX_VISIT_MEMBER_NAME(submaps,"submaps");
	HX_VISIT_MEMBER_NAME(submapFloor,"submapFloor");
	HX_VISIT_MEMBER_NAME(submapResidue,"submapResidue");
}

hx::Val Mapping_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"chan") ) { return hx::Val( chan ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"submaps") ) { return hx::Val( submaps ); }
		if (HX_FIELD_EQ(inName,"doFloor") ) { return hx::Val( doFloor_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"submapFloor") ) { return hx::Val( submapFloor ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"couplingSteps") ) { return hx::Val( couplingSteps ); }
		if (HX_FIELD_EQ(inName,"submapResidue") ) { return hx::Val( submapResidue ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Mapping_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"read") ) { outValue = read_dyn(); return true; }
	}
	return false;
}

hx::Val Mapping_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"chan") ) { chan=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"submaps") ) { submaps=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"submapFloor") ) { submapFloor=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"couplingSteps") ) { couplingSteps=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"submapResidue") ) { submapResidue=inValue.Cast< ::Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Mapping_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("couplingSteps",ea,be,6c,19));
	outFields->push(HX_("chan",d2,5e,bf,41));
	outFields->push(HX_("submaps",d7,a7,80,2b));
	outFields->push(HX_("submapFloor",10,6b,36,00));
	outFields->push(HX_("submapResidue",8f,2a,0e,bb));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo Mapping_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Mapping_obj,couplingSteps),HX_("couplingSteps",ea,be,6c,19)},
	{hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Mapping_obj,chan),HX_("chan",d2,5e,bf,41)},
	{hx::fsInt,(int)offsetof(Mapping_obj,submaps),HX_("submaps",d7,a7,80,2b)},
	{hx::fsObject /* ::Array< int > */ ,(int)offsetof(Mapping_obj,submapFloor),HX_("submapFloor",10,6b,36,00)},
	{hx::fsObject /* ::Array< int > */ ,(int)offsetof(Mapping_obj,submapResidue),HX_("submapResidue",8f,2a,0e,bb)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Mapping_obj_sStaticStorageInfo = 0;
#endif

static ::String Mapping_obj_sMemberFields[] = {
	HX_("couplingSteps",ea,be,6c,19),
	HX_("chan",d2,5e,bf,41),
	HX_("submaps",d7,a7,80,2b),
	HX_("submapFloor",10,6b,36,00),
	HX_("submapResidue",8f,2a,0e,bb),
	HX_("doFloor",41,b2,c3,35),
	::String(null()) };

hx::Class Mapping_obj::__mClass;

static ::String Mapping_obj_sStaticFields[] = {
	HX_("read",56,4b,a7,4b),
	::String(null())
};

void Mapping_obj::__register()
{
	Mapping_obj _hx_dummy;
	Mapping_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("kha.audio2.ogg.vorbis.data.Mapping",3e,52,b0,af);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Mapping_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Mapping_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Mapping_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Mapping_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Mapping_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Mapping_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace audio2
} // end namespace ogg
} // end namespace vorbis
} // end namespace data
