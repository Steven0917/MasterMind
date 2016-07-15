/*
 * HumanCodeBreakerImpl.h
 *
 *  Created on: 14 Jul, 2016
 *      Author: tengx
 */

#ifndef HUMANCODEBREAKERIMPL_H_
#define HUMANCODEBREAKERIMPL_H_

#include "AbsCodeBreakerImpl.h"


class HumanCodeBreakerImpl: public AbsCodeBreakerImpl {
public:
	HumanCodeBreakerImpl();
	virtual ~HumanCodeBreakerImpl();

	virtual void Guess(Code& code, bool isFirst);
	virtual void ProcFeedback(Code& guess, Keys& keys);
};

#endif /* HUMANCODEBREAKERIMPL_H_ */
