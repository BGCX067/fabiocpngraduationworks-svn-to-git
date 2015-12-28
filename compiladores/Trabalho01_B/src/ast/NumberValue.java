package AST;

public class NumberValue extends Value{
    

    public NumberValue(char letra) {
        n=letra;
    }
    
    
    public char getValue(){
        return n;
    }
    
    
    private char n;
    
}
