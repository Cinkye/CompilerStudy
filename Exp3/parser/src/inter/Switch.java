package inter;

import symbols.Type;
import java.util.ArrayList;

import inter.Case;
import inter.Default;

public class Switch extends Stmt {
	Id n; Expr expr; Stmt stmt;
	ArrayList<Case> arraylist=new ArrayList<Case>();
	Default d;
	public Switch() {n=null; expr=null; stmt=null; d=null;}
	
	public void init(Id id1, Default de) {
		n = id1; d = de;
	}
	
	public void store(Case c) {
		arraylist.add(c);
	}
	
	public void gen(int b,int a) {
		 for(int i=0;i<arraylist.size();++i) {
		 	arraylist.get(i).gen(b+i,b+i+1);
		 }
		 if(d != null)
		 	d.gen(b+arraylist.size(),0);
	}
}