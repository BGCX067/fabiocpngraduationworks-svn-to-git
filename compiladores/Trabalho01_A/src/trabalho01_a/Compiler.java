public class Compiler {

    
    public void compile( char []p_input ) {
        System.out.println("main(){");
        System.out.println("int a, b, c, d, e, f, g, h, i, j, k, l, n, o, p, q, r, s, t, u, v, x, z, w, y;");
        input = p_input;
        tokenPos = 0;
        nextToken();
        program();
        if ( token != '\0' )
          error("Fim inesperado");
        
        System.out.println("}");
    }
    
    
    private void program(){
        command();
        while ( ( token == 'P' ) || ( token == 'R' ) || ( token == 'N' ) || ( token == 'D' ) || ( token == 'I' ) || ( token == 'W' ) || ( token == '[' ) || ( token <= 'z' && token >= 'a' ) ){
            command();
        }
    }

    
    private void command(){
        switch ( token ){
            case 'P':
                printCommand();
                break;
            case 'R':
                readCommand();
                break;
            case 'N':
                incCommand();
                break;
            case 'D':
                decCommand();
                break;
            case 'I':
                ifCommand();
                break;
            case 'W':
                whileCommand();
                break;
            case '[':
                compositeCommand();
                break;
            default:
                if ( token <= 'z' && token >= 'a' )
                    assignCommand();
                else
                    error("Comando inexistente");
        }
    }
    
    
    private void assignCommand(){
        char left = variable();
        if ( token == '=' ){
            nextToken();
            char right = value();
            System.out.println(left + "=" + right + ";");            
        }
        else
            error("Simbolo de atribuicao esperado");
    }
    
    
    private void whileCommand(){
        nextToken();
        char letra = value();
        System.out.println("while ( " + letra + " != 0 )");
        command();
    }
    
    
    private void ifCommand(){
        nextToken();
        char letra = value();
        System.out.println("if ( " + letra + " == 0 )");
        command();
    }
    
    
    private void decCommand(){
        nextToken();
        char letra = variable();
        System.out.println(letra + "--;");        
    }
    
    
    private void incCommand(){
        nextToken();
        char letra = variable();
        System.out.println(letra + "++;");        
    }
    
    
    private void compositeCommand(){
        nextToken();
        System.out.println("{");
        program();
        nextToken();
        System.out.println("}");    
    }
    
    
    private void readCommand(){
        nextToken();
        char letra = variable();
        System.out.println("scanf(\"%d\",&" + letra + ");" );
    }
    
    
    private void printCommand() {
        nextToken();
        char letra = value();
        System.out.println("printf(\"%d\"," + letra + ");" );
    }
        
    
    private char value() {
        char result = 0;
        if ( token >= '0'  && token <= '9' ) {
            result = number();
        }
        else
            if ( token <= 'z' && token >= 'a' ){
                result = variable();
            }        
            else
                error("Numero ou Variavel esperado");
        
        return result;
        
    }
    
    
    private char number() {
        char result = 0;    
        if ( token >= '0' && token <= '9' ) {
            result = token;
            nextToken();
        }
        else
          error("Numero esperado");
        return result;
    }
    
    
    private char variable() {
        char result = 0;
        if ( token <= 'z' && token >= 'a' ){
            result = token;
            nextToken();
        }
        else
            error("Variavel Esperado");
        return result;
    }

    
    private void nextToken() {
        while (  tokenPos < input.length && input[tokenPos] == ' ' ) 
          tokenPos++;
        if ( tokenPos < input.length ) {
          token = input[tokenPos];        
          tokenPos++;
        }
        else
          token = '\0';
    }
    
    private void error(String errorstring) {
        if ( tokenPos == 0 ) 
          tokenPos = 1; 
        else 
          if ( tokenPos >= input.length )
            tokenPos = input.length;
        
        String strInput = new String( input, tokenPos - 1, input.length - tokenPos + 1 );
        String strError = "Error at \"" + strInput + "\"";
        System.err.println(errorstring);
        System.out.print( strError );
        throw new RuntimeException(strError);
    }
    
    private char token;
    private int  tokenPos;
    private char []input;
    
}
    
    
    