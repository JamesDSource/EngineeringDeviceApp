// Generated by Haxe 4.0.0-preview.5+1aaf080
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <hxinc/Std.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_VorbisTools
#include <hxinc/kha/audio2/ogg/vorbis/VorbisTools.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_IntPoint
#include <hxinc/kha/audio2/ogg/vorbis/data/IntPoint.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_302389da22473e91_90_assert,"kha.audio2.ogg.vorbis.VorbisTools","assert",0xf595fd60,"kha.audio2.ogg.vorbis.VorbisTools.assert","kha/audio2/ogg/vorbis/VorbisTools.hx",90,0x5e1b30aa)
HX_LOCAL_STACK_FRAME(_hx_pos_302389da22473e91_99_neighbors,"kha.audio2.ogg.vorbis.VorbisTools","neighbors",0x64c7c4e7,"kha.audio2.ogg.vorbis.VorbisTools.neighbors","kha/audio2/ogg/vorbis/VorbisTools.hx",99,0x5e1b30aa)
HX_LOCAL_STACK_FRAME(_hx_pos_302389da22473e91_116_floatUnpack,"kha.audio2.ogg.vorbis.VorbisTools","floatUnpack",0xfb174f94,"kha.audio2.ogg.vorbis.VorbisTools.floatUnpack","kha/audio2/ogg/vorbis/VorbisTools.hx",116,0x5e1b30aa)
HX_LOCAL_STACK_FRAME(_hx_pos_302389da22473e91_126_bitReverse,"kha.audio2.ogg.vorbis.VorbisTools","bitReverse",0x688a176f,"kha.audio2.ogg.vorbis.VorbisTools.bitReverse","kha/audio2/ogg/vorbis/VorbisTools.hx",126,0x5e1b30aa)
HX_LOCAL_STACK_FRAME(_hx_pos_302389da22473e91_135_pointCompare,"kha.audio2.ogg.vorbis.VorbisTools","pointCompare",0xcb755c4f,"kha.audio2.ogg.vorbis.VorbisTools.pointCompare","kha/audio2/ogg/vorbis/VorbisTools.hx",135,0x5e1b30aa)
HX_LOCAL_STACK_FRAME(_hx_pos_302389da22473e91_139_uintAsc,"kha.audio2.ogg.vorbis.VorbisTools","uintAsc",0x56877fdd,"kha.audio2.ogg.vorbis.VorbisTools.uintAsc","kha/audio2/ogg/vorbis/VorbisTools.hx",139,0x5e1b30aa)
HX_LOCAL_STACK_FRAME(_hx_pos_302389da22473e91_149_lookup1Values,"kha.audio2.ogg.vorbis.VorbisTools","lookup1Values",0xe93ce45f,"kha.audio2.ogg.vorbis.VorbisTools.lookup1Values","kha/audio2/ogg/vorbis/VorbisTools.hx",149,0x5e1b30aa)
HX_LOCAL_STACK_FRAME(_hx_pos_302389da22473e91_161_computeWindow,"kha.audio2.ogg.vorbis.VorbisTools","computeWindow",0x8f2b736d,"kha.audio2.ogg.vorbis.VorbisTools.computeWindow","kha/audio2/ogg/vorbis/VorbisTools.hx",161,0x5e1b30aa)
HX_LOCAL_STACK_FRAME(_hx_pos_302389da22473e91_169_square,"kha.audio2.ogg.vorbis.VorbisTools","square",0x0284b737,"kha.audio2.ogg.vorbis.VorbisTools.square","kha/audio2/ogg/vorbis/VorbisTools.hx",169,0x5e1b30aa)
HX_LOCAL_STACK_FRAME(_hx_pos_302389da22473e91_173_computeBitReverse,"kha.audio2.ogg.vorbis.VorbisTools","computeBitReverse",0x2cbfedd2,"kha.audio2.ogg.vorbis.VorbisTools.computeBitReverse","kha/audio2/ogg/vorbis/VorbisTools.hx",173,0x5e1b30aa)
static const int _hx_array_data_bfc1da94_13[] = {
	(int)0,(int)1,(int)2,(int)2,(int)3,(int)3,(int)3,(int)3,(int)4,(int)4,(int)4,(int)4,(int)4,(int)4,(int)4,(int)4,
};
HX_LOCAL_STACK_FRAME(_hx_pos_302389da22473e91_183_computeTwiddleFactors,"kha.audio2.ogg.vorbis.VorbisTools","computeTwiddleFactors",0x675f8882,"kha.audio2.ogg.vorbis.VorbisTools.computeTwiddleFactors","kha/audio2/ogg/vorbis/VorbisTools.hx",183,0x5e1b30aa)
HX_LOCAL_STACK_FRAME(_hx_pos_302389da22473e91_206_drawLine,"kha.audio2.ogg.vorbis.VorbisTools","drawLine",0x98bdd332,"kha.audio2.ogg.vorbis.VorbisTools.drawLine","kha/audio2/ogg/vorbis/VorbisTools.hx",206,0x5e1b30aa)
HX_LOCAL_STACK_FRAME(_hx_pos_302389da22473e91_265_predictPoint,"kha.audio2.ogg.vorbis.VorbisTools","predictPoint",0x19836891,"kha.audio2.ogg.vorbis.VorbisTools.predictPoint","kha/audio2/ogg/vorbis/VorbisTools.hx",265,0x5e1b30aa)
HX_LOCAL_STACK_FRAME(_hx_pos_302389da22473e91_274_emptyFloatVector,"kha.audio2.ogg.vorbis.VorbisTools","emptyFloatVector",0xbc7bc10c,"kha.audio2.ogg.vorbis.VorbisTools.emptyFloatVector","kha/audio2/ogg/vorbis/VorbisTools.hx",274,0x5e1b30aa)
HX_LOCAL_STACK_FRAME(_hx_pos_302389da22473e91_284_copyVector,"kha.audio2.ogg.vorbis.VorbisTools","copyVector",0xc0fd21f2,"kha.audio2.ogg.vorbis.VorbisTools.copyVector","kha/audio2/ogg/vorbis/VorbisTools.hx",284,0x5e1b30aa)
HX_LOCAL_STACK_FRAME(_hx_pos_302389da22473e91_16_boot,"kha.audio2.ogg.vorbis.VorbisTools","boot",0x3ba3804c,"kha.audio2.ogg.vorbis.VorbisTools.boot","kha/audio2/ogg/vorbis/VorbisTools.hx",16,0x5e1b30aa)
HX_LOCAL_STACK_FRAME(_hx_pos_302389da22473e91_18_boot,"kha.audio2.ogg.vorbis.VorbisTools","boot",0x3ba3804c,"kha.audio2.ogg.vorbis.VorbisTools.boot","kha/audio2/ogg/vorbis/VorbisTools.hx",18,0x5e1b30aa)
HX_LOCAL_STACK_FRAME(_hx_pos_302389da22473e91_20_boot,"kha.audio2.ogg.vorbis.VorbisTools","boot",0x3ba3804c,"kha.audio2.ogg.vorbis.VorbisTools.boot","kha/audio2/ogg/vorbis/VorbisTools.hx",20,0x5e1b30aa)
HX_LOCAL_STACK_FRAME(_hx_pos_302389da22473e91_21_boot,"kha.audio2.ogg.vorbis.VorbisTools","boot",0x3ba3804c,"kha.audio2.ogg.vorbis.VorbisTools.boot","kha/audio2/ogg/vorbis/VorbisTools.hx",21,0x5e1b30aa)
HX_LOCAL_STACK_FRAME(_hx_pos_302389da22473e91_23_boot,"kha.audio2.ogg.vorbis.VorbisTools","boot",0x3ba3804c,"kha.audio2.ogg.vorbis.VorbisTools.boot","kha/audio2/ogg/vorbis/VorbisTools.hx",23,0x5e1b30aa)
static const Float _hx_array_data_bfc1da94_30[] = {
	1.0649863e-07,1.1341951e-07,1.2079015e-07,1.2863978e-07,1.3699951e-07,1.4590251e-07,1.5538408e-07,1.6548181e-07,1.7623575e-07,1.8768855e-07,1.9988561e-07,2.1287530e-07,2.2670913e-07,2.4144197e-07,2.5713223e-07,2.7384213e-07,2.9163793e-07,3.1059021e-07,3.3077411e-07,3.5226968e-07,3.7516214e-07,3.9954229e-07,4.2550680e-07,4.5315863e-07,4.8260743e-07,5.1396998e-07,5.4737065e-07,5.8294187e-07,6.2082472e-07,6.6116941e-07,7.0413592e-07,7.4989464e-07,7.9862701e-07,8.5052630e-07,9.0579828e-07,9.6466216e-07,1.0273513e-06,1.0941144e-06,1.1652161e-06,1.2409384e-06,1.3215816e-06,1.4074654e-06,1.4989305e-06,1.5963394e-06,1.7000785e-06,1.8105592e-06,1.9282195e-06,2.0535261e-06,2.1869758e-06,2.3290978e-06,2.4804557e-06,2.6416497e-06,2.8133190e-06,2.9961443e-06,3.1908506e-06,3.3982101e-06,3.6190449e-06,3.8542308e-06,4.1047004e-06,4.3714470e-06,4.6555282e-06,4.9580707e-06,5.2802740e-06,5.6234160e-06,5.9888572e-06,6.3780469e-06,6.7925283e-06,7.2339451e-06,7.7040476e-06,8.2047000e-06,8.7378876e-06,9.3057248e-06,9.9104632e-06,1.0554501e-05,1.1240392e-05,1.1970856e-05,1.2748789e-05,1.3577278e-05,1.4459606e-05,1.5399272e-05,1.6400004e-05,1.7465768e-05,1.8600792e-05,1.9809576e-05,2.1096914e-05,2.2467911e-05,2.3928002e-05,2.5482978e-05,2.7139006e-05,2.8902651e-05,3.0780908e-05,3.2781225e-05,3.4911534e-05,3.7180282e-05,3.9596466e-05,4.2169667e-05,4.4910090e-05,4.7828601e-05,5.0936773e-05,5.4246931e-05,5.7772202e-05,6.1526565e-05,6.5524908e-05,6.9783085e-05,7.4317983e-05,7.9147585e-05,8.4291040e-05,8.9768747e-05,9.5602426e-05,0.00010181521,0.00010843174,0.00011547824,0.00012298267,0.00013097477,0.00013948625,0.00014855085,0.00015820453,0.00016848555,0.00017943469,0.00019109536,0.00020351382,0.00021673929,0.00023082423,0.00024582449,0.00026179955,0.00027881276,0.00029693158,0.00031622787,0.00033677814,0.00035866388,0.00038197188,0.00040679456,0.00043323036,0.00046138411,0.00049136745,0.00052329927,0.00055730621,0.00059352311,0.00063209358,0.00067317058,0.00071691700,0.00076350630,0.00081312324,0.00086596457,0.00092223983,0.00098217216,0.0010459992,0.0011139742,0.0011863665,0.0012634633,0.0013455702,0.0014330129,0.0015261382,0.0016253153,0.0017309374,0.0018434235,0.0019632195,0.0020908006,0.0022266726,0.0023713743,0.0025254795,0.0026895994,0.0028643847,0.0030505286,0.0032487691,0.0034598925,0.0036847358,0.0039241906,0.0041792066,0.0044507950,0.0047400328,0.0050480668,0.0053761186,0.0057254891,0.0060975636,0.0064938176,0.0069158225,0.0073652516,0.0078438871,0.0083536271,0.0088964928,0.009474637,0.010090352,0.010746080,0.011444421,0.012188144,0.012980198,0.013823725,0.014722068,0.015678791,0.016697687,0.017782797,0.018938423,0.020169149,0.021479854,0.022875735,0.024362330,0.025945531,0.027631618,0.029427276,0.031339626,0.033376252,0.035545228,0.037855157,0.040315199,0.042935108,0.045725273,0.048696758,0.051861348,0.055231591,0.058820850,0.062643361,0.066714279,0.071049749,0.075666962,0.080584227,0.085821044,0.091398179,0.097337747,0.10366330,0.11039993,0.11757434,0.12521498,0.13335215,0.14201813,0.15124727,0.16107617,0.17154380,0.18269168,0.19456402,0.20720788,0.22067342,0.23501402,0.25028656,0.26655159,0.28387361,0.30232132,0.32196786,0.34289114,0.36517414,0.38890521,0.41417847,0.44109412,0.46975890,0.50028648,0.53279791,0.56742212,0.60429640,0.64356699,0.68538959,0.72993007,0.77736504,0.82788260,0.88168307,0.9389798,1.0,
};
namespace kha{
namespace audio2{
namespace ogg{
namespace vorbis{

void VorbisTools_obj::__construct() { }

Dynamic VorbisTools_obj::__CreateEmpty() { return new VorbisTools_obj; }

void *VorbisTools_obj::_hx_vtable = 0;

Dynamic VorbisTools_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< VorbisTools_obj > _hx_result = new VorbisTools_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool VorbisTools_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2cc82abe;
}

int VorbisTools_obj::EOP;

::Array< ::Dynamic> VorbisTools_obj::integerDivideTable;

Float VorbisTools_obj::M__PI;

int VorbisTools_obj::DIVTAB_NUMER;

int VorbisTools_obj::DIVTAB_DENOM;

::Array< Float > VorbisTools_obj::INVERSE_DB_TABLE;

void VorbisTools_obj::_hx_assert(bool b, ::Dynamic p){
            	HX_STACKFRAME(&_hx_pos_302389da22473e91_90_assert)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(VorbisTools_obj,_hx_assert,(void))

 ::Dynamic VorbisTools_obj::neighbors(::Array< int > x,int n){
            	HX_STACKFRAME(&_hx_pos_302389da22473e91_99_neighbors)
HXLINE( 100)		int low = -1;
HXLINE( 101)		int high = 65536;
HXLINE( 102)		int plow = 0;
HXLINE( 103)		int phigh = 0;
HXLINE( 105)		{
HXLINE( 105)			int _g = 0;
HXDLIN( 105)			int _g1 = n;
HXDLIN( 105)			while((_g < _g1)){
HXLINE( 105)				_g = (_g + 1);
HXDLIN( 105)				int i = (_g - 1);
HXLINE( 106)				bool _hx_tmp;
HXDLIN( 106)				if ((( (int)(_hx_array_unsafe_get(x,i)) ) > low)) {
HXLINE( 106)					int _hx_tmp1 = ( (int)(_hx_array_unsafe_get(x,i)) );
HXDLIN( 106)					_hx_tmp = (_hx_tmp1 < ( (int)(_hx_array_unsafe_get(x,n)) ));
            				}
            				else {
HXLINE( 106)					_hx_tmp = false;
            				}
HXDLIN( 106)				if (_hx_tmp) {
HXLINE( 106)					plow = i;
HXDLIN( 106)					low = ( (int)(_hx_array_unsafe_get(x,i)) );
            				}
HXLINE( 107)				bool _hx_tmp2;
HXDLIN( 107)				if ((( (int)(_hx_array_unsafe_get(x,i)) ) < high)) {
HXLINE( 107)					int _hx_tmp3 = ( (int)(_hx_array_unsafe_get(x,i)) );
HXDLIN( 107)					_hx_tmp2 = (_hx_tmp3 > ( (int)(_hx_array_unsafe_get(x,n)) ));
            				}
            				else {
HXLINE( 107)					_hx_tmp2 = false;
            				}
HXDLIN( 107)				if (_hx_tmp2) {
HXLINE( 107)					phigh = i;
HXDLIN( 107)					high = ( (int)(_hx_array_unsafe_get(x,i)) );
            				}
            			}
            		}
HXLINE( 109)		return  ::Dynamic(hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("low",94,54,52,00),plow)
            			->setFixed(1,HX_("high",62,37,0e,45),phigh));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(VorbisTools_obj,neighbors,return )

Float VorbisTools_obj::floatUnpack(int x){
            	HX_STACKFRAME(&_hx_pos_302389da22473e91_116_floatUnpack)
HXLINE( 118)		Float mantissa;
HXDLIN( 118)		int _hx_int = (x & 2097151);
HXDLIN( 118)		if ((_hx_int < 0)) {
HXLINE( 118)			mantissa = (((Float)4294967296.0) + _hx_int);
            		}
            		else {
HXLINE( 118)			mantissa = (_hx_int + ((Float)0.0));
            		}
HXLINE( 119)		int sign = (x & (int)-2147483648);
HXLINE( 120)		int exp = hx::UShr((x & (int)2145386496),21);
HXLINE( 121)		Float res;
HXDLIN( 121)		if ((sign != 0)) {
HXLINE( 121)			res = -(mantissa);
            		}
            		else {
HXLINE( 121)			res = mantissa;
            		}
HXLINE( 122)		return (res * ::Math_obj::pow(( (Float)(2) ),( (Float)((exp - 788)) )));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(VorbisTools_obj,floatUnpack,return )

int VorbisTools_obj::bitReverse(int n){
            	HX_STACKFRAME(&_hx_pos_302389da22473e91_126_bitReverse)
HXLINE( 127)		n = (hx::UShr((n & (int)-1431655766),1) | ((n & (int)1431655765) << 1));
HXLINE( 128)		n = (hx::UShr((n & -858993460),2) | ((n & 858993459) << 2));
HXLINE( 129)		n = (hx::UShr((n & -252645136),4) | ((n & 252645135) << 4));
HXLINE( 130)		n = (hx::UShr((n & -16711936),8) | ((n & 16711935) << 8));
HXLINE( 131)		return (hx::UShr(n,16) | (n << 16));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(VorbisTools_obj,bitReverse,return )

int VorbisTools_obj::pointCompare( ::kha::audio2::ogg::vorbis::data::IntPoint a, ::kha::audio2::ogg::vorbis::data::IntPoint b){
            	HX_STACKFRAME(&_hx_pos_302389da22473e91_135_pointCompare)
HXDLIN( 135)		if ((a->x < b->x)) {
HXDLIN( 135)			return -1;
            		}
            		else {
HXDLIN( 135)			if ((a->x > b->x)) {
HXDLIN( 135)				return 1;
            			}
            			else {
HXDLIN( 135)				return 0;
            			}
            		}
HXDLIN( 135)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(VorbisTools_obj,pointCompare,return )

int VorbisTools_obj::uintAsc(int a,int b){
            	HX_STACKFRAME(&_hx_pos_302389da22473e91_139_uintAsc)
HXDLIN( 139)		bool aNeg = (b < 0);
HXDLIN( 139)		bool bNeg = (a < 0);
HXDLIN( 139)		bool _hx_tmp;
HXDLIN( 139)		if ((aNeg != bNeg)) {
HXDLIN( 139)			_hx_tmp = aNeg;
            		}
            		else {
HXDLIN( 139)			_hx_tmp = (b > a);
            		}
HXDLIN( 139)		if (_hx_tmp) {
HXLINE( 140)			return -1;
            		}
            		else {
HXLINE( 141)			if ((a == b)) {
HXLINE( 142)				return 0;
            			}
            			else {
HXLINE( 144)				return 1;
            			}
            		}
HXLINE( 139)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(VorbisTools_obj,uintAsc,return )

int VorbisTools_obj::lookup1Values(int entries,int dim){
            	HX_STACKFRAME(&_hx_pos_302389da22473e91_149_lookup1Values)
HXLINE( 150)		int r = ::Std_obj::_hx_int(::Math_obj::exp((::Math_obj::log(( (Float)(entries) )) / ( (Float)(dim) ))));
HXLINE( 151)		if ((::Std_obj::_hx_int(::Math_obj::pow(( (Float)((r + 1)) ),( (Float)(dim) ))) <= entries)) {
HXLINE( 152)			r = (r + 1);
            		}
HXLINE( 156)		bool b = (::Std_obj::_hx_int(::Math_obj::pow(( (Float)(r) ),( (Float)(dim) ))) <= entries);
HXLINE( 157)		return r;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(VorbisTools_obj,lookup1Values,return )

void VorbisTools_obj::computeWindow(int n,::Array< Float > window){
            	HX_STACKFRAME(&_hx_pos_302389da22473e91_161_computeWindow)
HXLINE( 162)		int n2 = (n >> 1);
HXLINE( 163)		{
HXLINE( 163)			int _g = 0;
HXDLIN( 163)			int _g1 = n2;
HXDLIN( 163)			while((_g < _g1)){
HXLINE( 163)				_g = (_g + 1);
HXDLIN( 163)				int i = (_g - 1);
HXLINE( 164)				{
HXLINE( 164)					Float val = ::Math_obj::sin((((Float)1.5707963267948966) * ::kha::audio2::ogg::vorbis::VorbisTools_obj::square(::Math_obj::sin(((((i + ((Float)0.5)) / ( (Float)(n2) )) * ((Float)0.5)) * ((Float)3.14159265358979323846264))))));
HXDLIN( 164)					window->__unsafe_set(i,val);
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(VorbisTools_obj,computeWindow,(void))

Float VorbisTools_obj::square(Float f){
            	HX_STACKFRAME(&_hx_pos_302389da22473e91_169_square)
HXDLIN( 169)		return (f * f);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(VorbisTools_obj,square,return )

void VorbisTools_obj::computeBitReverse(int n,::Array< int > rev){
            	HX_STACKFRAME(&_hx_pos_302389da22473e91_173_computeBitReverse)
HXLINE( 174)		::Array< int > log2_4 = ::Array_obj< int >::fromData( _hx_array_data_bfc1da94_13,16);
HXDLIN( 174)		int ld;
HXDLIN( 174)		if ((n < 16384)) {
HXLINE( 174)			if ((n < 16)) {
HXLINE( 174)				ld = log2_4->__get(n);
            			}
            			else {
HXLINE( 174)				if ((n < 512)) {
HXLINE( 174)					ld = (5 + log2_4->__get((n >> 5)));
            				}
            				else {
HXLINE( 174)					ld = (10 + log2_4->__get((n >> 10)));
            				}
            			}
            		}
            		else {
HXLINE( 174)			if ((n < 16777216)) {
HXLINE( 174)				if ((n < 524288)) {
HXLINE( 174)					ld = (15 + log2_4->__get((n >> 15)));
            				}
            				else {
HXLINE( 174)					ld = (20 + log2_4->__get((n >> 20)));
            				}
            			}
            			else {
HXLINE( 174)				if ((n < 536870912)) {
HXLINE( 174)					ld = (25 + log2_4->__get((n >> 25)));
            				}
            				else {
HXLINE( 174)					if ((n < (int)-2147483648)) {
HXLINE( 174)						ld = (30 + log2_4->__get((n >> 30)));
            					}
            					else {
HXLINE( 174)						ld = 0;
            					}
            				}
            			}
            		}
HXDLIN( 174)		int ld1 = (ld - 1);
HXLINE( 175)		int n8 = (n >> 3);
HXLINE( 177)		{
HXLINE( 177)			int _g = 0;
HXDLIN( 177)			int _g1 = n8;
HXDLIN( 177)			while((_g < _g1)){
HXLINE( 177)				_g = (_g + 1);
HXDLIN( 177)				int i = (_g - 1);
HXLINE( 178)				{
HXLINE( 178)					int n1 = i;
HXDLIN( 178)					n1 = (hx::UShr((n1 & (int)-1431655766),1) | ((n1 & (int)1431655765) << 1));
HXDLIN( 178)					n1 = (hx::UShr((n1 & -858993460),2) | ((n1 & 858993459) << 2));
HXDLIN( 178)					n1 = (hx::UShr((n1 & -252645136),4) | ((n1 & 252645135) << 4));
HXDLIN( 178)					n1 = (hx::UShr((n1 & -16711936),8) | ((n1 & 16711935) << 8));
HXDLIN( 178)					rev->__unsafe_set(i,(hx::UShr((hx::UShr(n1,16) | (n1 << 16)),((32 - ld1) + 3)) << 2));
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(VorbisTools_obj,computeBitReverse,(void))

void VorbisTools_obj::computeTwiddleFactors(int n,::Array< Float > af,::Array< Float > bf,::Array< Float > cf){
            	HX_STACKFRAME(&_hx_pos_302389da22473e91_183_computeTwiddleFactors)
HXLINE( 184)		int n4 = (n >> 2);
HXLINE( 185)		int n8 = (n >> 3);
HXLINE( 187)		int k2 = 0;
HXLINE( 188)		{
HXLINE( 188)			int _g = 0;
HXDLIN( 188)			int _g1 = n4;
HXDLIN( 188)			while((_g < _g1)){
HXLINE( 188)				_g = (_g + 1);
HXDLIN( 188)				int k = (_g - 1);
HXLINE( 189)				af->__unsafe_set(k2,::Math_obj::cos(((( (Float)((4 * k)) ) * ((Float)3.14159265358979323846264)) / ( (Float)(n) ))));
HXLINE( 190)				af->__unsafe_set((k2 + 1),-(::Math_obj::sin(((( (Float)((4 * k)) ) * ((Float)3.14159265358979323846264)) / ( (Float)(n) )))));
HXLINE( 191)				bf->__unsafe_set(k2,(::Math_obj::cos((((( (Float)((k2 + 1)) ) * ((Float)3.14159265358979323846264)) / ( (Float)(n) )) / ( (Float)(2) ))) * ((Float)0.5)));
HXLINE( 192)				bf->__unsafe_set((k2 + 1),(::Math_obj::sin((((( (Float)((k2 + 1)) ) * ((Float)3.14159265358979323846264)) / ( (Float)(n) )) / ( (Float)(2) ))) * ((Float)0.5)));
HXLINE( 193)				k2 = (k2 + 2);
            			}
            		}
HXLINE( 196)		int k21 = 0;
HXLINE( 197)		{
HXLINE( 197)			int _g2 = 0;
HXDLIN( 197)			int _g3 = n8;
HXDLIN( 197)			while((_g2 < _g3)){
HXLINE( 197)				_g2 = (_g2 + 1);
HXDLIN( 197)				int k1 = (_g2 - 1);
HXLINE( 198)				cf->__unsafe_set(k21,::Math_obj::cos(((( (Float)((2 * (k21 + 1))) ) * ((Float)3.14159265358979323846264)) / ( (Float)(n) ))));
HXLINE( 199)				cf->__unsafe_set((k21 + 1),-(::Math_obj::sin(((( (Float)((2 * (k21 + 1))) ) * ((Float)3.14159265358979323846264)) / ( (Float)(n) )))));
HXLINE( 200)				k21 = (k21 + 2);
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(VorbisTools_obj,computeTwiddleFactors,(void))

void VorbisTools_obj::drawLine(::Array< Float > output,int x0,int y0,int x1,int y1,int n){
            	HX_STACKFRAME(&_hx_pos_302389da22473e91_206_drawLine)
HXLINE( 207)		if (hx::IsNull( ::kha::audio2::ogg::vorbis::VorbisTools_obj::integerDivideTable )) {
HXLINE( 208)			::Array< ::Dynamic> this1 = ::Array_obj< ::Dynamic>::__new(32);
HXDLIN( 208)			::kha::audio2::ogg::vorbis::VorbisTools_obj::integerDivideTable = this1;
HXLINE( 209)			{
HXLINE( 209)				int _g = 0;
HXDLIN( 209)				while((_g < 32)){
HXLINE( 209)					_g = (_g + 1);
HXDLIN( 209)					int i = (_g - 1);
HXLINE( 210)					{
HXLINE( 210)						::Array< ::Dynamic> this2 = ::kha::audio2::ogg::vorbis::VorbisTools_obj::integerDivideTable;
HXDLIN( 210)						::Array< int > this3 = ::Array_obj< int >::__new(64);
HXDLIN( 210)						this2->__unsafe_set(i,this3);
            					}
HXLINE( 211)					{
HXLINE( 211)						int _g1 = 1;
HXDLIN( 211)						while((_g1 < 64)){
HXLINE( 211)							_g1 = (_g1 + 1);
HXDLIN( 211)							int j = (_g1 - 1);
HXLINE( 212)							{
HXLINE( 212)								::Array< int > this4 = ( (::Array< int >)(_hx_array_unsafe_get(::kha::audio2::ogg::vorbis::VorbisTools_obj::integerDivideTable,i)) );
HXDLIN( 212)								int val = ::Std_obj::_hx_int((( (Float)(i) ) / ( (Float)(j) )));
HXDLIN( 212)								this4->__unsafe_set(j,val);
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 217)		int dy = (y1 - y0);
HXLINE( 218)		int adx = (x1 - x0);
HXLINE( 219)		int ady;
HXDLIN( 219)		if ((dy < 0)) {
HXLINE( 219)			ady = -(dy);
            		}
            		else {
HXLINE( 219)			ady = dy;
            		}
HXLINE( 220)		int base;
HXLINE( 221)		int x = x0;
HXLINE( 222)		int y = y0;
HXLINE( 223)		int err = 0;
HXLINE( 224)		int sy;
HXDLIN( 224)		bool sy1;
HXDLIN( 224)		if ((adx < 64)) {
HXLINE( 224)			sy1 = (ady < 32);
            		}
            		else {
HXLINE( 224)			sy1 = false;
            		}
HXDLIN( 224)		if (sy1) {
HXLINE( 225)			if ((dy < 0)) {
HXLINE( 226)				base = -(( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(::kha::audio2::ogg::vorbis::VorbisTools_obj::integerDivideTable,ady)) ),adx)) ));
HXLINE( 224)				sy = (base - 1);
            			}
            			else {
HXLINE( 229)				base = ( (int)(_hx_array_unsafe_get(( (::Array< int >)(_hx_array_unsafe_get(::kha::audio2::ogg::vorbis::VorbisTools_obj::integerDivideTable,ady)) ),adx)) );
HXLINE( 224)				sy = (base + 1);
            			}
            		}
            		else {
HXLINE( 233)			base = ::Std_obj::_hx_int((( (Float)(dy) ) / ( (Float)(adx) )));
HXLINE( 234)			if ((dy < 0)) {
HXLINE( 224)				sy = (base - 1);
            			}
            			else {
HXLINE( 224)				sy = (base + 1);
            			}
            		}
HXLINE( 240)		int ady1;
HXDLIN( 240)		if ((base < 0)) {
HXLINE( 240)			ady1 = -(base);
            		}
            		else {
HXLINE( 240)			ady1 = base;
            		}
HXDLIN( 240)		ady = (ady - (ady1 * adx));
HXLINE( 241)		if ((x1 > n)) {
HXLINE( 242)			x1 = n;
            		}
HXLINE( 245)		{
HXLINE( 245)			int _g2 = x;
HXDLIN( 245)			::Array< Float > _g11 = output;
HXDLIN( 245)			{
HXLINE( 245)				Float val1 = ( (Float)(_hx_array_unsafe_get(_g11,_g2)) );
HXDLIN( 245)				_g11->__unsafe_set(_g2,(val1 * ::kha::audio2::ogg::vorbis::VorbisTools_obj::INVERSE_DB_TABLE->__get(y)));
            			}
            		}
HXLINE( 247)		{
HXLINE( 247)			int _g3 = (x + 1);
HXDLIN( 247)			int _g12 = x1;
HXDLIN( 247)			while((_g3 < _g12)){
HXLINE( 247)				_g3 = (_g3 + 1);
HXDLIN( 247)				int i1 = (_g3 - 1);
HXLINE( 248)				err = (err + ady);
HXLINE( 249)				if ((err >= adx)) {
HXLINE( 250)					err = (err - adx);
HXLINE( 251)					y = (y + sy);
            				}
            				else {
HXLINE( 253)					y = (y + base);
            				}
HXLINE( 255)				{
HXLINE( 255)					int _g4 = i1;
HXDLIN( 255)					::Array< Float > _g13 = output;
HXDLIN( 255)					{
HXLINE( 255)						Float val2 = ( (Float)(_hx_array_unsafe_get(_g13,_g4)) );
HXDLIN( 255)						_g13->__unsafe_set(_g4,(val2 * ::kha::audio2::ogg::vorbis::VorbisTools_obj::INVERSE_DB_TABLE->__get(y)));
            					}
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(VorbisTools_obj,drawLine,(void))

int VorbisTools_obj::predictPoint(int x,int x0,int x1,int y0,int y1){
            	HX_STACKFRAME(&_hx_pos_302389da22473e91_265_predictPoint)
HXLINE( 266)		int dy = (y1 - y0);
HXLINE( 267)		int adx = (x1 - x0);
HXLINE( 269)		Float err = (::Math_obj::abs(( (Float)(dy) )) * ( (Float)((x - x0)) ));
HXLINE( 270)		int off = ::Std_obj::_hx_int((err / ( (Float)(adx) )));
HXLINE( 271)		if ((dy < 0)) {
HXLINE( 271)			return (y0 - off);
            		}
            		else {
HXLINE( 271)			return (y0 + off);
            		}
HXDLIN( 271)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(VorbisTools_obj,predictPoint,return )

::Array< Float > VorbisTools_obj::emptyFloatVector(int len){
            	HX_STACKFRAME(&_hx_pos_302389da22473e91_274_emptyFloatVector)
HXLINE( 275)		::Array< Float > this1 = ::Array_obj< Float >::__new(len);
HXDLIN( 275)		::Array< Float > vec = this1;
HXLINE( 281)		return vec;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(VorbisTools_obj,emptyFloatVector,return )

::Array< Float > VorbisTools_obj::copyVector(::Array< Float > source){
            	HX_STACKFRAME(&_hx_pos_302389da22473e91_284_copyVector)
HXLINE( 285)		::Array< Float > this1 = ::Array_obj< Float >::__new(source->length);
HXDLIN( 285)		::Array< Float > dest = this1;
HXLINE( 286)		{
HXLINE( 286)			int _g = 0;
HXDLIN( 286)			int _g1 = source->length;
HXDLIN( 286)			while((_g < _g1)){
HXLINE( 286)				_g = (_g + 1);
HXDLIN( 286)				int i = (_g - 1);
HXLINE( 287)				{
HXLINE( 287)					Float val = ( (Float)(_hx_array_unsafe_get(source,i)) );
HXDLIN( 287)					dest->__unsafe_set(i,val);
            				}
            			}
            		}
HXLINE( 289)		return dest;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(VorbisTools_obj,copyVector,return )


VorbisTools_obj::VorbisTools_obj()
{
}

bool VorbisTools_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"assert") ) { outValue = _hx_assert_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"square") ) { outValue = square_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"uintAsc") ) { outValue = uintAsc_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"drawLine") ) { outValue = drawLine_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"neighbors") ) { outValue = neighbors_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitReverse") ) { outValue = bitReverse_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"copyVector") ) { outValue = copyVector_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"floatUnpack") ) { outValue = floatUnpack_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"pointCompare") ) { outValue = pointCompare_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"predictPoint") ) { outValue = predictPoint_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"lookup1Values") ) { outValue = lookup1Values_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"computeWindow") ) { outValue = computeWindow_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"INVERSE_DB_TABLE") ) { outValue = ( INVERSE_DB_TABLE ); return true; }
		if (HX_FIELD_EQ(inName,"emptyFloatVector") ) { outValue = emptyFloatVector_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"computeBitReverse") ) { outValue = computeBitReverse_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"integerDivideTable") ) { outValue = ( integerDivideTable ); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"computeTwiddleFactors") ) { outValue = computeTwiddleFactors_dyn(); return true; }
	}
	return false;
}

bool VorbisTools_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"INVERSE_DB_TABLE") ) { INVERSE_DB_TABLE=ioValue.Cast< ::Array< Float > >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"integerDivideTable") ) { integerDivideTable=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *VorbisTools_obj_sMemberStorageInfo = 0;
static hx::StaticInfo VorbisTools_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &VorbisTools_obj::EOP,HX_("EOP",a6,a0,34,00)},
	{hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &VorbisTools_obj::integerDivideTable,HX_("integerDivideTable",b7,98,dc,01)},
	{hx::fsFloat,(void *) &VorbisTools_obj::M__PI,HX_("M__PI",e6,4b,ee,94)},
	{hx::fsInt,(void *) &VorbisTools_obj::DIVTAB_NUMER,HX_("DIVTAB_NUMER",f8,57,6a,62)},
	{hx::fsInt,(void *) &VorbisTools_obj::DIVTAB_DENOM,HX_("DIVTAB_DENOM",f0,eb,d5,95)},
	{hx::fsObject /* ::Array< Float > */ ,(void *) &VorbisTools_obj::INVERSE_DB_TABLE,HX_("INVERSE_DB_TABLE",fc,8a,40,c6)},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void VorbisTools_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VorbisTools_obj::EOP,"EOP");
	HX_MARK_MEMBER_NAME(VorbisTools_obj::integerDivideTable,"integerDivideTable");
	HX_MARK_MEMBER_NAME(VorbisTools_obj::M__PI,"M__PI");
	HX_MARK_MEMBER_NAME(VorbisTools_obj::DIVTAB_NUMER,"DIVTAB_NUMER");
	HX_MARK_MEMBER_NAME(VorbisTools_obj::DIVTAB_DENOM,"DIVTAB_DENOM");
	HX_MARK_MEMBER_NAME(VorbisTools_obj::INVERSE_DB_TABLE,"INVERSE_DB_TABLE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void VorbisTools_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VorbisTools_obj::EOP,"EOP");
	HX_VISIT_MEMBER_NAME(VorbisTools_obj::integerDivideTable,"integerDivideTable");
	HX_VISIT_MEMBER_NAME(VorbisTools_obj::M__PI,"M__PI");
	HX_VISIT_MEMBER_NAME(VorbisTools_obj::DIVTAB_NUMER,"DIVTAB_NUMER");
	HX_VISIT_MEMBER_NAME(VorbisTools_obj::DIVTAB_DENOM,"DIVTAB_DENOM");
	HX_VISIT_MEMBER_NAME(VorbisTools_obj::INVERSE_DB_TABLE,"INVERSE_DB_TABLE");
};

#endif

hx::Class VorbisTools_obj::__mClass;

static ::String VorbisTools_obj_sStaticFields[] = {
	HX_("EOP",a6,a0,34,00),
	HX_("integerDivideTable",b7,98,dc,01),
	HX_("M__PI",e6,4b,ee,94),
	HX_("DIVTAB_NUMER",f8,57,6a,62),
	HX_("DIVTAB_DENOM",f0,eb,d5,95),
	HX_("INVERSE_DB_TABLE",fc,8a,40,c6),
	HX_("assert",c6,46,03,4c),
	HX_("neighbors",41,df,79,94),
	HX_("floatUnpack",6e,34,48,0f),
	HX_("bitReverse",d5,0b,af,f4),
	HX_("pointCompare",35,b6,0c,62),
	HX_("uintAsc",b7,6f,ba,9f),
	HX_("lookup1Values",b9,33,14,17),
	HX_("computeWindow",c7,c2,02,bd),
	HX_("square",9d,00,f2,58),
	HX_("computeBitReverse",2c,f2,fa,0b),
	HX_("computeTwiddleFactors",dc,c1,7c,6c),
	HX_("drawLine",18,c2,1c,5c),
	HX_("predictPoint",77,c2,1a,b0),
	HX_("emptyFloatVector",f2,05,5d,02),
	HX_("copyVector",58,16,22,4d),
	::String(null())
};

void VorbisTools_obj::__register()
{
	VorbisTools_obj _hx_dummy;
	VorbisTools_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("kha.audio2.ogg.vorbis.VorbisTools",94,da,c1,bf);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &VorbisTools_obj::__GetStatic;
	__mClass->mSetStaticField = &VorbisTools_obj::__SetStatic;
	__mClass->mMarkFunc = VorbisTools_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(VorbisTools_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< VorbisTools_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = VorbisTools_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VorbisTools_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VorbisTools_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void VorbisTools_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_302389da22473e91_16_boot)
HXDLIN(  16)		EOP = -1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_302389da22473e91_18_boot)
HXDLIN(  18)		M__PI = ((Float)3.14159265358979323846264);
            	}
{
            	HX_STACKFRAME(&_hx_pos_302389da22473e91_20_boot)
HXDLIN(  20)		DIVTAB_NUMER = 32;
            	}
{
            	HX_STACKFRAME(&_hx_pos_302389da22473e91_21_boot)
HXDLIN(  21)		DIVTAB_DENOM = 64;
            	}
{
            	HX_STACKFRAME(&_hx_pos_302389da22473e91_23_boot)
HXDLIN(  23)		INVERSE_DB_TABLE = ::Array_obj< Float >::fromData( _hx_array_data_bfc1da94_30,256);
            	}
}

} // end namespace kha
} // end namespace audio2
} // end namespace ogg
} // end namespace vorbis
