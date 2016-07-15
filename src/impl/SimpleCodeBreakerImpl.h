/*
 * SimpleCodeBreakerImpl.h
 *
 *  Created on: 14 Jul, 2016
 *      Author: tengx
 */

#ifndef SIMPLECODEBREAKERIMPL_H_
#define SIMPLECODEBREAKERIMPL_H_

#include "AbsCodeBreakerImpl.h"
#include <stack>          // std::stack
#include <vector>         // std::vector
#include <deque>          // std::deque


class SimpleCodeBreakerImpl: public AbsCodeBreakerImpl {
public:
	SimpleCodeBreakerImpl();
	virtual ~SimpleCodeBreakerImpl();

	virtual void Guess(Code& guess, bool isFirst);
	virtual void ProcFeedback(Code& guess, Keys& keys);

protected:
	void ResetS();

private:
	char s[Code::num_color + 1][Code::num_color + 1][Code::num_color + 1][Code::num_color + 1];
	char next[Code::num_code] = {1, 1, 1, 1};
	Code curCode;
	Keys curKey;
	bool isFirst;
	bool isNextReady;
};

#endif /* SIMPLECODEBREAKERIMPL_H_ */
