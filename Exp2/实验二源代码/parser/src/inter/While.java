// A file to deal with "while" clause
package inter;

import symbols.Type;

public class While extends Stmt {

   Expr expr; Stmt stmt;

   public While() { expr = null; stmt = null; }

   public void init(Expr x, Stmt s) {  // Initialize the expression and the statements
      expr = x;  stmt = s;
      if( expr.type != Type.Bool ) expr.error("boolean required in while");   // Output error if no boolean expression provided
   }
   public void gen(int b, int a) {}    // Function generate
   
   public void display() {    // Output
	   emit("stmt : while begin");
	   stmt.display();
	   emit("stmt : while end");
   }
}
