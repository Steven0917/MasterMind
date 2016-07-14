/*
 * AlphaCat.cpp
 *
 *  Created on: 14 Jul, 2016
 *      Author: tengx
 */

#include "AlphaCat.h"
#include "Code.h"

AlphaCat::AlphaCat() {
	// TODO Auto-generated constructor stub

}

AlphaCat::~AlphaCat() {
	// TODO Auto-generated destructor stub
}

void AlphaCat::MakeCode(Code& code) {
	code.MakeRandomCode();
}

void AlphaCat::Feedback(Code& code, Code& guess, Keys& keys) {
	code.CheckGuess(guess, keys);
}
