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

	virtual void Guess(Code& guess) = 0;
};


#endif /* CODEBREAKERIMPL_H_ */
