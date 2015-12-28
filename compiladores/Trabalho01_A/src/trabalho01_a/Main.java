public class Main {
    public static void main( String []args ) {
        char []input = ("a = 5 W a [D a P a ] b = 0 I b [ P b R c P c]").toCharArray();
        
        Compiler compiler = new Compiler();
        compiler.compile(input);
    }
}
       