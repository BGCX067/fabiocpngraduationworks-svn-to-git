
package trabalho01_b;
import AST.*;
import java.util.Vector;

public class Compiler {

    
    public Program compile( char []p_input ) {
        Program program;
        input = p_input;
        tokenPos = 0;
        nextToken();
        program = program();
        if ( token != '\0' )
          error("Fim inesperado");
        program.setInit(true);
        return program;
    }
    
    
    private Program program(){
        Program program;
        Vector commandList = new Vector();
        
        commandList.addElement(command());
        while ( ( token == 'P' ) || ( token == 'R' ) || ( token == 'N' ) || ( token == 'D' ) || ( token == 'I' ) || ( token == 'W' ) || ( token == '[' ) || ( token<='z' && token>='a' ) ){
            commandList.addElement(command());
        }
        program = new Program(commandList);
        return program;
    }

    
    private Command command(){
        Command result = null;
        switch ( token ){
            case 'P':
                result = printCommand();
                break;
            case 'R':
                result = readCommand();
                break;
            case 'N':
                result = incCommand();
                break;
            case 'D':
                result = decCommand();
                break;
            case 'I':
                result = ifCommand();
                break;
            case 'W':
                result = whileCommand();
                break;
            case '[':
                result = compositeCommand();
                break;
            default:
                if ( token <= 'z' && token >= 'a' )
                    result = assignCommand();
                else
                    error("Comando inexistente");
        }
        return result;
    }

    
    private AssignCommand assignCommand(){
        VariableValue variable = variable();
        if ( token == '=' ){
            nextToken();
              Value value = value();
              AssignCommand ac = new AssignCommand(variable, value);
              return ac;
        }
        else {
            error("Simbolo de atribuicao esperado");
            return null;
        }
    }
    
    
    private WhileCommand whileCommand(){
        nextToken();
        Value value = value();
        Command command = command();
        WhileCommand wc = new WhileCommand(value, command);
        return wc;
    }

    
    private IfCommand ifCommand(){
        nextToken();
        Value value = value();
        Command command = command();
        IfCommand ic = new IfCommand(value, command);
        return ic;
    }
    
    
    private DecCommand decCommand(){
        nextToken();
        DecCommand dc = new DecCommand(variable());
        return dc;        
    }
    

    private IncCommand incCommand(){
        nextToken();
        IncCommand ic = new IncCommand(variable());
        return ic;
    }
    
    
    private CompositeCommand compositeCommand(){
        nextToken();
        Program program = program();
        program.setInit(false);
        CompositeCommand cc = new CompositeCommand(program); 
        nextToken();
        return cc;
    }
    
    
    private ReadCommand readCommand(){
        nextToken();
        ReadCommand rc = new ReadCommand(variable());
        return rc;
    }
    
    
    private PrintCommand printCommand() {
        nextToken();
        PrintCommand pc = new PrintCommand(value());
        return pc;
    }
        
    
    private Value value() {
        Value result = null;
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
    
    
    private NumberValue number() {
        NumberValue result = null;
        
        if ( token >= '0'  && token <= '9' ) {
            result = new NumberValue(token);
            nextToken();
        }
        else
          error("Numero esperado");
        return result;
    }

    
    private VariableValue variable() {
        VariableValue result = null;
        if ( token <= 'z' && token >= 'a' ){
            result = new VariableValue(token);
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
    
    
    