extern "C" {
    typedef struct MyStruct {
            int a;
            double b;
    } MyStruct_t;

    extern MyStruct_t* MyStruct_t_cteate(int a, double b);
}