/*
 * UAVCAN data structure definition for libuavcan.
 *
 * Autogenerated, do not edit.
 *
 * Source file: /Users/Oskar/CARTUM/Codigo_px4/ardupilot/modules/uavcan/dsdl/uavcan/equipment/ahrs/257.Magnetometer.uavcan
 */

#pragma once

#include <uavcan/build_config.hpp>
#include <uavcan/node/global_data_type_registry.hpp>
#include <uavcan/marshal/types.hpp>

/******************************* Source text **********************************
#
# Magnetic field readings in body frame.
#

float16[3] magnetic_field
float16[<=9] magnetic_field_covariance
******************************************************************************/

/********************* DSDL signature source definition ***********************
uavcan.equipment.ahrs.Magnetometer
saturated float16[3] magnetic_field
saturated float16[<=9] magnetic_field_covariance
******************************************************************************/

#undef magnetic_field
#undef magnetic_field_covariance

#ifndef UAVCAN_PACK_STRUCTS
# error UAVCAN_PACK_STRUCTS
#endif

namespace uavcan
{
namespace equipment
{
namespace ahrs
{

#if UAVCAN_PACK_STRUCTS
UAVCAN_PACKED_BEGIN
#endif

template <int _tmpl>
struct UAVCAN_EXPORT Magnetometer_
{
    typedef const Magnetometer_<_tmpl>& ParameterType;
    typedef Magnetometer_<_tmpl>& ReferenceType;

    struct ConstantTypes
    {
    };

    struct FieldTypes
    {
        typedef ::uavcan::Array< ::uavcan::FloatSpec< 16, ::uavcan::CastModeSaturate >, ::uavcan::ArrayModeStatic, 3 > magnetic_field;
        typedef ::uavcan::Array< ::uavcan::FloatSpec< 16, ::uavcan::CastModeSaturate >, ::uavcan::ArrayModeDynamic, 9 > magnetic_field_covariance;
    };

    enum
    {
        MinBitLen
            = FieldTypes::magnetic_field::MinBitLen
            + FieldTypes::magnetic_field_covariance::MinBitLen
    };

    enum
    {
        MaxBitLen
            = FieldTypes::magnetic_field::MaxBitLen
            + FieldTypes::magnetic_field_covariance::MaxBitLen
    };

    // Constants

    // Fields
    typename ::uavcan::StorageType< typename FieldTypes::magnetic_field >::Type magnetic_field;
    typename ::uavcan::StorageType< typename FieldTypes::magnetic_field_covariance >::Type magnetic_field_covariance;

    Magnetometer_()
        : magnetic_field()
        , magnetic_field_covariance()
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
        ::uavcan::StaticAssert<196 == MaxBitLen>::check();
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
    enum { DefaultDataTypeID = 257 };

    static const char* getDataTypeFullName()
    {
        return "uavcan.equipment.ahrs.Magnetometer";
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
bool Magnetometer_<_tmpl>::operator==(ParameterType rhs) const
{
    return
        magnetic_field == rhs.magnetic_field &&
        magnetic_field_covariance == rhs.magnetic_field_covariance;
}

template <int _tmpl>
bool Magnetometer_<_tmpl>::isClose(ParameterType rhs) const
{
    return
        ::uavcan::areClose(magnetic_field, rhs.magnetic_field) &&
        ::uavcan::areClose(magnetic_field_covariance, rhs.magnetic_field_covariance);
}

template <int _tmpl>
int Magnetometer_<_tmpl>::encode(ParameterType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::magnetic_field::encode(self.magnetic_field, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::magnetic_field_covariance::encode(self.magnetic_field_covariance, codec,  tao_mode);
    return res;
}

template <int _tmpl>
int Magnetometer_<_tmpl>::decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::magnetic_field::decode(self.magnetic_field, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::magnetic_field_covariance::decode(self.magnetic_field_covariance, codec,  tao_mode);
    return res;
}

/*
 * Out of line type method definitions
 */
template <int _tmpl>
::uavcan::DataTypeSignature Magnetometer_<_tmpl>::getDataTypeSignature()
{
    ::uavcan::DataTypeSignature signature(0x5B3A358C175E80B9ULL);

    FieldTypes::magnetic_field::extendDataTypeSignature(signature);
    FieldTypes::magnetic_field_covariance::extendDataTypeSignature(signature);

    return signature;
}

/*
 * Out of line constant definitions
 */

/*
 * Final typedef
 */
typedef Magnetometer_<0> Magnetometer;

namespace
{

const ::uavcan::DefaultDataTypeRegistrator< ::uavcan::equipment::ahrs::Magnetometer > _uavcan_gdtr_registrator_Magnetometer;

}

} // Namespace uavcan
} // Namespace equipment
} // Namespace ahrs

/*
 * YAML streamer specialization
 */
namespace uavcan
{

template <>
class UAVCAN_EXPORT YamlStreamer< ::uavcan::equipment::ahrs::Magnetometer >
{
public:
    template <typename Stream>
    static void stream(Stream& s, ::uavcan::equipment::ahrs::Magnetometer::ParameterType obj, const int level);
};

template <typename Stream>
void YamlStreamer< ::uavcan::equipment::ahrs::Magnetometer >::stream(Stream& s, ::uavcan::equipment::ahrs::Magnetometer::ParameterType obj, const int level)
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
    s << "magnetic_field: ";
    YamlStreamer< ::uavcan::equipment::ahrs::Magnetometer::FieldTypes::magnetic_field >::stream(s, obj.magnetic_field, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "magnetic_field_covariance: ";
    YamlStreamer< ::uavcan::equipment::ahrs::Magnetometer::FieldTypes::magnetic_field_covariance >::stream(s, obj.magnetic_field_covariance, level + 1);
}

}

namespace uavcan
{
namespace equipment
{
namespace ahrs
{

template <typename Stream>
inline Stream& operator<<(Stream& s, ::uavcan::equipment::ahrs::Magnetometer::ParameterType obj)
{
    ::uavcan::YamlStreamer< ::uavcan::equipment::ahrs::Magnetometer >::stream(s, obj, 0);
    return s;
}

}
}
}