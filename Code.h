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
	void SetCode(int code[]);
	void PrintCode();

private:
	const static int num_code  = 4;
	const static int num_color = 6;
	int code[num_code] = {0};
};

#endif /* CODE_H_ */
