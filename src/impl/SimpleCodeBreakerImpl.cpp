/*
 * SimpleCodeBreakerImpl.cpp
 *
 *  Created on: 14 Jul, 2016
 *      Author: tengx
 */

#include "SimpleCodeBreakerImpl.h"
#include <iostream>

using std::cout;
using std::endl;

SimpleCodeBreakerImpl::SimpleCodeBreakerImpl() {
	// TODO Auto-generated constructor stub

}

SimpleCodeBreakerImpl::~SimpleCodeBreakerImpl() {
	// TODO Auto-generated destructor stub
}


void SimpleCodeBreakerImpl::Guess(Code& guess, bool isFirst) {
	//TODO:
	if (isFirst) {
		this->isFirst = true;
		guess.SetCode(1, 1, 2, 2);
	} else {
		// assert(next) is valid.
		this->isFirst = false;
		guess.SetCode(next);
	}
}

void SimpleCodeBreakerImpl::ProcFeedback(Code& guess, Keys& keys) {
//	char m = next[0];
//	char n = next[1];
//	char j = next[2];
//	char k = next[3];

	isNextReady = false;
	char max = Code::num_color;

	for (char m=1; m <= max; m++) {
		for (char n=1; n <= max; n++) {
			for (char j=1; j <= max; j++) {
				for (char k=1; k <= max; k++) {
					if (isFirst || s[m][n][j][k] == 1) {
						curCode.SetCode(m, n, j, k);
						curCode.CheckGuess(guess, curKey);

						if (curKey.equal(keys)) {
							s[m][n][j][k] = 1;
//							cout << endl;
//							cout << "CurCode meet criteria." << endl;
//							curCode.PrintCode();
//							cout << endl;

							if (!isNextReady) {
								next[0] = m;
								next[1] = n;
								next[2] = j;
								next[3] = k;
								isNextReady = true;
							}
						} else {
							s[m][n][j][k] = 0;
						}
					}

				}
			}
		}
	}

}
