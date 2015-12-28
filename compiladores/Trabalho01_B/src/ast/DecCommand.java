package AST;
  public class DecCommand extends Command{
      
      
    public DecCommand(VariableValue var) {
        variable=var;
    }
    
    
    public void genC(){
       System.out.println(variable.getValue() + "--;");       
    }
    
    
    private VariableValue variable;
    
}
