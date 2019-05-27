package inter;

import symbols.Type;

public class Case extends Stmt {
	
	Id n1; String n2;Stmt stmt;
	
	public Case() { n1=null; n2=null; stmt=null;}
	
	
	public void init(Id id1, String id2, Stmt s) {
		n1=id1; n2=id2; stmt=s;
	}
	
	public void gen(int b,int a) {
		int label = newlabel();
		emit("if_false " + n1 + " == " + n2 + " goto L" + label);
		stmt.gen(b,a);
		emitlabel(label);
	}
}