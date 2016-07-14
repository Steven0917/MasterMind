/*
 * BaseCodeMakerImpl.cpp
 *
 *  Created on: 14 Jul, 2016
 *      Author: tengx
 */

#include "BaseCodeMakerImpl.h"

BaseCodeMakerImpl::BaseCodeMakerImpl() {
	// TODO Auto-generated constructor stub

}

BaseCodeMakerImpl::~BaseCodeMakerImpl() {
	// TODO Auto-generated destructor stub
}

void BaseCodeMakerImpl::MakeCode(Code& code) {
	code.MakeRandomCode();
}

void BaseCodeMakerImpl::Feedback(Code& code, Code& guess, Keys& keys) {
	code.CheckGuess(guess, keys);
}

