/*
 * CodeMaker.cpp
 *
 *  Created on: 14 Jul, 2016
 *      Author: tengx
 */

#include "CodeMaker.h"
#include <assert.h>

CodeMaker::CodeMaker() {
	// TODO Auto-generated constructor stub
}

CodeMaker::~CodeMaker() {
	// TODO Auto-generated destructor stub
}

void CodeMaker::MakeCode(Code& code) {
//	code.MakeRandomCode();
	assert(mpCodeMakerImpl);
	mpCodeMakerImpl->MakeCode(code);
}

void CodeMaker::Feedback(Code& code, Code& guess, Keys& keys) {
	assert(mpCodeMakerImpl);
	mpCodeMakerImpl->Feedback(code, guess, keys);
}

void CodeMaker::SetCodeMakerImpl(AbsCodeMakerImpl* pImpl) {
	assert(pImpl);
	mpCodeMakerImpl = pImpl;
}
