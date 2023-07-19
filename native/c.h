extern "C" {
    typedef struct MyStruct {
            int a;
            double b;
    } MyStruct_t;

    extern MyStruct_t* MyStruct_t_cteate(int a, double b);

    extern int get_field1(MyStruct_t* ptr);

    extern double get_field2(MyStruct_t* ptr);
}