
import AST.*;

public class Main {
    public static void main( String []args ) {
        
        Program program;
        
        char []input = ("a = 5 W a [D a P a ] b = 0 I b [ P b R c P c]").toCharArray();
        
        trabalho01_b.Compiler compiler = new trabalho01_b.Compiler();
        program = compiler.compile(input);
        System.out.println();
        
        program.genC();
    }
}
        