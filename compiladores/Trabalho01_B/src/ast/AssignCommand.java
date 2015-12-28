package AST;

public class AssignCommand extends Command{
    public AssignCommand(VariableValue vv, Value vl) {
        variable = vv;
        value = vl;
    }

    
    public void genC(){
            System.out.println(variable.getValue() + "=" + value.getValue() + ";");
    }
    
    
    private VariableValue variable;
    private Value value;
    
}
