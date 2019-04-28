package inter;

import symbols.Type;

public class For extends Stmt {

   Expr expr; Stmt stmt;

   public For() {
      expr = null; stmt = null;
   }

   public void init(Expr x, Stmt s) {
      expr = x;  stmt = s;
      if( expr.type != Type.Bool ) expr.error("boolean required in for");
   }

   public void gen(int b, int a) {}
   
   public void display(){
	   emit("stmt : for begin");
	   stmt.display();
	   emit("stmt : for end");
   }
}
//Input for test
//{for(int i = 0;i < 10;i = i + 1;){}}
//{for(int i = 0;i < 10;i = i + 1;){for(int j = 0;j < 10;j = j + 1;)}}
//{int i =0;while(i < 5){while(i < 3){}}}