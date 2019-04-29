// A file to deal with the operators
package inter;

import symbols.Type;
import lexer.Token;

public class Op extends Expr{
	public Op(Token tok, Type p) { super(tok,p); }		// Constructor that initialize the token and type
	
	public Expr reduce()		// Function reduce
	{
		Expr x = gen();
		Temp t = new Temp(type);
		emit(t.toString()+" = "+x.toString());
		return t;
	}
}
