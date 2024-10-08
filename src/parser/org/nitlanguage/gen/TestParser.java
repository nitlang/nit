/* This file is part of NIT ( https://nitlanguage.org ).
 *
 * This file is free software, which comes along with NIT.  This software is
 * distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 * without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
 * PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
 * is kept unaltered, and a notification of the changes is added.
 * You  are  allowed  to  redistribute it and sell it, alone or is a part of
 * another product.
 */

package org.nitlanguage.gen;

import java.io.*;
import java.nio.file.*;

import org.nitlanguage.gen.lexer.*;
import org.nitlanguage.gen.parser.*;
import org.nitlanguage.gen.analysis.*;
import org.nitlanguage.gen.node.*;

public class TestParser extends DepthFirstAdapter {
	public static void main(String[] args) throws Exception {
		if (args.length == 0) {
			BufferedReader ir = new BufferedReader(new InputStreamReader(System.in));
			work(ir);
		} else {
			for(int i=0; i<args.length; i++) {
				//System.out.println(args[i]);

				//Here we use "ISO-8859-1" because we want to opaquely treat Bytes as characters.
				//Unfortunately "US-ASCII" does not seems to do the job for values>127.
				BufferedReader ir = new BufferedReader(new InputStreamReader(new FileInputStream(args[i]), "ISO-8859-1"));

				work(ir);
			}
		}
	}

	public static void work(BufferedReader ir) {
		TestParser testParser = new TestParser();
		try {
			PushbackReader r = new PushbackReader(ir, 1024);
			Parser parser = new Parser(new Lexer(r));
			Node syntaxTree = parser.parse();
			syntaxTree.apply(testParser);
		} catch (LexerException e) {
			System.out.println(e.getMessage() + ".");
		} catch (ParserException e) {
			System.out.println(e.getMessage() + ".");
		} catch (IOException e) {
			System.out.println(e.getMessage() + ".");
			System.exit(1);
		}
	}
}
