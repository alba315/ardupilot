/*
 * UAVCAN data structure definition for libuavcan.
 *
 * Autogenerated, do not edit.
 *
 * Source file: /Users/Oskar/CARTUM/Codigo_px4/ardupilot/modules/uavcan/dsdl/uavcan/protocol/file/583.Read.uavcan
 */

#pragma once

#include <uavcan/build_config.hpp>
#include <uavcan/node/global_data_type_registry.hpp>
#include <uavcan/marshal/types.hpp>

#include <uavcan/protocol/file/Error.hpp>
#include <uavcan/protocol/file/Path.hpp>

/******************************* Source text **********************************
#
# Read contents of the file from remote node.
# Empty data in response means that the offset is out of file boundaries.
# Non-empty data means the end of file is not reached yet, even if the length is less than maximum.
# Thus, if the client needs to fetch the entire file, it should repeatedly call this service while increasing the
# offset, until the empty data is returned.
# If the object pointed by 'path' cannot be read (e.g. it is a directory or it does not exist), appropriate error code
# will be returned.
#

uint32 offset
Path path

---

Error error
uint8[<=250] data
******************************************************************************/

/********************* DSDL signature source definition ***********************
uavcan.protocol.file.Read
saturated uint32 offset
uavcan.protocol.file.Path path
---
uavcan.protocol.file.Error error
saturated uint8[<=250] data
******************************************************************************/

#undef offset
#undef path
#undef error
#undef data

#ifndef UAVCAN_PACK_STRUCTS
# error UAVCAN_PACK_STRUCTS
#endif

namespace uavcan
{
namespace protocol
{
namespace file
{

#if UAVCAN_PACK_STRUCTS
UAVCAN_PACKED_BEGIN
#endif

struct UAVCAN_EXPORT Read_
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
            typedef ::uavcan::IntegerSpec< 32, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > offset;
            typedef ::uavcan::protocol::file::Path path;
        };

        enum
        {
            MinBitLen
                = FieldTypes::offset::MinBitLen
                + FieldTypes::path::MinBitLen
        };

        enum
        {
            MaxBitLen
                = FieldTypes::offset::MaxBitLen
                + FieldTypes::path::MaxBitLen
        };

        // Constants

        // Fields
        typename ::uavcan::StorageType< typename FieldTypes::offset >::Type offset;
        typename ::uavcan::StorageType< typename FieldTypes::path >::Type path;

        Request_()
            : offset()
            , path()
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
            ::uavcan::StaticAssert<1640 == MaxBitLen>::check();
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
            typedef ::uavcan::protocol::file::Error error;
            typedef ::uavcan::Array< ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate >, ::uavcan::ArrayModeDynamic, 250 > data;
        };

        enum
        {
            MinBitLen
                = FieldTypes::error::MinBitLen
                + FieldTypes::data::MinBitLen
        };

        enum
        {
            MaxBitLen
                = FieldTypes::error::MaxBitLen
                + FieldTypes::data::MaxBitLen
        };

        // Constants

        // Fields
        typename ::uavcan::StorageType< typename FieldTypes::error >::Type error;
        typename ::uavcan::StorageType< typename FieldTypes::data >::Type data;

        Response_()
            : error()
            , data()
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
            ::uavcan::StaticAssert<2024 == MaxBitLen>::check();
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
    enum { DefaultDataTypeID = 583 };

    static const char* getDataTypeFullName()
    {
        return "uavcan.protocol.file.Read";
    }

    static void extendDataTypeSignature(::uavcan::DataTypeSignature& signature)
    {
        signature.extend(getDataTypeSignature());
    }

    static ::uavcan::DataTypeSignature getDataTypeSignature();

private:
    Read_(); // Don't create objects of this type. Use Request/Response instead.
};

#if UAVCAN_PACK_STRUCTS
UAVCAN_PACKED_END
#endif

/*
 * Out of line struct method definitions
 */

template <int _tmpl>
bool Read_::Request_<_tmpl>::operator==(ParameterType rhs) const
{
    return
        offset == rhs.offset &&
        path == rhs.path;
}

template <int _tmpl>
bool Read_::Request_<_tmpl>::isClose(ParameterType rhs) const
{
    return
        ::uavcan::areClose(offset, rhs.offset) &&
        ::uavcan::areClose(path, rhs.path);
}

template <int _tmpl>
int Read_::Request_<_tmpl>::encode(ParameterType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::offset::encode(self.offset, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::path::encode(self.path, codec,  tao_mode);
    return res;
}

template <int _tmpl>
int Read_::Request_<_tmpl>::decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::offset::decode(self.offset, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::path::decode(self.path, codec,  tao_mode);
    return res;
}

template <int _tmpl>
bool Read_::Response_<_tmpl>::operator==(ParameterType rhs) const
{
    return
        error == rhs.error &&
        data == rhs.data;
}

template <int _tmpl>
bool Read_::Response_<_tmpl>::isClose(ParameterType rhs) const
{
    return
        ::uavcan::areClose(error, rhs.error) &&
        ::uavcan::areClose(data, rhs.data);
}

template <int _tmpl>
int Read_::Response_<_tmpl>::encode(ParameterType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::error::encode(self.error, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::data::encode(self.data, codec,  tao_mode);
    return res;
}

template <int _tmpl>
int Read_::Response_<_tmpl>::decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::error::decode(self.error, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::data::decode(self.data, codec,  tao_mode);
    return res;
}

/*
 * Out of line type method definitions
 */
inline ::uavcan::DataTypeSignature Read_::getDataTypeSignature()
{
    ::uavcan::DataTypeSignature signature(0xDC051CDE458E4658ULL);

    Request::FieldTypes::offset::extendDataTypeSignature(signature);
    Request::FieldTypes::path::extendDataTypeSignature(signature);

    Response::FieldTypes::error::extendDataTypeSignature(signature);
    Response::FieldTypes::data::extendDataTypeSignature(signature);

    return signature;
}

/*
 * Out of line constant definitions
 */

/*
 * Final typedef
 */
typedef Read_ Read;

namespace
{

const ::uavcan::DefaultDataTypeRegistrator< ::uavcan::protocol::file::Read > _uavcan_gdtr_registrator_Read;

}

} // Namespace uavcan
} // Namespace protocol
} // Namespace file

/*
 * YAML streamer specialization
 */
namespace uavcan
{

template <>
class UAVCAN_EXPORT YamlStreamer< ::uavcan::protocol::file::Read::Request >
{
public:
    template <typename Stream>
    static void stream(Stream& s, ::uavcan::protocol::file::Read::Request::ParameterType obj, const int level);
};

template <typename Stream>
void YamlStreamer< ::uavcan::protocol::file::Read::Request >::stream(Stream& s, ::uavcan::protocol::file::Read::Request::ParameterType obj, const int level)
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
    s << "offset: ";
    YamlStreamer< ::uavcan::protocol::file::Read::Request::FieldTypes::offset >::stream(s, obj.offset, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "path: ";
    YamlStreamer< ::uavcan::protocol::file::Read::Request::FieldTypes::path >::stream(s, obj.path, level + 1);
}

template <>
class UAVCAN_EXPORT YamlStreamer< ::uavcan::protocol::file::Read::Response >
{
public:
    template <typename Stream>
    static void stream(Stream& s, ::uavcan::protocol::file::Read::Response::ParameterType obj, const int level);
};

template <typename Stream>
void YamlStreamer< ::uavcan::protocol::file::Read::Response >::stream(Stream& s, ::uavcan::protocol::file::Read::Response::ParameterType obj, const int level)
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
    s << "error: ";
    YamlStreamer< ::uavcan::protocol::file::Read::Response::FieldTypes::error >::stream(s, obj.error, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "data: ";
    YamlStreamer< ::uavcan::protocol::file::Read::Response::FieldTypes::data >::stream(s, obj.data, level + 1);
}

}

namespace uavcan
{
namespace protocol
{
namespace file
{

template <typename Stream>
inline Stream& operator<<(Stream& s, ::uavcan::protocol::file::Read::Request::ParameterType obj)
{
    ::uavcan::YamlStreamer< ::uavcan::protocol::file::Read::Request >::stream(s, obj, 0);
    return s;
}

template <typename Stream>
inline Stream& operator<<(Stream& s, ::uavcan::protocol::file::Read::Response::ParameterType obj)
{
    ::uavcan::YamlStreamer< ::uavcan::protocol::file::Read::Response >::stream(s, obj, 0);
    return s;
}

}
}
}