// A file to deal with an if-else clause
package inter;

import symbols.Type;

public class Else extends Stmt {

   Expr expr; Stmt stmt1, stmt2;    // expr to determine the branch to execute, stmt1 for the expr to be true, 
                                    // stmt2 for the expr to be false.

   public Else(Expr x, Stmt s1, Stmt s2) {
      expr = x; stmt1 = s1; stmt2 = s2;
      if( expr.type != Type.Bool ) expr.error("boolean required in if");   // Output error if no boolean expression is provided
   }
   public void gen(int b, int a) {}    // Function generate
   
   public void display(){     // Output
	   emit("stmt : else begin");
	   emit("if true");
	   stmt1.display();
	   emit("else");
	   stmt2.display();
	   emit("stmt : else end");
   }
}
