/*
 * CodeBreaker.h
 *
 *  Created on: 14 Jul, 2016
 *      Author: tengx
 *
 *  Abstract Class only.
 */

#ifndef CODEBREAKER_H_
#define CODEBREAKER_H_

#include "Code.h"
#include "Keys.h"
#include "AbsCodeBreakerImpl.h"

class CodeBreaker {
public:
	CodeBreaker();
	virtual ~CodeBreaker();

	virtual void Guess(Code& guess);
	virtual void SetCodeBreakerImpl(AbsCodeBreakerImpl* pImpl);

protected:
	AbsCodeBreakerImpl* mpCodeBreakerImpl;
};

#endif /* CODEBREAKER_H_ */
