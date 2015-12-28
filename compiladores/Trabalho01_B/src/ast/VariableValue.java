package AST;
public class VariableValue extends Value{
    

    public VariableValue(char letra) {
        Letra = letra;
    }
    
    
    public char getValue(){
        return Letra;
    }
    
    
    private char Letra;
}
