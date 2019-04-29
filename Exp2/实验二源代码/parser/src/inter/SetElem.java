// A file to deal with a statement that assign a value to an element in an array
package inter;

import symbols.Array;
import symbols.Type;

public class SetElem extends Stmt {

   public Id array; public Expr index; public Expr expr;

   public SetElem(Access x, Expr y) {
      array = x.array; index = x.index; expr = y;
      if ( check(x.type, expr.type) == null ) error("type error");
   }

   public Type check(Type p1, Type p2) {     // Check if the element and the return value of the expression are the same type
      if ( p1 instanceof Array || p2 instanceof Array ) return null;    // Cannot assign an array to another
      else if ( p1 == p2 ) return p2;     // Same type
      else if ( Type.numeric(p1) && Type.numeric(p2) ) return p2;    // Both numeric, may be converted to the same type
      else return null;
   }

   public void gen(int b, int a) {}    // Function generate
   
   public void display(){     // Output
	   emit(" assignment ");
   }
}
