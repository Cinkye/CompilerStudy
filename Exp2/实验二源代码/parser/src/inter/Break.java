// A file to deal with keyword "break" 
package inter;

public class Break extends Stmt {
   Stmt stmt;

   public Break() {
      if( Stmt.Enclosing == Stmt.Null ) error("unenclosed break");	// detect illegal break
      stmt = Stmt.Enclosing;
   }	// Constructor

   public void gen(int b, int a) {}
   
   public void display(){	// Output
	   emit(" break ");
   }
}
