// A file to deal with identifiers
package inter;

import symbols.Type;
import lexer.Word;

public class Id extends Expr {
	
	public int offset;	// size
	public Id(Word id, Type p, int b) { super(id,p); offset=b; }
}
