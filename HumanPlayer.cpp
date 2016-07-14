/*
 * HumanPlayer.cpp
 *
 *  Created on: 14 Jul, 2016
 *      Author: tengx
 */

#include "HumanPlayer.h"
#include "HumanCodeMakerImpl.h"
#include "HumanCodeBreakerImpl.h"

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <assert.h>

using std::cout;
using std::cin;
using std::endl;

HumanPlayer::HumanPlayer() {
	mpCodeMakerImpl   = new HumanCodeMakerImpl();
	mpCodeBreakerImpl = new HumanCodeBreakerImpl();
}

HumanPlayer::~HumanPlayer() {
	if (mpCodeMakerImpl) {
		delete mpCodeMakerImpl;
	}
	if (mpCodeBreakerImpl) {
		delete mpCodeBreakerImpl;
	}
}


