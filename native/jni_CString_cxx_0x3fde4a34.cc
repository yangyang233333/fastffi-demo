#include <jni.h>
#include <new>
#include <cstring>

#ifdef __cplusplus
extern "C" {
#endif

// Common Stubs

JNIEXPORT
jint JNICALL Java_CString_1cxx_10x3fde4a34_nativeStrcmp(JNIEnv*, jclass, jlong arg0 /* str10 */, jlong arg1 /* str21 */) {
	return (jint)(std::strcmp(((const char*) arg0), ((const char*) arg1)));
}

#ifdef __cplusplus
}
#endif
