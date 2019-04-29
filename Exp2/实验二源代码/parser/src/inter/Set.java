// A file to deal with a statement that assign a value to a variable
package inter;

import symbols.Type;

public class Set extends Stmt {

   public Id id; public Expr expr;

   public Set(Id i, Expr x) {
      id = i; expr = x; // id = expression
      if ( check(id.type, expr.type) == null ) error("type error");  
   }

   public Type check(Type p1, Type p2) {     // Check if the type of id and expression are the same
      if ( Type.numeric(p1) && Type.numeric(p2) ) return p2;
      else if ( p1 == Type.Bool && p2 == Type.Bool ) return p2;
      else return null;
   }

   public void gen(int b, int a) {}    // Function generate
   
   public void display(){     // Output
	   emit(" assignment ");
   }
}