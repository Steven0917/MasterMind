/*
 * AlphaCat.cpp
 *
 *  Created on: 14 Jul, 2016
 *      Author: tengx
 */

#include "AlphaCat.h"
#include "BaseCodeMakerImpl.h"
#include "SimpleCodeBreakerImpl.h"
#include "Code.h"

AlphaCat::AlphaCat() {
	mpCodeMakerImpl   = new BaseCodeMakerImpl();
	mpCodeBreakerImpl = new SimpleCodeBreakerImpl();

}

AlphaCat::~AlphaCat() {
	if (mpCodeMakerImpl) {
		delete mpCodeMakerImpl;
	}
	if (mpCodeBreakerImpl) {
		delete mpCodeBreakerImpl;
	}
}



