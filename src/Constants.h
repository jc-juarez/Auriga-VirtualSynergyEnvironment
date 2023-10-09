// *************************************
// Auriga Virtual Synergy Environment
// 'Constants.h'
// Author: Juan Carlos Juárez
// Contact: jc.juarezgarcia@outlook.com
// *************************************

#pragma once

namespace auriga {

//
// Alias Types.
//

//
// Unsigned 8 bytes.
//
using UInt64 = unsigned long long;

//
// Unsigned 4 bytes.
//
using UInt32 = unsigned int;

//
// Unsigned 2 bytes.
//
using UInt16 = unsigned short;

//
// Unsigned 1 byte.
//
using UInt8 = unsigned char;
using Byte = unsigned char;

//
// Signed 8 bytes.
//
using Int64 = long long;

//
// Signed 4 bytes.
//
using Int32 = int;

//
// Signed 2 bytes.
//
using Int16 = short;

//
// Signed 1 byte.
//
using Int8 = char;

//
// Double precision floating-point values.
//
using Double = double;

//
// Pointer to memory address.
//
using MemoryAddress = void*;

//
// Static constants classes.
//

//
// Numerics static class for holding constant literal values needed for the Auriga VSE.
//
class Numerics {

public:

    //
    // Static class.
    //
    Numerics() = delete;

    //
    // Window Width for the ofApp process.
    //
    static constexpr UInt16 c_WindowWidth { 1024u };

    //
    // Window Height for the ofApp process.
    //
    static constexpr UInt16 c_WindowHeight { 768u };

    //
    // Invalid numeric value.
    static constexpr Int8 c_Invalid { -1 };

    //
    // Prime velocity vector decreasing factor for standard particle initalization.
    //
    static constexpr double c_DefaultPrimeVelocityFactor { 0.25 };

};

}