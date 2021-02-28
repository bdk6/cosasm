/*
 * SymTable.h
 *
 *  Created on: Feb 28, 2021
 *      Author: wrcooke
 */

#ifndef SYMTABLE_H_
#define SYMTABLE_H_

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

private:

};


class SymbolTable
{
public:
	SymbolTabel();
	SymbolType_t getType();
private:

};




#endif /* SYMTABLE_H_ */
