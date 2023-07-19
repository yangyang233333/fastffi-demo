import com.alibaba.fastffi.*;

@FFIGen(library = "native")
@FFITypeAlias("MyStruct_t")
@CXXHead("c.h")
public interface MyStructPtr extends FFIPointer{

}
