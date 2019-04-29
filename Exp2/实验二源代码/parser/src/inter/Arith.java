// A file to deal with arithmetic operators
package inter;

import symbols.Type;
import lexer.Token;

public class Arith extends Op {

	   public Expr expr1, expr2;	// two expression operands of the operators

	   public Arith(Token tok, Expr x1, Expr x2)  {
	      super(tok, null); expr1 = x1; expr2 = x2;
	      type = Type.max(expr1.type, expr2.type);
	      if (type == null ) error("type error");
	   }	// Constructor

	   public Expr gen() {
	      return new Arith(op, expr1.reduce(), expr2.reduce());
	   }	// Function generate

	   public String toString() {
	      return expr1.toString()+" "+op.toString()+" "+expr2.toString();
	   }	// Output
	}
