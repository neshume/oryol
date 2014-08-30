#pragma once
//------------------------------------------------------------------------------
/**
    @file NanoVG/NanoVG.h
 
    Include this header instead of the original nanovg.h in source files
    which call nanovg functions. It makes sure that the right defines
    are set and the right OpenGL headers are included.
*/
#include "Render/gl/gl_impl.h"
#ifndef NANOVG_NO_STDIO
#define NANOVG_NO_STDIO
#endif
#include "NanoVG/nanovg/nanovg.h"
#if ORYOL_OPENGLES2
#ifndef NANOVG_GLES2_IMPLEMENTATION
#define NANOVG_GLES2
#endif
#elif ORYOL_OSX
#ifndef NANOVG_GL3_IMPLEMENTATION
#define NANOVG_GL3
#endif
#else
#ifndef NANOVG_GL2_IMPLEMENTATION
#define NANOVG_GL2
#endif
#endif
#include "NanoVG/nanovg/nanovg_gl.h"