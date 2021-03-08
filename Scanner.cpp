/*
 * Scanner.cpp
 *
 *  Created on: Mar 6, 2021
 *      Author: wrcooke
 */

#include <stdint.h>
#include <stdio.h>
#include <ctype.h>


#include "Scanner.h"

#define EOL  '\n'
static bool rescan = false;

static token_t lastToken;

static FILE* inFile = NULL;
static int thisLine = 0;
static int thisPos = 0;


int openFile(char* name)
{
	int rtn = 0;


	return rtn;
}


int closeFile()
{
	int rtn = 0;


	return rtn;
}

static int nextChar()
{
	int rtn = -1;

	return rtn;
}

static int ungetChar(int ch)
{
	int rtn = 0;

	return rtn;
}

static int skipWhite()
{
	int rtn = 0;

	return rtn;
}

static bool isLetter(int ch)
{
	bool rtn = false;
	if( (ch >= 'a' && (ch <= 'z') || (ch >= 'A' && ch <= 'Z') || ch == '_'))
	{
		rtn = true;
	}
	return rtn;
}


token_t scan()
{
	token_t rtn;
	if(rescan)
	{
		rescan = false;
		rtn = lastToken;
	}
	else
	{
		skipWhite();
		int ch = nextChar();
		rtn.line = thisLine;
		rtn.pos = thisPos;
		if(EOL == ch)
		{
			// end of line
		}
		else if(isalpha(ch) || ch == '_')
		{
			rtn.typ == TOK_IDENT;
		}
		else if(isdigit(ch))
		{
			rtn.typ == TOK_INT;
		}

	}


	return rtn;
}
bool unscan()
{
	bool rtn;
	if(rescan)
	{
		rtn = false;
	}
	else
	{
		rescan = true;
		rescan = true;
	}

	return rtn;
}

