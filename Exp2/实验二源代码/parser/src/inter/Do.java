// A file to deal with the "do" clause
package inter;

import symbols.Type;

public class Do extends Stmt {

   Expr expr; Stmt stmt;

   public Do() { expr = null; stmt = null; }    // Default expression and statements to be empty

   public void init(Stmt s, Expr x) {  // Initialize the clause
      expr = x; stmt = s;
      if( expr.type != Type.Bool ) expr.error("boolean required in do");   // Output error if no boolean expression provided
   }

   public void gen(int b, int a) {}    // Function generate
   
   public void display(){     // Output
	  emit("stmt : do begin");
	  stmt.display();
	  //expr.jumping(b,0);
	  emit("stmt : do end");
   }
}