#ifndef SCENELIB_GL_H
#define SCENELIB_GL_H

#ifndef NO_OPENGL

#ifdef _WIN32
//#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#endif // _WIN32

#if defined (__APPLE__) || defined (MACOSX)
#include <OpenGL/gl.h>
#else
#include <GL/gl.h>
#endif


/*
//fix this later
#define GL_GLEXT_PROTOTYPES
#if defined (__APPLE__) || defined (MACOSX)
#include <OpenGL/glext.h>
#else
#include <GL/glext.h>
#endif
*/

#else

#include <assert.h>

#endif //NO_OPENGL

/** @defgroup GLDraw
 * @brief OpenGL, GLUT, and GLUI drawing routines
 */


/** @ingroup GLDraw
 * @brief Contains all definitions in the GLDraw package
 */
namespace GLDraw {
} //namespace GLDraw

#endif
