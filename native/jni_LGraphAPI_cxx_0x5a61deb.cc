#include <jni.h>
#include <new>
#include "c.h"

#ifdef __cplusplus
extern "C" {
#endif

// Common Stubs

JNIEXPORT
jlong JNICALL Java_LGraphAPI_1cxx_10x5a61deb_native_1MyStruct_1t_1cteate(JNIEnv*, jclass, jint arg0 /* a0 */, jdouble arg1 /* b1 */) {
	return reinterpret_cast<jlong>(::MyStruct_t_cteate(arg0, arg1));
}

#ifdef __cplusplus
}
#endif
