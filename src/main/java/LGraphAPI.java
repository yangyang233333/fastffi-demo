
import com.alibaba.fastffi.*;

@FFIGen(library = "native")
@FFILibrary(value = "cmath", namespace = "")
@CXXHead("c.h")
public interface LGraphAPI {
    LGraphAPI LIBRARY = FFITypeFactory.getLibrary(LGraphAPI.class);

    MyStructPtr MyStruct_t_cteate(int a, double b);

    int get_field1(MyStructPtr ptr);

    double get_field2(MyStructPtr ptr);
}
