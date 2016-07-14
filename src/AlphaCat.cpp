/*
 * AlphaCat.cpp
 *
 *  Created on: 14 Jul, 2016
 *      Author: tengx
 */

#include "AlphaCat.h"
#include "BaseCodeMakerImpl.h"
#include "Code.h"

AlphaCat::AlphaCat() {
	mpCodeMakerImpl = new BaseCodeMakerImpl();
	mpCodeBreakerImpl = nullptr;

}

AlphaCat::~AlphaCat() {
	if (mpCodeMakerImpl) {
		delete mpCodeMakerImpl;
	}
	if (mpCodeBreakerImpl) {
		delete mpCodeBreakerImpl;
	}
}


void AlphaCat::Guess(Code& guess) {
//	guess.SetCode()
}


