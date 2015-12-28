package AST;

public class CompositeCommand extends Command {
    public CompositeCommand( Program pg ) {
        program = pg; 
    }
    
    
    public void genC() {
        System.out.println("{");
        program.genC();
        System.out.println("}");
    }
    
    
    private Program program;
}

