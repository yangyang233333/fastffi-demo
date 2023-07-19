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

int get_field1(MyStruct_t* ptr) {
    return ptr->a;
}

double get_field2(MyStruct_t* ptr) {
    return ptr->b;
}

