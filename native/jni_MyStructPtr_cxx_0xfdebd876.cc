#include <jni.h>
#include <new>
#include "c.h"

#ifdef __cplusplus
extern "C" {
#endif

// Common Stubs

JNIEXPORT
jint JNICALL Java_MyStructPtr_1cxx_10xfdebd876__1elementSize_00024_00024_00024(JNIEnv*, jclass) {
    return (jint)sizeof(MyStruct_t);
}

#ifdef __cplusplus
}
#endif
