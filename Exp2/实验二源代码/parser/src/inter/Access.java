// A file to access an element in a array
package inter;

import symbols.Type;
import lexer.Tag;
import lexer.Word;

public class Access extends Op{

	public Id array;	// The identifier of the array
	public Expr index;	// An expression that calculate the offset
	public Access(Id a, Expr i, Type p){
		super(new Word("[]",Tag.INDEX),p);
		array=a; index = i;
	}	// Constructor
	
	public Expr gen() { return new Access(array, index.reduce(),type); }	// Function enerate
	
	public void jumping(int t, int f) {}
	
	public String toString() {
		return array.toString()+" [ "+index.toString()+" ]";
	}	// Output
}
