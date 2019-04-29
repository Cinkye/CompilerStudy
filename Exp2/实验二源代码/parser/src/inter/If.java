// A file to deal with if clause without else
package inter;

import symbols.Type;

public class If extends Stmt {

   Expr expr; Stmt stmt;   // expr determines whether to execute stmt or not

   public If(Expr x, Stmt s) {
      expr = x;  stmt = s;
      if( expr.type != Type.Bool ) expr.error("boolean required in if");      // Output error if no boolean expressions provided
   }

   public void gen(int b, int a) {}    // Function generate
   
   public void display(){     // Output
	   emit("stmt : if begin");
	   //expr
	   stmt.display();
	   emit("stmt : if end");
   }
}
