public class Main {
    public static void main(String[] args) {
        System.out.println(System.getProperty("java.library.path"));
        int ans = CLIB.LIBRARY.abs(-2);
        System.out.println(ans);
//        MyStructPtr ptr = LGraphAPI.LIBRARY.MyStruct_t_cteate(1, 2);
//        CString.LIBRARY.strcmp(1, 23);

    }
}