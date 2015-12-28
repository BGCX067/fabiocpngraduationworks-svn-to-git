package AST;

public class ReadCommand extends Command {
    

    public ReadCommand(VariableValue var) {
        variable = var;
    }
    

    public void genC(){
       System.out.println("scanf(\"%d\",&" + variable.getValue() + ");" );        
    }
    
    
    private VariableValue variable;
    
}
