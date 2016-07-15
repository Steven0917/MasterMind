/*
 * CodeBreakerImpl.h
 *
 *  Created on: 14 Jul, 2016
 *      Author: tengx
 */

#ifndef CODEBREAKERIMPL_H_
#define CODEBREAKERIMPL_H_
#include "Code.h"

class AbsCodeBreakerImpl {
public:
	AbsCodeBreakerImpl();
	virtual ~AbsCodeBreakerImpl();

	virtual void Guess(Code& guess, bool isFirst) = 0;
	virtual void ProcFeedback(Code& guess, Keys& keys) = 0;
};


#endif /* CODEBREAKERIMPL_H_ */
