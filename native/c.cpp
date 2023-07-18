#include "c.h"
#include <cstdlib>
#include <new>
#include <math.h>

//struct MyStruct {
//
//};

MyStruct_t* MyStruct_t_cteate(int a, double b) {
    return new MyStruct{a, b};
}

