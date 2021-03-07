/*
 * Scanner.cpp
 *
 *  Created on: Mar 6, 2021
 *      Author: wrcooke
 */

#include <stdint.h>
#include <stdio.h>

#include "Scanner.h"

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
		// skip whitespace

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

