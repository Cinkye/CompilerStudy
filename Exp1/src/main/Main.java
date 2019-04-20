package main;

import java.io.IOException;
import java.util.Hashtable;

import lexer.Lexer;
import lexer.Token;

public class Main {
	public static void main(String[] args) throws IOException {
		Lexer lexer = new Lexer();
		char c;
		do {
			Token token=lexer.scan();
			switch (token.tag) {
			case 270:
			case 272:
				System.out.println("(NUM , "+token.toString()+")");
				break;
			case 264:
				System.out.println("(ID , "+token.toString()+")");
				break;
			case 256:
			case 257:
			case 258:
			case 259:
			case 260:
			case 262:
			case 265:
			case 274:
			case 275:
			case 276:
			case 277:
			case 278:
			case 279:
			case 280:
			case 281:
			case 282:
			case 283:
			case 284:
			case 285:
			case 286:
			case 287:
			case 288:
			case 289:
			case 290:
			case 291:
			case 292:
				System.out.println("(KEY , "+token.toString()+")");
				break;
			case 404:
				System.out.println("@is invalid");
				break;
			case 13:
				break;
			default:
				System.out.println("(SYM , "+token.toString()+")");
				break;
			}
			
		} while (lexer.getPeek()!='\n');
	}
}
