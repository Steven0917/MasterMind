/*
 * CodeBreaker.h
 *
 *  Created on: 14 Jul, 2016
 *      Author: tengx
 */

#ifndef CODEBREAKER_H_
#define CODEBREAKER_H_

#include "Code.h"
#include "Keys.h"

class CodeBreaker {
public:
	CodeBreaker();
	virtual ~CodeBreaker();

	virtual void Guess(Code& guess) = 0;
	//virtual void BreakCode() = 0;
};

#endif /* CODEBREAKER_H_ */
