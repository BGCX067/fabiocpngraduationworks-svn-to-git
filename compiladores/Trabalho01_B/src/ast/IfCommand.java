package AST;

public class IfCommand extends Command{

    
    public IfCommand(Value vl, Command cd) {
        value=vl;
        command=cd;        
    }
    
    
    public void genC(){
        System.out.println("if(" + value.getValue() + "==0)");
        command.genC();
    }
    
    
    private Value value;
    private Command command;
}
