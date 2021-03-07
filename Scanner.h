/*
 * Scanner.h
 *
 *  Created on: Mar 6, 2021
 *      Author: wrcooke
 */

#ifndef SCANNER_H_
#define SCANNER_H_

#include <stdint.h>


//  Token types
//  ident   letter {letter|digit}
//  number  digit {digit} | $ hexdigit {hexdigit}

typedef enum TOKEN_TYPE
{
	TOK_UNDEF       = 0,
	TOK_IDENT,
	TOK_INT,

} tokenType_t;

typedef struct TOKEN
{
	char name[32];
	tokenType_t typ;
	uint32_t value;
	uint32_t line;
	uint32_t pos;

} token_t;

int openFile(char* name);
int closeFile();
token_t scan();
bool unscan();







#endif /* SCANNER_H_ */
