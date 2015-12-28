package AST;

public class IncCommand extends Command{
    

    public IncCommand(VariableValue var) {
        variable=var;
    }
    
    
    public void genC(){
        System.out.println(variable.getValue() + "++;");        
    }
    
    
    private VariableValue variable;
    
}
