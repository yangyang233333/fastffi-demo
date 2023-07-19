public class Main {
    public static void main(String[] args) {
        System.out.println(System.getProperty("java.library.path"));
        int ans = CLIB.LIBRARY.abs(-2);
        System.out.println("abs=" + ans);

        MyStructPtr ptr = LGraphAPI.LIBRARY.MyStruct_t_cteate(1, 2);
        System.out.println(LGraphAPI.LIBRARY.get_field1(ptr));
        System.out.println(LGraphAPI.LIBRARY.get_field2(ptr));

    }
}