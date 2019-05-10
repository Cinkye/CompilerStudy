// A file to deal with "for" clause
package inter;

import symbols.Type;

public class For extends Stmt {

   Expr expr; Stmt stmt;

   public For() {
      expr = null; stmt = null;  // expression and statements generated to be null
   }

   public void init(Expr x, Stmt s) {
      expr = x;  stmt = s;    // Initialize expression and statement
      if( expr.type != Type.Bool ) expr.error("boolean required in for");     // Output error if no boolean expression provided
   }

   // Another solution
   // Expr expr; Stmt stmt1; Stmt stmt2; Stmt stmt3; 
	
	// public For() { expr = null; stmt1 = null; stmt2 = null; stmt3 = null; }
	
	// public void init(Stmt s1, Expr x, Stmt s2, Stmt s3) {
	// 	expr = x; stmt1 = s1; stmt2 = s2; stmt3 = s3;
	// 	if( expr.type != Type.Bool ) expr.error("boolean required in do");
	// }

   public void gen(int b, int a) {}    // Function generate
   
   public void display(){     // Output
	   emit("stmt : for begin");
	   stmt.display();
	   emit("stmt : for end");
   }
}
//Input for test
//{for(int i = 0;i < 10;i = i + 1;){}}
//{for(int i = 0;i < 10;i = i + 1;){for(int j = 0;j < 10;j = j + 1;){int q;q = i + 1;}}}
//{int i =0;while(i < 5){while(i < 3){}}}