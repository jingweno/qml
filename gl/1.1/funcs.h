
// ** file automatically generated by glgen -- do not edit manually **

#ifndef __cplusplus
#include <inttypes.h>
#include <stddef.h>
typedef unsigned int	GLenum;
typedef unsigned char	GLboolean;
typedef unsigned int	GLbitfield;
typedef void		GLvoid;
typedef char            GLchar;
typedef signed char	GLbyte;		/* 1-byte signed */
typedef short		GLshort;	/* 2-byte signed */
typedef int		GLint;		/* 4-byte signed */
typedef unsigned char	GLubyte;	/* 1-byte unsigned */
typedef unsigned short	GLushort;	/* 2-byte unsigned */
typedef unsigned int	GLuint;		/* 4-byte unsigned */
typedef int		GLsizei;	/* 4-byte signed */
typedef float		GLfloat;	/* single precision float */
typedef float		GLclampf;	/* single precision float in [0,1] */
typedef double		GLdouble;	/* double precision float */
typedef double		GLclampd;	/* double precision float in [0,1] */
typedef int64_t         GLint64;
typedef uint64_t        GLuint64;
typedef ptrdiff_t       GLintptr;
typedef ptrdiff_t       GLsizeiptr;
typedef ptrdiff_t       GLintptrARB;
typedef ptrdiff_t       GLsizeiptrARB;
typedef struct __GLsync *GLsync;
#endif

#ifdef __cplusplus
extern "C" {
#endif

void *gl1_1_funcs();

void gl1_1_glViewport(void *_glfuncs, GLint x, GLint y, GLsizei width, GLsizei height);
void gl1_1_glDepthRange(void *_glfuncs, GLdouble nearVal, GLdouble farVal);
GLboolean gl1_1_glIsEnabled(void *_glfuncs, GLenum cap);
void gl1_1_glGetTexLevelParameteriv(void *_glfuncs, GLenum target, GLint level, GLenum pname, GLint* params);
void gl1_1_glGetTexLevelParameterfv(void *_glfuncs, GLenum target, GLint level, GLenum pname, GLfloat* params);
void gl1_1_glGetTexParameteriv(void *_glfuncs, GLenum target, GLenum pname, GLint* params);
void gl1_1_glGetTexParameterfv(void *_glfuncs, GLenum target, GLenum pname, GLfloat* params);
void gl1_1_glGetTexImage(void *_glfuncs, GLenum target, GLint level, GLenum format, GLenum gltype, GLvoid* pixels);
void gl1_1_glGetIntegerv(void *_glfuncs, GLenum pname, GLint* params);
void gl1_1_glGetFloatv(void *_glfuncs, GLenum pname, GLfloat* params);
GLenum gl1_1_glGetError(void *_glfuncs);
void gl1_1_glGetDoublev(void *_glfuncs, GLenum pname, GLdouble* params);
void gl1_1_glGetBooleanv(void *_glfuncs, GLenum pname, GLboolean* params);
void gl1_1_glReadPixels(void *_glfuncs, GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum gltype, GLvoid* pixels);
void gl1_1_glReadBuffer(void *_glfuncs, GLenum mode);
void gl1_1_glPixelStorei(void *_glfuncs, GLenum pname, GLint param);
void gl1_1_glPixelStoref(void *_glfuncs, GLenum pname, GLfloat param);
void gl1_1_glDepthFunc(void *_glfuncs, GLenum glfunc);
void gl1_1_glStencilOp(void *_glfuncs, GLenum fail, GLenum zfail, GLenum zpass);
void gl1_1_glStencilFunc(void *_glfuncs, GLenum glfunc, GLint ref, GLuint mask);
void gl1_1_glLogicOp(void *_glfuncs, GLenum opcode);
void gl1_1_glBlendFunc(void *_glfuncs, GLenum sfactor, GLenum dfactor);
void gl1_1_glFlush(void *_glfuncs);
void gl1_1_glFinish(void *_glfuncs);
void gl1_1_glEnable(void *_glfuncs, GLenum cap);
void gl1_1_glDisable(void *_glfuncs, GLenum cap);
void gl1_1_glDepthMask(void *_glfuncs, GLboolean flag);
void gl1_1_glColorMask(void *_glfuncs, GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
void gl1_1_glStencilMask(void *_glfuncs, GLuint mask);
void gl1_1_glClearDepth(void *_glfuncs, GLdouble depth);
void gl1_1_glClearStencil(void *_glfuncs, GLint s);
void gl1_1_glClearColor(void *_glfuncs, GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
void gl1_1_glClear(void *_glfuncs, GLbitfield mask);
void gl1_1_glDrawBuffer(void *_glfuncs, GLenum mode);
void gl1_1_glTexImage2D(void *_glfuncs, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum gltype, const GLvoid* pixels);
void gl1_1_glTexImage1D(void *_glfuncs, GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum gltype, const GLvoid* pixels);
void gl1_1_glTexParameteriv(void *_glfuncs, GLenum target, GLenum pname, const GLint* params);
void gl1_1_glTexParameteri(void *_glfuncs, GLenum target, GLenum pname, GLint param);
void gl1_1_glTexParameterfv(void *_glfuncs, GLenum target, GLenum pname, const GLfloat* params);
void gl1_1_glTexParameterf(void *_glfuncs, GLenum target, GLenum pname, GLfloat param);
void gl1_1_glScissor(void *_glfuncs, GLint x, GLint y, GLsizei width, GLsizei height);
void gl1_1_glPolygonMode(void *_glfuncs, GLenum face, GLenum mode);
void gl1_1_glPointSize(void *_glfuncs, GLfloat size);
void gl1_1_glLineWidth(void *_glfuncs, GLfloat width);
void gl1_1_glHint(void *_glfuncs, GLenum target, GLenum mode);
void gl1_1_glFrontFace(void *_glfuncs, GLenum mode);
void gl1_1_glCullFace(void *_glfuncs, GLenum mode);
void gl1_1_glIndexubv(void *_glfuncs, const GLubyte* c);
void gl1_1_glIndexub(void *_glfuncs, GLubyte c);
GLboolean gl1_1_glIsTexture(void *_glfuncs, GLuint texture);
void gl1_1_glGenTextures(void *_glfuncs, GLsizei n, GLuint* textures);
void gl1_1_glDeleteTextures(void *_glfuncs, GLsizei n, const GLuint* textures);
void gl1_1_glBindTexture(void *_glfuncs, GLenum target, GLuint texture);
void gl1_1_glTexSubImage2D(void *_glfuncs, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum gltype, const GLvoid* pixels);
void gl1_1_glTexSubImage1D(void *_glfuncs, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum gltype, const GLvoid* pixels);
void gl1_1_glCopyTexSubImage2D(void *_glfuncs, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
void gl1_1_glCopyTexSubImage1D(void *_glfuncs, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
void gl1_1_glCopyTexImage2D(void *_glfuncs, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
void gl1_1_glCopyTexImage1D(void *_glfuncs, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border);
void gl1_1_glPolygonOffset(void *_glfuncs, GLfloat factor, GLfloat units);
void gl1_1_glDrawElements(void *_glfuncs, GLenum mode, GLsizei count, GLenum gltype, const GLvoid* indices);
void gl1_1_glDrawArrays(void *_glfuncs, GLenum mode, GLint first, GLsizei count);
void gl1_1_glTranslatef(void *_glfuncs, GLfloat x, GLfloat y, GLfloat z);
void gl1_1_glTranslated(void *_glfuncs, GLdouble x, GLdouble y, GLdouble z);
void gl1_1_glScalef(void *_glfuncs, GLfloat x, GLfloat y, GLfloat z);
void gl1_1_glScaled(void *_glfuncs, GLdouble x, GLdouble y, GLdouble z);
void gl1_1_glRotatef(void *_glfuncs, GLfloat angle, GLfloat x, GLfloat y, GLfloat z);
void gl1_1_glRotated(void *_glfuncs, GLdouble angle, GLdouble x, GLdouble y, GLdouble z);
void gl1_1_glPushMatrix(void *_glfuncs);
void gl1_1_glPopMatrix(void *_glfuncs);
void gl1_1_glOrtho(void *_glfuncs, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);
void gl1_1_glMultMatrixd(void *_glfuncs, const GLdouble* m);
void gl1_1_glMultMatrixf(void *_glfuncs, const GLfloat* m);
void gl1_1_glMatrixMode(void *_glfuncs, GLenum mode);
void gl1_1_glLoadMatrixd(void *_glfuncs, const GLdouble* m);
void gl1_1_glLoadMatrixf(void *_glfuncs, const GLfloat* m);
void gl1_1_glLoadIdentity(void *_glfuncs);
void gl1_1_glFrustum(void *_glfuncs, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);
GLboolean gl1_1_glIsList(void *_glfuncs, GLuint list);
void gl1_1_glGetTexGeniv(void *_glfuncs, GLenum coord, GLenum pname, GLint* params);
void gl1_1_glGetTexGenfv(void *_glfuncs, GLenum coord, GLenum pname, GLfloat* params);
void gl1_1_glGetTexGendv(void *_glfuncs, GLenum coord, GLenum pname, GLdouble* params);
void gl1_1_glGetTexEnviv(void *_glfuncs, GLenum target, GLenum pname, GLint* params);
void gl1_1_glGetTexEnvfv(void *_glfuncs, GLenum target, GLenum pname, GLfloat* params);
void gl1_1_glGetPolygonStipple(void *_glfuncs, GLubyte* mask);
void gl1_1_glGetPixelMapusv(void *_glfuncs, GLenum glmap, GLushort* values);
void gl1_1_glGetPixelMapuiv(void *_glfuncs, GLenum glmap, GLuint* values);
void gl1_1_glGetPixelMapfv(void *_glfuncs, GLenum glmap, GLfloat* values);
void gl1_1_glGetMaterialiv(void *_glfuncs, GLenum face, GLenum pname, GLint* params);
void gl1_1_glGetMaterialfv(void *_glfuncs, GLenum face, GLenum pname, GLfloat* params);
void gl1_1_glGetMapiv(void *_glfuncs, GLenum target, GLenum query, GLint* v);
void gl1_1_glGetMapfv(void *_glfuncs, GLenum target, GLenum query, GLfloat* v);
void gl1_1_glGetMapdv(void *_glfuncs, GLenum target, GLenum query, GLdouble* v);
void gl1_1_glGetLightiv(void *_glfuncs, GLenum light, GLenum pname, GLint* params);
void gl1_1_glGetLightfv(void *_glfuncs, GLenum light, GLenum pname, GLfloat* params);
void gl1_1_glGetClipPlane(void *_glfuncs, GLenum plane, GLdouble* equation);
void gl1_1_glDrawPixels(void *_glfuncs, GLsizei width, GLsizei height, GLenum format, GLenum gltype, const GLvoid* pixels);
void gl1_1_glCopyPixels(void *_glfuncs, GLint x, GLint y, GLsizei width, GLsizei height, GLenum gltype);
void gl1_1_glPixelMapusv(void *_glfuncs, GLenum glmap, GLint mapsize, const GLushort* values);
void gl1_1_glPixelMapuiv(void *_glfuncs, GLenum glmap, GLint mapsize, const GLuint* values);
void gl1_1_glPixelMapfv(void *_glfuncs, GLenum glmap, GLint mapsize, const GLfloat* values);
void gl1_1_glPixelTransferi(void *_glfuncs, GLenum pname, GLint param);
void gl1_1_glPixelTransferf(void *_glfuncs, GLenum pname, GLfloat param);
void gl1_1_glPixelZoom(void *_glfuncs, GLfloat xfactor, GLfloat yfactor);
void gl1_1_glAlphaFunc(void *_glfuncs, GLenum glfunc, GLfloat ref);
void gl1_1_glEvalPoint2(void *_glfuncs, GLint i, GLint j);
void gl1_1_glEvalMesh2(void *_glfuncs, GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2);
void gl1_1_glEvalPoint1(void *_glfuncs, GLint i);
void gl1_1_glEvalMesh1(void *_glfuncs, GLenum mode, GLint i1, GLint i2);
void gl1_1_glEvalCoord2fv(void *_glfuncs, const GLfloat* u);
void gl1_1_glEvalCoord2f(void *_glfuncs, GLfloat u, GLfloat v);
void gl1_1_glEvalCoord2dv(void *_glfuncs, const GLdouble* u);
void gl1_1_glEvalCoord2d(void *_glfuncs, GLdouble u, GLdouble v);
void gl1_1_glEvalCoord1fv(void *_glfuncs, const GLfloat* u);
void gl1_1_glEvalCoord1f(void *_glfuncs, GLfloat u);
void gl1_1_glEvalCoord1dv(void *_glfuncs, const GLdouble* u);
void gl1_1_glEvalCoord1d(void *_glfuncs, GLdouble u);
void gl1_1_glMapGrid2f(void *_glfuncs, GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2);
void gl1_1_glMapGrid2d(void *_glfuncs, GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2);
void gl1_1_glMapGrid1f(void *_glfuncs, GLint un, GLfloat u1, GLfloat u2);
void gl1_1_glMapGrid1d(void *_glfuncs, GLint un, GLdouble u1, GLdouble u2);
void gl1_1_glMap2f(void *_glfuncs, GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat* points);
void gl1_1_glMap2d(void *_glfuncs, GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble* points);
void gl1_1_glMap1f(void *_glfuncs, GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat* points);
void gl1_1_glMap1d(void *_glfuncs, GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble* points);
void gl1_1_glPushAttrib(void *_glfuncs, GLbitfield mask);
void gl1_1_glPopAttrib(void *_glfuncs);
void gl1_1_glAccum(void *_glfuncs, GLenum op, GLfloat value);
void gl1_1_glIndexMask(void *_glfuncs, GLuint mask);
void gl1_1_glClearIndex(void *_glfuncs, GLfloat c);
void gl1_1_glClearAccum(void *_glfuncs, GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
void gl1_1_glPushName(void *_glfuncs, GLuint name);
void gl1_1_glPopName(void *_glfuncs);
void gl1_1_glPassThrough(void *_glfuncs, GLfloat token);
void gl1_1_glLoadName(void *_glfuncs, GLuint name);
void gl1_1_glInitNames(void *_glfuncs);
GLint gl1_1_glRenderMode(void *_glfuncs, GLenum mode);
void gl1_1_glSelectBuffer(void *_glfuncs, GLsizei size, GLuint* buffer);
void gl1_1_glFeedbackBuffer(void *_glfuncs, GLsizei size, GLenum gltype, GLfloat* buffer);
void gl1_1_glTexGeniv(void *_glfuncs, GLenum coord, GLenum pname, const GLint* params);
void gl1_1_glTexGeni(void *_glfuncs, GLenum coord, GLenum pname, GLint param);
void gl1_1_glTexGenfv(void *_glfuncs, GLenum coord, GLenum pname, const GLfloat* params);
void gl1_1_glTexGenf(void *_glfuncs, GLenum coord, GLenum pname, GLfloat param);
void gl1_1_glTexGendv(void *_glfuncs, GLenum coord, GLenum pname, const GLdouble* params);
void gl1_1_glTexGend(void *_glfuncs, GLenum coord, GLenum pname, GLdouble param);
void gl1_1_glTexEnviv(void *_glfuncs, GLenum target, GLenum pname, const GLint* params);
void gl1_1_glTexEnvi(void *_glfuncs, GLenum target, GLenum pname, GLint param);
void gl1_1_glTexEnvfv(void *_glfuncs, GLenum target, GLenum pname, const GLfloat* params);
void gl1_1_glTexEnvf(void *_glfuncs, GLenum target, GLenum pname, GLfloat param);
void gl1_1_glShadeModel(void *_glfuncs, GLenum mode);
void gl1_1_glPolygonStipple(void *_glfuncs, const GLubyte* mask);
void gl1_1_glMaterialiv(void *_glfuncs, GLenum face, GLenum pname, const GLint* params);
void gl1_1_glMateriali(void *_glfuncs, GLenum face, GLenum pname, GLint param);
void gl1_1_glMaterialfv(void *_glfuncs, GLenum face, GLenum pname, const GLfloat* params);
void gl1_1_glMaterialf(void *_glfuncs, GLenum face, GLenum pname, GLfloat param);
void gl1_1_glLineStipple(void *_glfuncs, GLint factor, GLushort pattern);
void gl1_1_glLightModeliv(void *_glfuncs, GLenum pname, const GLint* params);
void gl1_1_glLightModeli(void *_glfuncs, GLenum pname, GLint param);
void gl1_1_glLightModelfv(void *_glfuncs, GLenum pname, const GLfloat* params);
void gl1_1_glLightModelf(void *_glfuncs, GLenum pname, GLfloat param);
void gl1_1_glLightiv(void *_glfuncs, GLenum light, GLenum pname, const GLint* params);
void gl1_1_glLighti(void *_glfuncs, GLenum light, GLenum pname, GLint param);
void gl1_1_glLightfv(void *_glfuncs, GLenum light, GLenum pname, const GLfloat* params);
void gl1_1_glLightf(void *_glfuncs, GLenum light, GLenum pname, GLfloat param);
void gl1_1_glFogiv(void *_glfuncs, GLenum pname, const GLint* params);
void gl1_1_glFogi(void *_glfuncs, GLenum pname, GLint param);
void gl1_1_glFogfv(void *_glfuncs, GLenum pname, const GLfloat* params);
void gl1_1_glFogf(void *_glfuncs, GLenum pname, GLfloat param);
void gl1_1_glColorMaterial(void *_glfuncs, GLenum face, GLenum mode);
void gl1_1_glClipPlane(void *_glfuncs, GLenum plane, const GLdouble* equation);
void gl1_1_glVertex4sv(void *_glfuncs, const GLshort* v);
void gl1_1_glVertex4s(void *_glfuncs, GLshort x, GLshort y, GLshort z, GLshort w);
void gl1_1_glVertex4iv(void *_glfuncs, const GLint* v);
void gl1_1_glVertex4i(void *_glfuncs, GLint x, GLint y, GLint z, GLint w);
void gl1_1_glVertex4fv(void *_glfuncs, const GLfloat* v);
void gl1_1_glVertex4f(void *_glfuncs, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
void gl1_1_glVertex4dv(void *_glfuncs, const GLdouble* v);
void gl1_1_glVertex4d(void *_glfuncs, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
void gl1_1_glVertex3sv(void *_glfuncs, const GLshort* v);
void gl1_1_glVertex3s(void *_glfuncs, GLshort x, GLshort y, GLshort z);
void gl1_1_glVertex3iv(void *_glfuncs, const GLint* v);
void gl1_1_glVertex3i(void *_glfuncs, GLint x, GLint y, GLint z);
void gl1_1_glVertex3fv(void *_glfuncs, const GLfloat* v);
void gl1_1_glVertex3f(void *_glfuncs, GLfloat x, GLfloat y, GLfloat z);
void gl1_1_glVertex3dv(void *_glfuncs, const GLdouble* v);
void gl1_1_glVertex3d(void *_glfuncs, GLdouble x, GLdouble y, GLdouble z);
void gl1_1_glVertex2sv(void *_glfuncs, const GLshort* v);
void gl1_1_glVertex2s(void *_glfuncs, GLshort x, GLshort y);
void gl1_1_glVertex2iv(void *_glfuncs, const GLint* v);
void gl1_1_glVertex2i(void *_glfuncs, GLint x, GLint y);
void gl1_1_glVertex2fv(void *_glfuncs, const GLfloat* v);
void gl1_1_glVertex2f(void *_glfuncs, GLfloat x, GLfloat y);
void gl1_1_glVertex2dv(void *_glfuncs, const GLdouble* v);
void gl1_1_glVertex2d(void *_glfuncs, GLdouble x, GLdouble y);
void gl1_1_glTexCoord4sv(void *_glfuncs, const GLshort* v);
void gl1_1_glTexCoord4s(void *_glfuncs, GLshort s, GLshort t, GLshort r, GLshort q);
void gl1_1_glTexCoord4iv(void *_glfuncs, const GLint* v);
void gl1_1_glTexCoord4i(void *_glfuncs, GLint s, GLint t, GLint r, GLint q);
void gl1_1_glTexCoord4fv(void *_glfuncs, const GLfloat* v);
void gl1_1_glTexCoord4f(void *_glfuncs, GLfloat s, GLfloat t, GLfloat r, GLfloat q);
void gl1_1_glTexCoord4dv(void *_glfuncs, const GLdouble* v);
void gl1_1_glTexCoord4d(void *_glfuncs, GLdouble s, GLdouble t, GLdouble r, GLdouble q);
void gl1_1_glTexCoord3sv(void *_glfuncs, const GLshort* v);
void gl1_1_glTexCoord3s(void *_glfuncs, GLshort s, GLshort t, GLshort r);
void gl1_1_glTexCoord3iv(void *_glfuncs, const GLint* v);
void gl1_1_glTexCoord3i(void *_glfuncs, GLint s, GLint t, GLint r);
void gl1_1_glTexCoord3fv(void *_glfuncs, const GLfloat* v);
void gl1_1_glTexCoord3f(void *_glfuncs, GLfloat s, GLfloat t, GLfloat r);
void gl1_1_glTexCoord3dv(void *_glfuncs, const GLdouble* v);
void gl1_1_glTexCoord3d(void *_glfuncs, GLdouble s, GLdouble t, GLdouble r);
void gl1_1_glTexCoord2sv(void *_glfuncs, const GLshort* v);
void gl1_1_glTexCoord2s(void *_glfuncs, GLshort s, GLshort t);
void gl1_1_glTexCoord2iv(void *_glfuncs, const GLint* v);
void gl1_1_glTexCoord2i(void *_glfuncs, GLint s, GLint t);
void gl1_1_glTexCoord2fv(void *_glfuncs, const GLfloat* v);
void gl1_1_glTexCoord2f(void *_glfuncs, GLfloat s, GLfloat t);
void gl1_1_glTexCoord2dv(void *_glfuncs, const GLdouble* v);
void gl1_1_glTexCoord2d(void *_glfuncs, GLdouble s, GLdouble t);
void gl1_1_glTexCoord1sv(void *_glfuncs, const GLshort* v);
void gl1_1_glTexCoord1s(void *_glfuncs, GLshort s);
void gl1_1_glTexCoord1iv(void *_glfuncs, const GLint* v);
void gl1_1_glTexCoord1i(void *_glfuncs, GLint s);
void gl1_1_glTexCoord1fv(void *_glfuncs, const GLfloat* v);
void gl1_1_glTexCoord1f(void *_glfuncs, GLfloat s);
void gl1_1_glTexCoord1dv(void *_glfuncs, const GLdouble* v);
void gl1_1_glTexCoord1d(void *_glfuncs, GLdouble s);
void gl1_1_glRectsv(void *_glfuncs, const GLshort* v1, const GLshort* v2);
void gl1_1_glRects(void *_glfuncs, GLshort x1, GLshort y1, GLshort x2, GLshort y2);
void gl1_1_glRectiv(void *_glfuncs, const GLint* v1, const GLint* v2);
void gl1_1_glRecti(void *_glfuncs, GLint x1, GLint y1, GLint x2, GLint y2);
void gl1_1_glRectfv(void *_glfuncs, const GLfloat* v1, const GLfloat* v2);
void gl1_1_glRectf(void *_glfuncs, GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2);
void gl1_1_glRectdv(void *_glfuncs, const GLdouble* v1, const GLdouble* v2);
void gl1_1_glRectd(void *_glfuncs, GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2);
void gl1_1_glRasterPos4sv(void *_glfuncs, const GLshort* v);
void gl1_1_glRasterPos4s(void *_glfuncs, GLshort x, GLshort y, GLshort z, GLshort w);
void gl1_1_glRasterPos4iv(void *_glfuncs, const GLint* v);
void gl1_1_glRasterPos4i(void *_glfuncs, GLint x, GLint y, GLint z, GLint w);
void gl1_1_glRasterPos4fv(void *_glfuncs, const GLfloat* v);
void gl1_1_glRasterPos4f(void *_glfuncs, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
void gl1_1_glRasterPos4dv(void *_glfuncs, const GLdouble* v);
void gl1_1_glRasterPos4d(void *_glfuncs, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
void gl1_1_glRasterPos3sv(void *_glfuncs, const GLshort* v);
void gl1_1_glRasterPos3s(void *_glfuncs, GLshort x, GLshort y, GLshort z);
void gl1_1_glRasterPos3iv(void *_glfuncs, const GLint* v);
void gl1_1_glRasterPos3i(void *_glfuncs, GLint x, GLint y, GLint z);
void gl1_1_glRasterPos3fv(void *_glfuncs, const GLfloat* v);
void gl1_1_glRasterPos3f(void *_glfuncs, GLfloat x, GLfloat y, GLfloat z);
void gl1_1_glRasterPos3dv(void *_glfuncs, const GLdouble* v);
void gl1_1_glRasterPos3d(void *_glfuncs, GLdouble x, GLdouble y, GLdouble z);
void gl1_1_glRasterPos2sv(void *_glfuncs, const GLshort* v);
void gl1_1_glRasterPos2s(void *_glfuncs, GLshort x, GLshort y);
void gl1_1_glRasterPos2iv(void *_glfuncs, const GLint* v);
void gl1_1_glRasterPos2i(void *_glfuncs, GLint x, GLint y);
void gl1_1_glRasterPos2fv(void *_glfuncs, const GLfloat* v);
void gl1_1_glRasterPos2f(void *_glfuncs, GLfloat x, GLfloat y);
void gl1_1_glRasterPos2dv(void *_glfuncs, const GLdouble* v);
void gl1_1_glRasterPos2d(void *_glfuncs, GLdouble x, GLdouble y);
void gl1_1_glNormal3sv(void *_glfuncs, const GLshort* v);
void gl1_1_glNormal3s(void *_glfuncs, GLshort nx, GLshort ny, GLshort nz);
void gl1_1_glNormal3iv(void *_glfuncs, const GLint* v);
void gl1_1_glNormal3i(void *_glfuncs, GLint nx, GLint ny, GLint nz);
void gl1_1_glNormal3fv(void *_glfuncs, const GLfloat* v);
void gl1_1_glNormal3f(void *_glfuncs, GLfloat nx, GLfloat ny, GLfloat nz);
void gl1_1_glNormal3dv(void *_glfuncs, const GLdouble* v);
void gl1_1_glNormal3d(void *_glfuncs, GLdouble nx, GLdouble ny, GLdouble nz);
void gl1_1_glNormal3bv(void *_glfuncs, const GLbyte* v);
void gl1_1_glNormal3b(void *_glfuncs, GLbyte nx, GLbyte ny, GLbyte nz);
void gl1_1_glIndexsv(void *_glfuncs, const GLshort* c);
void gl1_1_glIndexs(void *_glfuncs, GLshort c);
void gl1_1_glIndexiv(void *_glfuncs, const GLint* c);
void gl1_1_glIndexi(void *_glfuncs, GLint c);
void gl1_1_glIndexfv(void *_glfuncs, const GLfloat* c);
void gl1_1_glIndexf(void *_glfuncs, GLfloat c);
void gl1_1_glIndexdv(void *_glfuncs, const GLdouble* c);
void gl1_1_glIndexd(void *_glfuncs, GLdouble c);
void gl1_1_glEnd(void *_glfuncs);
void gl1_1_glEdgeFlagv(void *_glfuncs, const GLboolean* flag);
void gl1_1_glEdgeFlag(void *_glfuncs, GLboolean flag);
void gl1_1_glColor4usv(void *_glfuncs, const GLushort* v);
void gl1_1_glColor4us(void *_glfuncs, GLushort red, GLushort green, GLushort blue, GLushort alpha);
void gl1_1_glColor4uiv(void *_glfuncs, const GLuint* v);
void gl1_1_glColor4ui(void *_glfuncs, GLuint red, GLuint green, GLuint blue, GLuint alpha);
void gl1_1_glColor4ubv(void *_glfuncs, const GLubyte* v);
void gl1_1_glColor4ub(void *_glfuncs, GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha);
void gl1_1_glColor4sv(void *_glfuncs, const GLshort* v);
void gl1_1_glColor4s(void *_glfuncs, GLshort red, GLshort green, GLshort blue, GLshort alpha);
void gl1_1_glColor4iv(void *_glfuncs, const GLint* v);
void gl1_1_glColor4i(void *_glfuncs, GLint red, GLint green, GLint blue, GLint alpha);
void gl1_1_glColor4fv(void *_glfuncs, const GLfloat* v);
void gl1_1_glColor4f(void *_glfuncs, GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
void gl1_1_glColor4dv(void *_glfuncs, const GLdouble* v);
void gl1_1_glColor4d(void *_glfuncs, GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha);
void gl1_1_glColor4bv(void *_glfuncs, const GLbyte* v);
void gl1_1_glColor4b(void *_glfuncs, GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha);
void gl1_1_glColor3usv(void *_glfuncs, const GLushort* v);
void gl1_1_glColor3us(void *_glfuncs, GLushort red, GLushort green, GLushort blue);
void gl1_1_glColor3uiv(void *_glfuncs, const GLuint* v);
void gl1_1_glColor3ui(void *_glfuncs, GLuint red, GLuint green, GLuint blue);
void gl1_1_glColor3ubv(void *_glfuncs, const GLubyte* v);
void gl1_1_glColor3ub(void *_glfuncs, GLubyte red, GLubyte green, GLubyte blue);
void gl1_1_glColor3sv(void *_glfuncs, const GLshort* v);
void gl1_1_glColor3s(void *_glfuncs, GLshort red, GLshort green, GLshort blue);
void gl1_1_glColor3iv(void *_glfuncs, const GLint* v);
void gl1_1_glColor3i(void *_glfuncs, GLint red, GLint green, GLint blue);
void gl1_1_glColor3fv(void *_glfuncs, const GLfloat* v);
void gl1_1_glColor3f(void *_glfuncs, GLfloat red, GLfloat green, GLfloat blue);
void gl1_1_glColor3dv(void *_glfuncs, const GLdouble* v);
void gl1_1_glColor3d(void *_glfuncs, GLdouble red, GLdouble green, GLdouble blue);
void gl1_1_glColor3bv(void *_glfuncs, const GLbyte* v);
void gl1_1_glColor3b(void *_glfuncs, GLbyte red, GLbyte green, GLbyte blue);
void gl1_1_glBitmap(void *_glfuncs, GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte* bitmap);
void gl1_1_glBegin(void *_glfuncs, GLenum mode);
void gl1_1_glListBase(void *_glfuncs, GLuint base);
GLuint gl1_1_glGenLists(void *_glfuncs, GLsizei range_);
void gl1_1_glDeleteLists(void *_glfuncs, GLuint list, GLsizei range_);
void gl1_1_glCallLists(void *_glfuncs, GLsizei n, GLenum gltype, const GLvoid* lists);
void gl1_1_glCallList(void *_glfuncs, GLuint list);
void gl1_1_glEndList(void *_glfuncs);
void gl1_1_glNewList(void *_glfuncs, GLuint list, GLenum mode);
void gl1_1_glPushClientAttrib(void *_glfuncs, GLbitfield mask);
void gl1_1_glPopClientAttrib(void *_glfuncs);
void gl1_1_glPrioritizeTextures(void *_glfuncs, GLsizei n, const GLuint* textures, const GLfloat* priorities);
GLboolean gl1_1_glAreTexturesResident(void *_glfuncs, GLsizei n, const GLuint* textures, GLboolean* residences);
void gl1_1_glVertexPointer(void *_glfuncs, GLint size, GLenum gltype, GLsizei stride, const GLvoid* pointer);
void gl1_1_glTexCoordPointer(void *_glfuncs, GLint size, GLenum gltype, GLsizei stride, const GLvoid* pointer);
void gl1_1_glNormalPointer(void *_glfuncs, GLenum gltype, GLsizei stride, const GLvoid* pointer);
void gl1_1_glInterleavedArrays(void *_glfuncs, GLenum format, GLsizei stride, const GLvoid* pointer);
void gl1_1_glIndexPointer(void *_glfuncs, GLenum gltype, GLsizei stride, const GLvoid* pointer);
void gl1_1_glEnableClientState(void *_glfuncs, GLenum array);
void gl1_1_glEdgeFlagPointer(void *_glfuncs, GLsizei stride, const GLvoid* pointer);
void gl1_1_glDisableClientState(void *_glfuncs, GLenum array);
void gl1_1_glColorPointer(void *_glfuncs, GLint size, GLenum gltype, GLsizei stride, const GLvoid* pointer);
void gl1_1_glArrayElement(void *_glfuncs, GLint i);


#ifdef __cplusplus
} // extern "C"
#endif
