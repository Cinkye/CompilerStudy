// A file to deal with constants
package inter;

import symbols.Type;
import lexer.Num;
import lexer.Token;
import lexer.Word;

public class Constant extends Expr {

	   public Constant(Token tok, Type p) { super(tok, p); }	// A const variable
	   public Constant(int i) { super(new Num(i), Type.Int); }	// A number

	   // Define constant "true" and "false"
	   public static final Constant
	      True  = new Constant(Word.True,  Type.Bool),
	      False = new Constant(Word.False, Type.Bool);	

	   public void jumping(int t, int f) {}
	}

