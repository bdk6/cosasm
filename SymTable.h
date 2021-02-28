/*
 * SymTable.h
 *
 *  Created on: Feb 28, 2021
 *      Author: wrcooke
 */

#ifndef SYMTABLE_H_
#define SYMTABLE_H_

#include <stdint.h>
#include <string.h>


#include "Configuration.h"

typedef enum SYMTYPE
{
	SYM_UNDEF      = 0,
	SYM_LABEL,
	SYM_SET,
	SYM_EQU,
	SYM_INSTR,

}SymbolType_t;

class Symbol
{
public:
	Symbol(char* nm, SymbolType_t t, Value_t t = 0, bool d = false)
{
		strncpy(name, nm, SYM_MAX_LENGTH);
}

private:
	char name[SYM_MAX_LENGTH + 1];
	SymbolType_t typ;
	Value_t      val;
	bool         defined;


};


class SymbolTable
{
public:
	SymbolTable();
	SymbolType_t getType(char *name);
private:

};




#endif /* SYMTABLE_H_ */
