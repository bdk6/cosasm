/*
 * Assemble.cpp
 *
 *  Created on: Mar 2, 2021
 *      Author: wrcooke
 */
#include "Assemble.h"
#include "Scanner.h"

static int lineNumber = 0;
static int charNumber = 0;

static int nextChar()
{
	int rtn = 0;
	lineNumber++;
	charNumber++;

	return rtn;
}
static int getToken()
{
	int rtn = 0;

	return rtn;
}

static int assembleLine()
{
	int rtn = 0;
	scan();

	return rtn;
}
int assembleFile(const char * filename)
{
	assembleLine();
	int rtn = 0;
	// open file

	// pass 1

	// pass 2

    // close file

	return rtn;
}


