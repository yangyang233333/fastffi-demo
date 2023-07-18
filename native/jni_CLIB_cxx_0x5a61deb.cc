#include <jni.h>
#include <new>
#include <cmath>

#ifdef __cplusplus
extern "C" {
#endif

// Common Stubs

JNIEXPORT
jint JNICALL Java_CLIB_1cxx_10x5a61deb_nativeAbs(JNIEnv*, jclass, jint arg0 /* v0 */) {
	return (jint)(::abs(arg0));
}

JNIEXPORT
jdouble JNICALL Java_CLIB_1cxx_10x5a61deb_nativePow(JNIEnv*, jclass, jdouble arg0 /* x0 */, jdouble arg1 /* y1 */) {
	return (jdouble)(::pow(arg0, arg1));
}

#ifdef __cplusplus
}
#endif
