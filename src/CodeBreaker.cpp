/*
 * CodeBreaker.cpp
 *
 *  Created on: 14 Jul, 2016
 *      Author: tengx
 */

#include "assert.h"
#include "CodeBreaker.h"
#include "AbsCodeBreakerImpl.h"

CodeBreaker::CodeBreaker() {
	// TODO Auto-generated constructor stub

}

CodeBreaker::~CodeBreaker() {
	// TODO Auto-generated destructor stub
}

void CodeBreaker::Guess(Code& guess, bool isFirst = false) {
	assert(mpCodeBreakerImpl);
	mpCodeBreakerImpl->Guess(guess, isFirst);
}

void CodeBreaker::ProcFeedback(Code& guess, Keys& keys) {
	assert(mpCodeBreakerImpl);
	mpCodeBreakerImpl->ProcFeedback(guess, keys);
}

void CodeBreaker::SetCodeBreakerImpl(AbsCodeBreakerImpl* pImpl) {
	assert(pImpl);
	mpCodeBreakerImpl = pImpl;
}
