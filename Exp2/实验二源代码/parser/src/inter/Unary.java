// A file to deal with one-operand operators
package inter;

import symbols.Type;
import lexer.Token;

public class Unary extends Op {

   public Expr expr;	// Operand

   public Unary(Token tok, Expr x) {    // handles minus, for ! see Not
      super(tok, null);  expr = x;
      type = Type.max(Type.Int, expr.type);
      if (type == null ) error("type error");
   }

   public Expr gen() { return new Unary(op, expr.reduce()); }	// Function generate

   public String toString() { return op.toString()+" "+expr.toString(); }	// Output
}

