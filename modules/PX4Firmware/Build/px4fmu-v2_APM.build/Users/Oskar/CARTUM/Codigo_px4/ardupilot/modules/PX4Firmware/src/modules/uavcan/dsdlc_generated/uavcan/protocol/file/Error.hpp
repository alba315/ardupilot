/*
 * UAVCAN data structure definition for libuavcan.
 *
 * Autogenerated, do not edit.
 *
 * Source file: /Users/Oskar/CARTUM/Codigo_px4/ardupilot/modules/uavcan/dsdl/uavcan/protocol/file/Error.uavcan
 */

#pragma once

#include <uavcan/build_config.hpp>
#include <uavcan/node/global_data_type_registry.hpp>
#include <uavcan/marshal/types.hpp>

/******************************* Source text **********************************
#
# Nested type.
# File operation result code.
#

int16 OK             = 0
int16 UNKNOWN_ERROR  = 32767

# These error codes match some standard UNIX errno values
int16 NOT_FOUND      = 2
int16 IO_ERROR       = 5
int16 ACCESS_DENIED  = 13
int16 IS_DIRECTORY   = 21 # I.e. attempt to read/write on a path that points to a directory
int16 INVALID_VALUE  = 22 # E.g. file name is not valid for the target file system
int16 FILE_TOO_LARGE = 27
int16 OUT_OF_SPACE   = 28

int16 value
******************************************************************************/

/********************* DSDL signature source definition ***********************
uavcan.protocol.file.Error
saturated int16 value
saturated int16 ACCESS_DENIED = 13
saturated int16 FILE_TOO_LARGE = 27
saturated int16 INVALID_VALUE = 22
saturated int16 IO_ERROR = 5
saturated int16 IS_DIRECTORY = 21
saturated int16 NOT_FOUND = 2
saturated int16 OK = 0
saturated int16 OUT_OF_SPACE = 28
saturated int16 UNKNOWN_ERROR = 32767
******************************************************************************/

#undef value
#undef OK
#undef UNKNOWN_ERROR
#undef NOT_FOUND
#undef IO_ERROR
#undef ACCESS_DENIED
#undef IS_DIRECTORY
#undef INVALID_VALUE
#undef FILE_TOO_LARGE
#undef OUT_OF_SPACE

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

template <int _tmpl>
struct UAVCAN_EXPORT Error_
{
    typedef const Error_<_tmpl>& ParameterType;
    typedef Error_<_tmpl>& ReferenceType;

    struct ConstantTypes
    {
        typedef ::uavcan::IntegerSpec< 16, ::uavcan::SignednessSigned, ::uavcan::CastModeSaturate > OK;
        typedef ::uavcan::IntegerSpec< 16, ::uavcan::SignednessSigned, ::uavcan::CastModeSaturate > UNKNOWN_ERROR;
        typedef ::uavcan::IntegerSpec< 16, ::uavcan::SignednessSigned, ::uavcan::CastModeSaturate > NOT_FOUND;
        typedef ::uavcan::IntegerSpec< 16, ::uavcan::SignednessSigned, ::uavcan::CastModeSaturate > IO_ERROR;
        typedef ::uavcan::IntegerSpec< 16, ::uavcan::SignednessSigned, ::uavcan::CastModeSaturate > ACCESS_DENIED;
        typedef ::uavcan::IntegerSpec< 16, ::uavcan::SignednessSigned, ::uavcan::CastModeSaturate > IS_DIRECTORY;
        typedef ::uavcan::IntegerSpec< 16, ::uavcan::SignednessSigned, ::uavcan::CastModeSaturate > INVALID_VALUE;
        typedef ::uavcan::IntegerSpec< 16, ::uavcan::SignednessSigned, ::uavcan::CastModeSaturate > FILE_TOO_LARGE;
        typedef ::uavcan::IntegerSpec< 16, ::uavcan::SignednessSigned, ::uavcan::CastModeSaturate > OUT_OF_SPACE;
    };

    struct FieldTypes
    {
        typedef ::uavcan::IntegerSpec< 16, ::uavcan::SignednessSigned, ::uavcan::CastModeSaturate > value;
    };

    enum
    {
        MinBitLen
            = FieldTypes::value::MinBitLen
    };

    enum
    {
        MaxBitLen
            = FieldTypes::value::MaxBitLen
    };

    // Constants
    static const typename ::uavcan::StorageType< typename ConstantTypes::OK >::Type OK; // 0
    static const typename ::uavcan::StorageType< typename ConstantTypes::UNKNOWN_ERROR >::Type UNKNOWN_ERROR; // 32767
    static const typename ::uavcan::StorageType< typename ConstantTypes::NOT_FOUND >::Type NOT_FOUND; // 2
    static const typename ::uavcan::StorageType< typename ConstantTypes::IO_ERROR >::Type IO_ERROR; // 5
    static const typename ::uavcan::StorageType< typename ConstantTypes::ACCESS_DENIED >::Type ACCESS_DENIED; // 13
    static const typename ::uavcan::StorageType< typename ConstantTypes::IS_DIRECTORY >::Type IS_DIRECTORY; // 21
    static const typename ::uavcan::StorageType< typename ConstantTypes::INVALID_VALUE >::Type INVALID_VALUE; // 22
    static const typename ::uavcan::StorageType< typename ConstantTypes::FILE_TOO_LARGE >::Type FILE_TOO_LARGE; // 27
    static const typename ::uavcan::StorageType< typename ConstantTypes::OUT_OF_SPACE >::Type OUT_OF_SPACE; // 28

    // Fields
    typename ::uavcan::StorageType< typename FieldTypes::value >::Type value;

    Error_()
        : value()
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
        ::uavcan::StaticAssert<16 == MaxBitLen>::check();
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
    // This type has no default data type ID

    static const char* getDataTypeFullName()
    {
        return "uavcan.protocol.file.Error";
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
bool Error_<_tmpl>::operator==(ParameterType rhs) const
{
    return
        value == rhs.value;
}

template <int _tmpl>
bool Error_<_tmpl>::isClose(ParameterType rhs) const
{
    return
        ::uavcan::areClose(value, rhs.value);
}

template <int _tmpl>
int Error_<_tmpl>::encode(ParameterType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::value::encode(self.value, codec,  tao_mode);
    return res;
}

template <int _tmpl>
int Error_<_tmpl>::decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::value::decode(self.value, codec,  tao_mode);
    return res;
}

/*
 * Out of line type method definitions
 */
template <int _tmpl>
::uavcan::DataTypeSignature Error_<_tmpl>::getDataTypeSignature()
{
    ::uavcan::DataTypeSignature signature(0xBFEF38A55E4417D7ULL);

    FieldTypes::value::extendDataTypeSignature(signature);

    return signature;
}

/*
 * Out of line constant definitions
 */

template <int _tmpl>
const typename ::uavcan::StorageType< typename Error_<_tmpl>::ConstantTypes::OK >::Type
    Error_<_tmpl>::OK = 0; // 0

template <int _tmpl>
const typename ::uavcan::StorageType< typename Error_<_tmpl>::ConstantTypes::UNKNOWN_ERROR >::Type
    Error_<_tmpl>::UNKNOWN_ERROR = 32767; // 32767

template <int _tmpl>
const typename ::uavcan::StorageType< typename Error_<_tmpl>::ConstantTypes::NOT_FOUND >::Type
    Error_<_tmpl>::NOT_FOUND = 2; // 2

template <int _tmpl>
const typename ::uavcan::StorageType< typename Error_<_tmpl>::ConstantTypes::IO_ERROR >::Type
    Error_<_tmpl>::IO_ERROR = 5; // 5

template <int _tmpl>
const typename ::uavcan::StorageType< typename Error_<_tmpl>::ConstantTypes::ACCESS_DENIED >::Type
    Error_<_tmpl>::ACCESS_DENIED = 13; // 13

template <int _tmpl>
const typename ::uavcan::StorageType< typename Error_<_tmpl>::ConstantTypes::IS_DIRECTORY >::Type
    Error_<_tmpl>::IS_DIRECTORY = 21; // 21

template <int _tmpl>
const typename ::uavcan::StorageType< typename Error_<_tmpl>::ConstantTypes::INVALID_VALUE >::Type
    Error_<_tmpl>::INVALID_VALUE = 22; // 22

template <int _tmpl>
const typename ::uavcan::StorageType< typename Error_<_tmpl>::ConstantTypes::FILE_TOO_LARGE >::Type
    Error_<_tmpl>::FILE_TOO_LARGE = 27; // 27

template <int _tmpl>
const typename ::uavcan::StorageType< typename Error_<_tmpl>::ConstantTypes::OUT_OF_SPACE >::Type
    Error_<_tmpl>::OUT_OF_SPACE = 28; // 28

/*
 * Final typedef
 */
typedef Error_<0> Error;

// No default registration

} // Namespace uavcan
} // Namespace protocol
} // Namespace file

/*
 * YAML streamer specialization
 */
namespace uavcan
{

template <>
class UAVCAN_EXPORT YamlStreamer< ::uavcan::protocol::file::Error >
{
public:
    template <typename Stream>
    static void stream(Stream& s, ::uavcan::protocol::file::Error::ParameterType obj, const int level);
};

template <typename Stream>
void YamlStreamer< ::uavcan::protocol::file::Error >::stream(Stream& s, ::uavcan::protocol::file::Error::ParameterType obj, const int level)
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
    s << "value: ";
    YamlStreamer< ::uavcan::protocol::file::Error::FieldTypes::value >::stream(s, obj.value, level + 1);
}

}

namespace uavcan
{
namespace protocol
{
namespace file
{

template <typename Stream>
inline Stream& operator<<(Stream& s, ::uavcan::protocol::file::Error::ParameterType obj)
{
    ::uavcan::YamlStreamer< ::uavcan::protocol::file::Error >::stream(s, obj, 0);
    return s;
}

}
}
}