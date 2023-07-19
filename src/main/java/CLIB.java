import com.alibaba.fastffi.CXXHead;
import com.alibaba.fastffi.FFIGen;
import com.alibaba.fastffi.FFILibrary;
import com.alibaba.fastffi.FFITypeFactory;

@FFIGen(library = "native")
@FFILibrary(value = "cmath", namespace = "")
@CXXHead(system="cmath")
public interface CLIB {
    CLIB LIBRARY = FFITypeFactory.getLibrary(CLIB.class);

    int abs(int v);
    double pow(double x, double y);
}
