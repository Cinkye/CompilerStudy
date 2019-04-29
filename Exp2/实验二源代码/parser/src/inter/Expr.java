// A file to deal with expressions
package inter;

import symbols.Type;
import lexer.Token;

public class Expr extends Node{

	public Token op;	// Operator
	public Type type;	// Return type
	
	Expr(Token tok, Type p) { op = tok; type = p; }
	
	public Expr gen() { return this;}		// Function generate
	public Expr reduce() { return this;}	// Function reduce
	
	public void jumping(int t, int f) {}
	
	public void emitjumps(String test, int t, int f){}
	public String toString() { return op.toString(); }	// Output
	
}
