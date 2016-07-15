/*
 * HumanPlayer.cpp
 *
 *  Created on: 14 Jul, 2016
 *      Author: tengx
 */

#include "HumanPlayer.h"
#include "HumanCodeMakerImpl.h"
#include "HumanCodeBreakerImpl.h"


HumanPlayer::HumanPlayer() {
	mpCodeMakerImpl   = new HumanCodeMakerImpl();
	mpCodeBreakerImpl = new HumanCodeBreakerImpl();

	SetName("Human Player");
}

HumanPlayer::~HumanPlayer() {
	if (mpCodeMakerImpl) {
		delete mpCodeMakerImpl;
	}
	if (mpCodeBreakerImpl) {
		delete mpCodeBreakerImpl;
	}
}
