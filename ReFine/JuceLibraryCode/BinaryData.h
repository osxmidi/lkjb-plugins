/* =========================================================================================

   This is an auto-generated file: Any edits you make may be overwritten!

*/

#pragma once

namespace BinaryData
{
    extern const char*   background_png;
    const int            background_pngSize = 49833;

    extern const char*   blue_png;
    const int            blue_pngSize = 66845;

    extern const char*   green_png;
    const int            green_pngSize = 66938;

    extern const char*   red_png;
    const int            red_pngSize = 66547;

    extern const char*   vu_blue_png;
    const int            vu_blue_pngSize = 13293;

    extern const char*   vu_green_png;
    const int            vu_green_pngSize = 13138;

    extern const char*   vu_red_png;
    const int            vu_red_pngSize = 13086;

    extern const char*   x2button_png;
    const int            x2button_pngSize = 2312;

    // Number of elements in the namedResourceList and originalFileNames arrays.
    const int namedResourceListSize = 8;

    // Points to the start of a list of resource names.
    extern const char* namedResourceList[];

    // Points to the start of a list of resource filenames.
    extern const char* originalFilenames[];

    // If you provide the name of one of the binary resource variables above, this function will
    // return the corresponding data and its size (or a null pointer if the name isn't found).
    const char* getNamedResource (const char* resourceNameUTF8, int& dataSizeInBytes);

    // If you provide the name of one of the binary resource variables above, this function will
    // return the corresponding original, non-mangled filename (or a null pointer if the name isn't found).
    const char* getNamedResourceOriginalFilename (const char* resourceNameUTF8);
}
