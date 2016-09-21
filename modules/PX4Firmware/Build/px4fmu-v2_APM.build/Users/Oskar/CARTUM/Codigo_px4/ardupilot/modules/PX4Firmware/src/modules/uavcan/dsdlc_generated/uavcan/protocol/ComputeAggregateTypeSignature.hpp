/*
 * UAVCAN data structure definition for libuavcan.
 *
 * Autogenerated, do not edit.
 *
 * Source file: /Users/Oskar/CARTUM/Codigo_px4/ardupilot/modules/uavcan/dsdl/uavcan/protocol/554.ComputeAggregateTypeSignature.uavcan
 */

#pragma once

#include <uavcan/build_config.hpp>
#include <uavcan/node/global_data_type_registry.hpp>
#include <uavcan/marshal/types.hpp>

#include <uavcan/protocol/DataTypeKind.hpp>

/******************************* Source text **********************************
#
# This service allows to detect type compatibility between two nodes in one request.
#

bool[1024] known_ids
DataTypeKind kind

---

bool[1024] mutually_known_ids
uint64 aggregate_signature
******************************************************************************/

/********************* DSDL signature source definition ***********************
uavcan.protocol.ComputeAggregateTypeSignature
saturated bool[1024] known_ids
uavcan.protocol.DataTypeKind kind
---
saturated bool[1024] mutually_known_ids
saturated uint64 aggregate_signature
******************************************************************************/

#undef known_ids
#undef kind
#undef mutually_known_ids
#undef aggregate_signature

#ifndef UAVCAN_PACK_STRUCTS
# error UAVCAN_PACK_STRUCTS
#endif

namespace uavcan
{
namespace protocol
{

#if UAVCAN_PACK_STRUCTS
UAVCAN_PACKED_BEGIN
#endif

struct UAVCAN_EXPORT ComputeAggregateTypeSignature_
{
    template <int _tmpl>
    struct Request_
    {
        typedef const Request_<_tmpl>& ParameterType;
        typedef Request_<_tmpl>& ReferenceType;

        struct ConstantTypes
        {
        };

        struct FieldTypes
        {
            typedef ::uavcan::Array< ::uavcan::IntegerSpec< 1, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate >, ::uavcan::ArrayModeStatic, 1024 > known_ids;
            typedef ::uavcan::protocol::DataTypeKind kind;
        };

        enum
        {
            MinBitLen
                = FieldTypes::known_ids::MinBitLen
                + FieldTypes::kind::MinBitLen
        };

        enum
        {
            MaxBitLen
                = FieldTypes::known_ids::MaxBitLen
                + FieldTypes::kind::MaxBitLen
        };

        // Constants

        // Fields
        typename ::uavcan::StorageType< typename FieldTypes::known_ids >::Type known_ids;
        typename ::uavcan::StorageType< typename FieldTypes::kind >::Type kind;

        Request_()
            : known_ids()
            , kind()
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
            ::uavcan::StaticAssert<1026 == MaxBitLen>::check();
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
    };

    template <int _tmpl>
    struct Response_
    {
        typedef const Response_<_tmpl>& ParameterType;
        typedef Response_<_tmpl>& ReferenceType;

        struct ConstantTypes
        {
        };

        struct FieldTypes
        {
            typedef ::uavcan::Array< ::uavcan::IntegerSpec< 1, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate >, ::uavcan::ArrayModeStatic, 1024 > mutually_known_ids;
            typedef ::uavcan::IntegerSpec< 64, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > aggregate_signature;
        };

        enum
        {
            MinBitLen
                = FieldTypes::mutually_known_ids::MinBitLen
                + FieldTypes::aggregate_signature::MinBitLen
        };

        enum
        {
            MaxBitLen
                = FieldTypes::mutually_known_ids::MaxBitLen
                + FieldTypes::aggregate_signature::MaxBitLen
        };

        // Constants

        // Fields
        typename ::uavcan::StorageType< typename FieldTypes::mutually_known_ids >::Type mutually_known_ids;
        typename ::uavcan::StorageType< typename FieldTypes::aggregate_signature >::Type aggregate_signature;

        Response_()
            : mutually_known_ids()
            , aggregate_signature()
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
            ::uavcan::StaticAssert<1088 == MaxBitLen>::check();
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
    };

    typedef Request_<0> Request;
    typedef Response_<0> Response;

    /*
     * Static type info
     */
    enum { DataTypeKind = ::uavcan::DataTypeKindService };
    enum { DefaultDataTypeID = 554 };

    static const char* getDataTypeFullName()
    {
        return "uavcan.protocol.ComputeAggregateTypeSignature";
    }

    static void extendDataTypeSignature(::uavcan::DataTypeSignature& signature)
    {
        signature.extend(getDataTypeSignature());
    }

    static ::uavcan::DataTypeSignature getDataTypeSignature();

private:
    ComputeAggregateTypeSignature_(); // Don't create objects of this type. Use Request/Response instead.
};

#if UAVCAN_PACK_STRUCTS
UAVCAN_PACKED_END
#endif

/*
 * Out of line struct method definitions
 */

template <int _tmpl>
bool ComputeAggregateTypeSignature_::Request_<_tmpl>::operator==(ParameterType rhs) const
{
    return
        known_ids == rhs.known_ids &&
        kind == rhs.kind;
}

template <int _tmpl>
bool ComputeAggregateTypeSignature_::Request_<_tmpl>::isClose(ParameterType rhs) const
{
    return
        ::uavcan::areClose(known_ids, rhs.known_ids) &&
        ::uavcan::areClose(kind, rhs.kind);
}

template <int _tmpl>
int ComputeAggregateTypeSignature_::Request_<_tmpl>::encode(ParameterType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::known_ids::encode(self.known_ids, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::kind::encode(self.kind, codec,  tao_mode);
    return res;
}

template <int _tmpl>
int ComputeAggregateTypeSignature_::Request_<_tmpl>::decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::known_ids::decode(self.known_ids, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::kind::decode(self.kind, codec,  tao_mode);
    return res;
}

template <int _tmpl>
bool ComputeAggregateTypeSignature_::Response_<_tmpl>::operator==(ParameterType rhs) const
{
    return
        mutually_known_ids == rhs.mutually_known_ids &&
        aggregate_signature == rhs.aggregate_signature;
}

template <int _tmpl>
bool ComputeAggregateTypeSignature_::Response_<_tmpl>::isClose(ParameterType rhs) const
{
    return
        ::uavcan::areClose(mutually_known_ids, rhs.mutually_known_ids) &&
        ::uavcan::areClose(aggregate_signature, rhs.aggregate_signature);
}

template <int _tmpl>
int ComputeAggregateTypeSignature_::Response_<_tmpl>::encode(ParameterType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::mutually_known_ids::encode(self.mutually_known_ids, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::aggregate_signature::encode(self.aggregate_signature, codec,  tao_mode);
    return res;
}

template <int _tmpl>
int ComputeAggregateTypeSignature_::Response_<_tmpl>::decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::mutually_known_ids::decode(self.mutually_known_ids, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::aggregate_signature::decode(self.aggregate_signature, codec,  tao_mode);
    return res;
}

/*
 * Out of line type method definitions
 */
inline ::uavcan::DataTypeSignature ComputeAggregateTypeSignature_::getDataTypeSignature()
{
    ::uavcan::DataTypeSignature signature(0xD211725D857FE310ULL);

    Request::FieldTypes::known_ids::extendDataTypeSignature(signature);
    Request::FieldTypes::kind::extendDataTypeSignature(signature);

    Response::FieldTypes::mutually_known_ids::extendDataTypeSignature(signature);
    Response::FieldTypes::aggregate_signature::extendDataTypeSignature(signature);

    return signature;
}

/*
 * Out of line constant definitions
 */

/*
 * Final typedef
 */
typedef ComputeAggregateTypeSignature_ ComputeAggregateTypeSignature;

namespace
{

const ::uavcan::DefaultDataTypeRegistrator< ::uavcan::protocol::ComputeAggregateTypeSignature > _uavcan_gdtr_registrator_ComputeAggregateTypeSignature;

}

} // Namespace uavcan
} // Namespace protocol

/*
 * YAML streamer specialization
 */
namespace uavcan
{

template <>
class UAVCAN_EXPORT YamlStreamer< ::uavcan::protocol::ComputeAggregateTypeSignature::Request >
{
public:
    template <typename Stream>
    static void stream(Stream& s, ::uavcan::protocol::ComputeAggregateTypeSignature::Request::ParameterType obj, const int level);
};

template <typename Stream>
void YamlStreamer< ::uavcan::protocol::ComputeAggregateTypeSignature::Request >::stream(Stream& s, ::uavcan::protocol::ComputeAggregateTypeSignature::Request::ParameterType obj, const int level)
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
    s << "known_ids: ";
    YamlStreamer< ::uavcan::protocol::ComputeAggregateTypeSignature::Request::FieldTypes::known_ids >::stream(s, obj.known_ids, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "kind: ";
    YamlStreamer< ::uavcan::protocol::ComputeAggregateTypeSignature::Request::FieldTypes::kind >::stream(s, obj.kind, level + 1);
}

template <>
class UAVCAN_EXPORT YamlStreamer< ::uavcan::protocol::ComputeAggregateTypeSignature::Response >
{
public:
    template <typename Stream>
    static void stream(Stream& s, ::uavcan::protocol::ComputeAggregateTypeSignature::Response::ParameterType obj, const int level);
};

template <typename Stream>
void YamlStreamer< ::uavcan::protocol::ComputeAggregateTypeSignature::Response >::stream(Stream& s, ::uavcan::protocol::ComputeAggregateTypeSignature::Response::ParameterType obj, const int level)
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
    s << "mutually_known_ids: ";
    YamlStreamer< ::uavcan::protocol::ComputeAggregateTypeSignature::Response::FieldTypes::mutually_known_ids >::stream(s, obj.mutually_known_ids, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "aggregate_signature: ";
    YamlStreamer< ::uavcan::protocol::ComputeAggregateTypeSignature::Response::FieldTypes::aggregate_signature >::stream(s, obj.aggregate_signature, level + 1);
}

}

namespace uavcan
{
namespace protocol
{

template <typename Stream>
inline Stream& operator<<(Stream& s, ::uavcan::protocol::ComputeAggregateTypeSignature::Request::ParameterType obj)
{
    ::uavcan::YamlStreamer< ::uavcan::protocol::ComputeAggregateTypeSignature::Request >::stream(s, obj, 0);
    return s;
}

template <typename Stream>
inline Stream& operator<<(Stream& s, ::uavcan::protocol::ComputeAggregateTypeSignature::Response::ParameterType obj)
{
    ::uavcan::YamlStreamer< ::uavcan::protocol::ComputeAggregateTypeSignature::Response >::stream(s, obj, 0);
    return s;
}

}
}