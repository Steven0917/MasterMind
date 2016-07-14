/*
 * SimpleCodeBreakerImpl.h
 *
 *  Created on: 14 Jul, 2016
 *      Author: tengx
 */

#ifndef SIMPLECODEBREAKERIMPL_H_
#define SIMPLECODEBREAKERIMPL_H_

#include "AbsCodeBreakerImpl.h"

class SimpleCodeBreakerImpl: public AbsCodeBreakerImpl {
public:
	SimpleCodeBreakerImpl();
	virtual ~SimpleCodeBreakerImpl();

	virtual void Guess(Code& code);
};

#endif /* SIMPLECODEBREAKERIMPL_H_ */
