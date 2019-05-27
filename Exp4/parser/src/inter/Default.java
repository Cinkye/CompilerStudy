package inter;

import symbols.Type;

public class Default extends Stmt {

   Stmt stmt;

   public Default (Stmt s) {
      stmt = s;
   }
   public void gen(int b, int a) {
      stmt.gen(b,a);
   }
}

