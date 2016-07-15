/*
 * Code.h
 *
 *  Created on: 14 Jul, 2016
 *      Author: tengx
 */

#ifndef CODE_H_
#define CODE_H_

#include "Keys.h"

class Code {
public:
	Code();
	virtual ~Code();

	void CheckGuess(Code& guess, Keys& keys);
	void MakeRandomCode();
	bool SetCode(char code[]);
	bool isValid(char code[]);
	bool SetCodeASC2(char code[]);
	bool isValidASC2(char code[]);
	void PrintCode();
	void Reset();
	bool isValid();
	void SetCode(char m, char n, char j, char k);


public:
	const static char num_code  = 4;
	const static char num_color = 6;

private:
	char code[num_code] = {0};
};

#endif /* CODE_H_ */
