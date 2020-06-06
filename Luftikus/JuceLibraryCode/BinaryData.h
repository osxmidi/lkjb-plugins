/* =========================================================================================

   This is an auto-generated file: Any edits you make may be overwritten!

*/

#pragma once

namespace BinaryData
{
    extern const char*   chicken_300_png;
    const int            chicken_300_pngSize = 759048;

    extern const char*   trim_480_png;
    const int            trim_480_pngSize = 66497;

    extern const char*   air_button_off_png;
    const int            air_button_off_pngSize = 3793;

    extern const char*   air_button_on_png;
    const int            air_button_on_pngSize = 3805;

    extern const char*   kippschalter_off_png;
    const int            kippschalter_off_pngSize = 3959;

    extern const char*   kippschalter_on_png;
    const int            kippschalter_on_pngSize = 4167;

    extern const char*   luftikus_front_002_png;
    const int            luftikus_front_002_pngSize = 239441;

    // Number of elements in the namedResourceList and originalFileNames arrays.
    const int namedResourceListSize = 7;

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
