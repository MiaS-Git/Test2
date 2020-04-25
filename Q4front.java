//I will be honest and admit that i gave up at a point

import java.io.File; 
import java.util.*;
import java.io.*; 

class front{

static int charClass;
static char[] lexeme = new char[100];
static char nextChar;
static int lexLen;
static int token;
static int nextToken;
static File in_fp;
static int EOF = (Integer)null;

/* Character classes */
final static int LETTER = 0;
final static int DIGIT =1;
final static int UNKNOWN = 99;

/* Token codes */
final static int INT_LIT = 10;
final static int IDENT = 11;
final static int ASSIGN_OP = 20;
final static int ADD_OP = 21;
final static int SUB_OP = 22;
final static int MULT_OP = 23;
final static int DIV_OP = 24;
final static int LEFT_PAREN = 25;
final static int RIGHT_PAREN  = 26;

/******************************************************/
/* main driver */
public static void main(char[] args) {
	/* Open the input data file and process its contents */
  FileReader reader = new FileReader("front.in");
  BufferedReader bfreader = new BufferedReader(reader);
	 if (reader == null)
	 	System.out.println("ERROR - cannot open front.in \n");
	 else {
	 	getChar();
	 do {
	 	lex();
	 } while (nextToken != EOF);
	 }
}
/******************************************************/
/* lookup - a function to look up operators and
 parentheses and return the token */
public static int lookup(char ch) {
	 switch (ch) {
		 case '(':
			 addChar();
			 nextToken = LEFT_PAREN;
			 break;
		 case ')':
			 addChar();
			 nextToken = RIGHT_PAREN;
			 break;
		 case '+':
			 addChar();
			 nextToken = ADD_OP;
			 break;
		 case '-':
			 addChar();
			 nextToken = SUB_OP;
			 break;
		 case '*':
			 addChar();
			 nextToken = MULT_OP;
			 break;
		 case '/':
			 addChar();
			 nextToken = DIV_OP;
			 break;
		 default:
			 addChar();
			 nextToken = EOF;
			 break;
	 }
	 return nextToken;
}

/******************************************************/
/* addChar - a function to add nextChar to lexeme */
public static void addChar() {
	if (lexLen <= 98) {
		lexeme[lexLen++] = nextChar;
		lexeme[lexLen] = '\0';
	} else
	System.out.println("Error - lexeme is too long \n");
}


/******************************************************/

public static void getChar() {
	 if ((nextChar = getChar(in_fp)) != EOF) {
		 if (isalpha(nextChar))
		 	charClass = LETTER;
		 else if (isdigit(nextChar))
		 	charClass = DIGIT;
		 else
		 	charClass = UNKNOWN;
	 } else
	 	charClass = EOF;
}
/******************************************************/
/* getNonBlank - a function to call getChar until it
 returns a non-whitespace character */
public static void getNonBlank() {
	while (isspace(nextChar))
	getChar();
}

/******************************************************/
/* lex - a simple lexical analyzer for arithmetic
 expressions */
public static void lex() {
	 lexLen = 0;
	 getNonBlank();
	 switch (charClass) {
		/* Identifiers */
		 case LETTER:
			 addChar();
			 getChar();
			 while (charClass == LETTER || charClass == DIGIT) {
				 addChar();
				 getChar();
			 }
			 nextToken = IDENT;
			 break;
		/* Integer literals */
		 case DIGIT:
			 addChar();
			 getChar();
			 while (charClass == DIGIT) {
				 addChar();
				 getChar();
			 }
			 nextToken = INT_LIT;
		 	break;
		/* Parentheses and operators */
		 case UNKNOWN:
			 lookup(nextChar);
			 getChar();
			 break;
			/* EOF */
		case EOF:
			 nextToken = EOF;
			 lexeme ="EOF";
		 	break;
	 } /* End of switch */
	 System.out.println("Next token is: " + nextToken +  ", Next lexeme is "+ lexeme +"\n");
	 return nextToken;
} /* End of function lex */
}