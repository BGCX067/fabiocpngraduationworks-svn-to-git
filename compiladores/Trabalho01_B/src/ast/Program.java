package AST;

import java.util.*;

public class Program {
    public Program( Vector CommandList ) {
        this.commandList = CommandList;
    }

    
    public void genC() {
        if (init){
            System.out.println("#include <stdio.h>\n");        
            System.out.println("main(){");
            System.out.println("int a,b,c,d,e,f,g,h,i,j,k,l,n,o,p,q,r,s,t,u,v,x,z,w,y;");
        }

        if ( commandList != null ) {
             // generate code for the declaration of variables
           Enumeration e = commandList.elements();
           while ( e.hasMoreElements() )
             ((Command) e.nextElement()).genC();
        }
        else {
            System.err.println("Nenhum comando encontrado.");
        }
        
        if ( init )
            System.out.println("}");        
    }                         
    
    
    public void setInit(boolean initial){
        init = initial;
    }
    
    
    private Vector commandList;
    private boolean init=true;
}