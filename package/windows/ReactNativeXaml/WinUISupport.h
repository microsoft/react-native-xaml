#pragma once


#if !defined(MUX_MAJOR_VERSION) || !defined(MUX_MINOR_VERSION)
#error MUX Version not defined
#endif

#if (MUX_MAJOR_VERSION > 2) || ((MUX_MAJOR_VERSION == 2) && (MUX_MINOR_VERSION >= 60000))
#define MUX_2_6
#endif
