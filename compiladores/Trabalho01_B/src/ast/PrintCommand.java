package AST;

public class PrintCommand extends Command{
    

    public PrintCommand(Value valor) {
        Valor = valor;
    }
    
    
    public void genC(){
        System.out.println("printf(\"%d\"," + Valor.getValue() + ");" );
    }
 
    
    private Value Valor;
}
