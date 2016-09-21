/*
 * UAVCAN data structure definition for libuavcan.
 *
 * Autogenerated, do not edit.
 *
 * Source file: /Users/Oskar/CARTUM/Codigo_px4/ardupilot/modules/uavcan/dsdl/uavcan/equipment/gnss/300.Fix.uavcan
 */

#pragma once

#include <uavcan/build_config.hpp>
#include <uavcan/node/global_data_type_registry.hpp>
#include <uavcan/marshal/types.hpp>

#include <uavcan/Timestamp.hpp>

/******************************* Source text **********************************
#
# GNSS navigation solution with uncertainty.
#

uavcan.Timestamp timestamp         # Global network-synchronized time, if available, otherwise zero

uavcan.Timestamp gnss_timestamp    # GNSS timestamp (UTC is preferred), if available, otherwise zero

int37 longitude_deg_1e8            # Longitude degrees multiplied by 1e8 (approx. 1 mm per LSB)
int37 latitude_deg_1e8             # Latitude degrees multiplied by 1e8 (approx. 1 mm per LSB on equator)
int27 height_ellipsoid_mm          # Height above ellipsoid in millimeters
int27 height_msl_mm                # Height above mean sea level in millimeters

float16[3] ned_velocity            # NED frame (north-east-down) in meters per second

uint6 sats_used

uint2 STATUS_NO_FIX    = 0
uint2 STATUS_TIME_ONLY = 1
uint2 STATUS_2D_FIX    = 2
uint2 STATUS_3D_FIX    = 3
uint2 status

float16 pdop

float16[<=9] position_covariance   # m^2
float16[<=9] velocity_covariance   # (m/s)^2
******************************************************************************/

/********************* DSDL signature source definition ***********************
uavcan.equipment.gnss.Fix
uavcan.Timestamp timestamp
uavcan.Timestamp gnss_timestamp
saturated int37 longitude_deg_1e8
saturated int37 latitude_deg_1e8
saturated int27 height_ellipsoid_mm
saturated int27 height_msl_mm
saturated float16[3] ned_velocity
saturated uint6 sats_used
saturated uint2 status
saturated float16 pdop
saturated float16[<=9] position_covariance
saturated float16[<=9] velocity_covariance
saturated uint2 STATUS_2D_FIX = 2
saturated uint2 STATUS_3D_FIX = 3
saturated uint2 STATUS_NO_FIX = 0
saturated uint2 STATUS_TIME_ONLY = 1
******************************************************************************/

#undef timestamp
#undef gnss_timestamp
#undef longitude_deg_1e8
#undef latitude_deg_1e8
#undef height_ellipsoid_mm
#undef height_msl_mm
#undef ned_velocity
#undef sats_used
#undef status
#undef pdop
#undef position_covariance
#undef velocity_covariance
#undef STATUS_NO_FIX
#undef STATUS_TIME_ONLY
#undef STATUS_2D_FIX
#undef STATUS_3D_FIX

#ifndef UAVCAN_PACK_STRUCTS
# error UAVCAN_PACK_STRUCTS
#endif

namespace uavcan
{
namespace equipment
{
namespace gnss
{

#if UAVCAN_PACK_STRUCTS
UAVCAN_PACKED_BEGIN
#endif

template <int _tmpl>
struct UAVCAN_EXPORT Fix_
{
    typedef const Fix_<_tmpl>& ParameterType;
    typedef Fix_<_tmpl>& ReferenceType;

    struct ConstantTypes
    {
        typedef ::uavcan::IntegerSpec< 2, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > STATUS_NO_FIX;
        typedef ::uavcan::IntegerSpec< 2, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > STATUS_TIME_ONLY;
        typedef ::uavcan::IntegerSpec< 2, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > STATUS_2D_FIX;
        typedef ::uavcan::IntegerSpec< 2, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > STATUS_3D_FIX;
    };

    struct FieldTypes
    {
        typedef ::uavcan::Timestamp timestamp;
        typedef ::uavcan::Timestamp gnss_timestamp;
        typedef ::uavcan::IntegerSpec< 37, ::uavcan::SignednessSigned, ::uavcan::CastModeSaturate > longitude_deg_1e8;
        typedef ::uavcan::IntegerSpec< 37, ::uavcan::SignednessSigned, ::uavcan::CastModeSaturate > latitude_deg_1e8;
        typedef ::uavcan::IntegerSpec< 27, ::uavcan::SignednessSigned, ::uavcan::CastModeSaturate > height_ellipsoid_mm;
        typedef ::uavcan::IntegerSpec< 27, ::uavcan::SignednessSigned, ::uavcan::CastModeSaturate > height_msl_mm;
        typedef ::uavcan::Array< ::uavcan::FloatSpec< 16, ::uavcan::CastModeSaturate >, ::uavcan::ArrayModeStatic, 3 > ned_velocity;
        typedef ::uavcan::IntegerSpec< 6, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > sats_used;
        typedef ::uavcan::IntegerSpec< 2, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > status;
        typedef ::uavcan::FloatSpec< 16, ::uavcan::CastModeSaturate > pdop;
        typedef ::uavcan::Array< ::uavcan::FloatSpec< 16, ::uavcan::CastModeSaturate >, ::uavcan::ArrayModeDynamic, 9 > position_covariance;
        typedef ::uavcan::Array< ::uavcan::FloatSpec< 16, ::uavcan::CastModeSaturate >, ::uavcan::ArrayModeDynamic, 9 > velocity_covariance;
    };

    enum
    {
        MinBitLen
            = FieldTypes::timestamp::MinBitLen
            + FieldTypes::gnss_timestamp::MinBitLen
            + FieldTypes::longitude_deg_1e8::MinBitLen
            + FieldTypes::latitude_deg_1e8::MinBitLen
            + FieldTypes::height_ellipsoid_mm::MinBitLen
            + FieldTypes::height_msl_mm::MinBitLen
            + FieldTypes::ned_velocity::MinBitLen
            + FieldTypes::sats_used::MinBitLen
            + FieldTypes::status::MinBitLen
            + FieldTypes::pdop::MinBitLen
            + FieldTypes::position_covariance::MinBitLen
            + FieldTypes::velocity_covariance::MinBitLen
    };

    enum
    {
        MaxBitLen
            = FieldTypes::timestamp::MaxBitLen
            + FieldTypes::gnss_timestamp::MaxBitLen
            + FieldTypes::longitude_deg_1e8::MaxBitLen
            + FieldTypes::latitude_deg_1e8::MaxBitLen
            + FieldTypes::height_ellipsoid_mm::MaxBitLen
            + FieldTypes::height_msl_mm::MaxBitLen
            + FieldTypes::ned_velocity::MaxBitLen
            + FieldTypes::sats_used::MaxBitLen
            + FieldTypes::status::MaxBitLen
            + FieldTypes::pdop::MaxBitLen
            + FieldTypes::position_covariance::MaxBitLen
            + FieldTypes::velocity_covariance::MaxBitLen
    };

    // Constants
    static const typename ::uavcan::StorageType< typename ConstantTypes::STATUS_NO_FIX >::Type STATUS_NO_FIX; // 0
    static const typename ::uavcan::StorageType< typename ConstantTypes::STATUS_TIME_ONLY >::Type STATUS_TIME_ONLY; // 1
    static const typename ::uavcan::StorageType< typename ConstantTypes::STATUS_2D_FIX >::Type STATUS_2D_FIX; // 2
    static const typename ::uavcan::StorageType< typename ConstantTypes::STATUS_3D_FIX >::Type STATUS_3D_FIX; // 3

    // Fields
    typename ::uavcan::StorageType< typename FieldTypes::timestamp >::Type timestamp;
    typename ::uavcan::StorageType< typename FieldTypes::gnss_timestamp >::Type gnss_timestamp;
    typename ::uavcan::StorageType< typename FieldTypes::longitude_deg_1e8 >::Type longitude_deg_1e8;
    typename ::uavcan::StorageType< typename FieldTypes::latitude_deg_1e8 >::Type latitude_deg_1e8;
    typename ::uavcan::StorageType< typename FieldTypes::height_ellipsoid_mm >::Type height_ellipsoid_mm;
    typename ::uavcan::StorageType< typename FieldTypes::height_msl_mm >::Type height_msl_mm;
    typename ::uavcan::StorageType< typename FieldTypes::ned_velocity >::Type ned_velocity;
    typename ::uavcan::StorageType< typename FieldTypes::sats_used >::Type sats_used;
    typename ::uavcan::StorageType< typename FieldTypes::status >::Type status;
    typename ::uavcan::StorageType< typename FieldTypes::pdop >::Type pdop;
    typename ::uavcan::StorageType< typename FieldTypes::position_covariance >::Type position_covariance;
    typename ::uavcan::StorageType< typename FieldTypes::velocity_covariance >::Type velocity_covariance;

    Fix_()
        : timestamp()
        , gnss_timestamp()
        , longitude_deg_1e8()
        , latitude_deg_1e8()
        , height_ellipsoid_mm()
        , height_msl_mm()
        , ned_velocity()
        , sats_used()
        , status()
        , pdop()
        , position_covariance()
        , velocity_covariance()
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
        ::uavcan::StaticAssert<592 == MaxBitLen>::check();
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
    enum { DefaultDataTypeID = 300 };

    static const char* getDataTypeFullName()
    {
        return "uavcan.equipment.gnss.Fix";
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
bool Fix_<_tmpl>::operator==(ParameterType rhs) const
{
    return
        timestamp == rhs.timestamp &&
        gnss_timestamp == rhs.gnss_timestamp &&
        longitude_deg_1e8 == rhs.longitude_deg_1e8 &&
        latitude_deg_1e8 == rhs.latitude_deg_1e8 &&
        height_ellipsoid_mm == rhs.height_ellipsoid_mm &&
        height_msl_mm == rhs.height_msl_mm &&
        ned_velocity == rhs.ned_velocity &&
        sats_used == rhs.sats_used &&
        status == rhs.status &&
        pdop == rhs.pdop &&
        position_covariance == rhs.position_covariance &&
        velocity_covariance == rhs.velocity_covariance;
}

template <int _tmpl>
bool Fix_<_tmpl>::isClose(ParameterType rhs) const
{
    return
        ::uavcan::areClose(timestamp, rhs.timestamp) &&
        ::uavcan::areClose(gnss_timestamp, rhs.gnss_timestamp) &&
        ::uavcan::areClose(longitude_deg_1e8, rhs.longitude_deg_1e8) &&
        ::uavcan::areClose(latitude_deg_1e8, rhs.latitude_deg_1e8) &&
        ::uavcan::areClose(height_ellipsoid_mm, rhs.height_ellipsoid_mm) &&
        ::uavcan::areClose(height_msl_mm, rhs.height_msl_mm) &&
        ::uavcan::areClose(ned_velocity, rhs.ned_velocity) &&
        ::uavcan::areClose(sats_used, rhs.sats_used) &&
        ::uavcan::areClose(status, rhs.status) &&
        ::uavcan::areClose(pdop, rhs.pdop) &&
        ::uavcan::areClose(position_covariance, rhs.position_covariance) &&
        ::uavcan::areClose(velocity_covariance, rhs.velocity_covariance);
}

template <int _tmpl>
int Fix_<_tmpl>::encode(ParameterType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::timestamp::encode(self.timestamp, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::gnss_timestamp::encode(self.gnss_timestamp, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::longitude_deg_1e8::encode(self.longitude_deg_1e8, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::latitude_deg_1e8::encode(self.latitude_deg_1e8, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::height_ellipsoid_mm::encode(self.height_ellipsoid_mm, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::height_msl_mm::encode(self.height_msl_mm, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::ned_velocity::encode(self.ned_velocity, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::sats_used::encode(self.sats_used, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::status::encode(self.status, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::pdop::encode(self.pdop, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::position_covariance::encode(self.position_covariance, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::velocity_covariance::encode(self.velocity_covariance, codec,  tao_mode);
    return res;
}

template <int _tmpl>
int Fix_<_tmpl>::decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::timestamp::decode(self.timestamp, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::gnss_timestamp::decode(self.gnss_timestamp, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::longitude_deg_1e8::decode(self.longitude_deg_1e8, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::latitude_deg_1e8::decode(self.latitude_deg_1e8, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::height_ellipsoid_mm::decode(self.height_ellipsoid_mm, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::height_msl_mm::decode(self.height_msl_mm, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::ned_velocity::decode(self.ned_velocity, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::sats_used::decode(self.sats_used, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::status::decode(self.status, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::pdop::decode(self.pdop, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::position_covariance::decode(self.position_covariance, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::velocity_covariance::decode(self.velocity_covariance, codec,  tao_mode);
    return res;
}

/*
 * Out of line type method definitions
 */
template <int _tmpl>
::uavcan::DataTypeSignature Fix_<_tmpl>::getDataTypeSignature()
{
    ::uavcan::DataTypeSignature signature(0xBBF35CF3E55321D1ULL);

    FieldTypes::timestamp::extendDataTypeSignature(signature);
    FieldTypes::gnss_timestamp::extendDataTypeSignature(signature);
    FieldTypes::longitude_deg_1e8::extendDataTypeSignature(signature);
    FieldTypes::latitude_deg_1e8::extendDataTypeSignature(signature);
    FieldTypes::height_ellipsoid_mm::extendDataTypeSignature(signature);
    FieldTypes::height_msl_mm::extendDataTypeSignature(signature);
    FieldTypes::ned_velocity::extendDataTypeSignature(signature);
    FieldTypes::sats_used::extendDataTypeSignature(signature);
    FieldTypes::status::extendDataTypeSignature(signature);
    FieldTypes::pdop::extendDataTypeSignature(signature);
    FieldTypes::position_covariance::extendDataTypeSignature(signature);
    FieldTypes::velocity_covariance::extendDataTypeSignature(signature);

    return signature;
}

/*
 * Out of line constant definitions
 */

template <int _tmpl>
const typename ::uavcan::StorageType< typename Fix_<_tmpl>::ConstantTypes::STATUS_NO_FIX >::Type
    Fix_<_tmpl>::STATUS_NO_FIX = 0U; // 0

template <int _tmpl>
const typename ::uavcan::StorageType< typename Fix_<_tmpl>::ConstantTypes::STATUS_TIME_ONLY >::Type
    Fix_<_tmpl>::STATUS_TIME_ONLY = 1U; // 1

template <int _tmpl>
const typename ::uavcan::StorageType< typename Fix_<_tmpl>::ConstantTypes::STATUS_2D_FIX >::Type
    Fix_<_tmpl>::STATUS_2D_FIX = 2U; // 2

template <int _tmpl>
const typename ::uavcan::StorageType< typename Fix_<_tmpl>::ConstantTypes::STATUS_3D_FIX >::Type
    Fix_<_tmpl>::STATUS_3D_FIX = 3U; // 3

/*
 * Final typedef
 */
typedef Fix_<0> Fix;

namespace
{

const ::uavcan::DefaultDataTypeRegistrator< ::uavcan::equipment::gnss::Fix > _uavcan_gdtr_registrator_Fix;

}

} // Namespace uavcan
} // Namespace equipment
} // Namespace gnss

/*
 * YAML streamer specialization
 */
namespace uavcan
{

template <>
class UAVCAN_EXPORT YamlStreamer< ::uavcan::equipment::gnss::Fix >
{
public:
    template <typename Stream>
    static void stream(Stream& s, ::uavcan::equipment::gnss::Fix::ParameterType obj, const int level);
};

template <typename Stream>
void YamlStreamer< ::uavcan::equipment::gnss::Fix >::stream(Stream& s, ::uavcan::equipment::gnss::Fix::ParameterType obj, const int level)
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
    s << "timestamp: ";
    YamlStreamer< ::uavcan::equipment::gnss::Fix::FieldTypes::timestamp >::stream(s, obj.timestamp, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "gnss_timestamp: ";
    YamlStreamer< ::uavcan::equipment::gnss::Fix::FieldTypes::gnss_timestamp >::stream(s, obj.gnss_timestamp, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "longitude_deg_1e8: ";
    YamlStreamer< ::uavcan::equipment::gnss::Fix::FieldTypes::longitude_deg_1e8 >::stream(s, obj.longitude_deg_1e8, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "latitude_deg_1e8: ";
    YamlStreamer< ::uavcan::equipment::gnss::Fix::FieldTypes::latitude_deg_1e8 >::stream(s, obj.latitude_deg_1e8, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "height_ellipsoid_mm: ";
    YamlStreamer< ::uavcan::equipment::gnss::Fix::FieldTypes::height_ellipsoid_mm >::stream(s, obj.height_ellipsoid_mm, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "height_msl_mm: ";
    YamlStreamer< ::uavcan::equipment::gnss::Fix::FieldTypes::height_msl_mm >::stream(s, obj.height_msl_mm, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "ned_velocity: ";
    YamlStreamer< ::uavcan::equipment::gnss::Fix::FieldTypes::ned_velocity >::stream(s, obj.ned_velocity, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "sats_used: ";
    YamlStreamer< ::uavcan::equipment::gnss::Fix::FieldTypes::sats_used >::stream(s, obj.sats_used, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "status: ";
    YamlStreamer< ::uavcan::equipment::gnss::Fix::FieldTypes::status >::stream(s, obj.status, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "pdop: ";
    YamlStreamer< ::uavcan::equipment::gnss::Fix::FieldTypes::pdop >::stream(s, obj.pdop, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "position_covariance: ";
    YamlStreamer< ::uavcan::equipment::gnss::Fix::FieldTypes::position_covariance >::stream(s, obj.position_covariance, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "velocity_covariance: ";
    YamlStreamer< ::uavcan::equipment::gnss::Fix::FieldTypes::velocity_covariance >::stream(s, obj.velocity_covariance, level + 1);
}

}

namespace uavcan
{
namespace equipment
{
namespace gnss
{

template <typename Stream>
inline Stream& operator<<(Stream& s, ::uavcan::equipment::gnss::Fix::ParameterType obj)
{
    ::uavcan::YamlStreamer< ::uavcan::equipment::gnss::Fix >::stream(s, obj, 0);
    return s;
}

}
}
}