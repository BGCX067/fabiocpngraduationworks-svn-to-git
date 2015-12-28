package AST;


public class WhileCommand extends Command{
    

    public WhileCommand(Value vl, Command cm) {
        value = vl;
        command = cm;
    }
    
    
    public void genC(){
        System.out.println("while (" + value.getValue() + " != 0)");
        command.genC();       
    }
    
    
    private Command command;
    private Value value;
    
}
