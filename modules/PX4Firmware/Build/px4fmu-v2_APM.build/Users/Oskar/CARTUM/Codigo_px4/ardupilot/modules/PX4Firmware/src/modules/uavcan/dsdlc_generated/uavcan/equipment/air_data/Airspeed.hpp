/*
 * UAVCAN data structure definition for libuavcan.
 *
 * Autogenerated, do not edit.
 *
 * Source file: /Users/Oskar/CARTUM/Codigo_px4/ardupilot/modules/uavcan/dsdl/uavcan/equipment/air_data/280.Airspeed.uavcan
 */

#pragma once

#include <uavcan/build_config.hpp>
#include <uavcan/node/global_data_type_registry.hpp>
#include <uavcan/marshal/types.hpp>

/******************************* Source text **********************************
#
# True airspeed in meters per second.
#

float16 true_airspeed
float16 true_airspeed_variance
******************************************************************************/

/********************* DSDL signature source definition ***********************
uavcan.equipment.air_data.Airspeed
saturated float16 true_airspeed
saturated float16 true_airspeed_variance
******************************************************************************/

#undef true_airspeed
#undef true_airspeed_variance

#ifndef UAVCAN_PACK_STRUCTS
# error UAVCAN_PACK_STRUCTS
#endif

namespace uavcan
{
namespace equipment
{
namespace air_data
{

#if UAVCAN_PACK_STRUCTS
UAVCAN_PACKED_BEGIN
#endif

template <int _tmpl>
struct UAVCAN_EXPORT Airspeed_
{
    typedef const Airspeed_<_tmpl>& ParameterType;
    typedef Airspeed_<_tmpl>& ReferenceType;

    struct ConstantTypes
    {
    };

    struct FieldTypes
    {
        typedef ::uavcan::FloatSpec< 16, ::uavcan::CastModeSaturate > true_airspeed;
        typedef ::uavcan::FloatSpec< 16, ::uavcan::CastModeSaturate > true_airspeed_variance;
    };

    enum
    {
        MinBitLen
            = FieldTypes::true_airspeed::MinBitLen
            + FieldTypes::true_airspeed_variance::MinBitLen
    };

    enum
    {
        MaxBitLen
            = FieldTypes::true_airspeed::MaxBitLen
            + FieldTypes::true_airspeed_variance::MaxBitLen
    };

    // Constants

    // Fields
    typename ::uavcan::StorageType< typename FieldTypes::true_airspeed >::Type true_airspeed;
    typename ::uavcan::StorageType< typename FieldTypes::true_airspeed_variance >::Type true_airspeed_variance;

    Airspeed_()
        : true_airspeed()
        , true_airspeed_variance()
    {
        enum { MaxByteLen = ::uavcan::BitLenToByteLen<MaxBitLen>::Result };
        ::uavcan::StaticAssert<int(MaxByteLen) <= int(::uavcan::MaxTransferPayloadLen)>::check();

        ::uavcan::StaticAssert<_tmpl == 0>::check();  // Usage check

#if UAVCAN_DEBUG
        /*
         * Cross-checking MaxBitLen provided by the DSDL compiler.
         * This check shall never be performed in user code because MaxBitLen value
         * actually depends on the nested types, thus it is not invariant.
         */
        ::uavcan::StaticAssert<32 == MaxBitLen>::check();
#endif
    }

    bool operator==(ParameterType rhs) const;
    bool operator!=(ParameterType rhs) const { return !operator==(rhs); }

    /**
     * This comparison is based on @ref uavcan::areClose(), which ensures proper comparison of
     * floating point fields at any depth.
     */
    bool isClose(ParameterType rhs) const;

    static int encode(ParameterType self, ::uavcan::ScalarCodec& codec,
                      ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);

    static int decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
                      ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);

    /*
     * Static type info
     */
    enum { DataTypeKind = ::uavcan::DataTypeKindMessage };
    enum { DefaultDataTypeID = 280 };

    static const char* getDataTypeFullName()
    {
        return "uavcan.equipment.air_data.Airspeed";
    }

    static void extendDataTypeSignature(::uavcan::DataTypeSignature& signature)
    {
        signature.extend(getDataTypeSignature());
    }

    static ::uavcan::DataTypeSignature getDataTypeSignature();

};

#if UAVCAN_PACK_STRUCTS
UAVCAN_PACKED_END
#endif

/*
 * Out of line struct method definitions
 */

template <int _tmpl>
bool Airspeed_<_tmpl>::operator==(ParameterType rhs) const
{
    return
        true_airspeed == rhs.true_airspeed &&
        true_airspeed_variance == rhs.true_airspeed_variance;
}

template <int _tmpl>
bool Airspeed_<_tmpl>::isClose(ParameterType rhs) const
{
    return
        ::uavcan::areClose(true_airspeed, rhs.true_airspeed) &&
        ::uavcan::areClose(true_airspeed_variance, rhs.true_airspeed_variance);
}

template <int _tmpl>
int Airspeed_<_tmpl>::encode(ParameterType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::true_airspeed::encode(self.true_airspeed, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::true_airspeed_variance::encode(self.true_airspeed_variance, codec,  tao_mode);
    return res;
}

template <int _tmpl>
int Airspeed_<_tmpl>::decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::true_airspeed::decode(self.true_airspeed, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::true_airspeed_variance::decode(self.true_airspeed_variance, codec,  tao_mode);
    return res;
}

/*
 * Out of line type method definitions
 */
template <int _tmpl>
::uavcan::DataTypeSignature Airspeed_<_tmpl>::getDataTypeSignature()
{
    ::uavcan::DataTypeSignature signature(0xEB994672631B87D9ULL);

    FieldTypes::true_airspeed::extendDataTypeSignature(signature);
    FieldTypes::true_airspeed_variance::extendDataTypeSignature(signature);

    return signature;
}

/*
 * Out of line constant definitions
 */

/*
 * Final typedef
 */
typedef Airspeed_<0> Airspeed;

namespace
{

const ::uavcan::DefaultDataTypeRegistrator< ::uavcan::equipment::air_data::Airspeed > _uavcan_gdtr_registrator_Airspeed;

}

} // Namespace uavcan
} // Namespace equipment
} // Namespace air_data

/*
 * YAML streamer specialization
 */
namespace uavcan
{

template <>
class UAVCAN_EXPORT YamlStreamer< ::uavcan::equipment::air_data::Airspeed >
{
public:
    template <typename Stream>
    static void stream(Stream& s, ::uavcan::equipment::air_data::Airspeed::ParameterType obj, const int level);
};

template <typename Stream>
void YamlStreamer< ::uavcan::equipment::air_data::Airspeed >::stream(Stream& s, ::uavcan::equipment::air_data::Airspeed::ParameterType obj, const int level)
{
    (void)s;
    (void)obj;
    (void)level;
    if (level > 0)
    {
        s << '\n';
        for (int pos = 0; pos < level; pos++)
        {
            s << "  ";
        }
    }
    s << "true_airspeed: ";
    YamlStreamer< ::uavcan::equipment::air_data::Airspeed::FieldTypes::true_airspeed >::stream(s, obj.true_airspeed, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "true_airspeed_variance: ";
    YamlStreamer< ::uavcan::equipment::air_data::Airspeed::FieldTypes::true_airspeed_variance >::stream(s, obj.true_airspeed_variance, level + 1);
}

}

namespace uavcan
{
namespace equipment
{
namespace air_data
{

template <typename Stream>
inline Stream& operator<<(Stream& s, ::uavcan::equipment::air_data::Airspeed::ParameterType obj)
{
    ::uavcan::YamlStreamer< ::uavcan::equipment::air_data::Airspeed >::stream(s, obj, 0);
    return s;
}

}
}
}