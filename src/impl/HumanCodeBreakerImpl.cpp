/*
 * HumanCodeBreakerImpl.cpp
 *
 *  Created on: 14 Jul, 2016
 *      Author: tengx
 */

#include <iostream>
#include <stdio.h>
#include <string.h>
#include "HumanCodeBreakerImpl.h"

using std::cin;
using std::cout;
using std::endl;

HumanCodeBreakerImpl::HumanCodeBreakerImpl() {
	// TODO Auto-generated constructor stub

}

HumanCodeBreakerImpl::~HumanCodeBreakerImpl() {
	// TODO Auto-generated destructor stub
}

void HumanCodeBreakerImpl::Guess(Code& guess, bool isFirst) {
    char in[Code::num_code];

    while (true) {
        cout << "Guess: ";
        cin  >> in;

        if (strlen(in) != 4) {
            cout << "Invalid Input!!! - Can't exceed or less than 4 input." << endl;
            continue;
        }

        if (!guess.isValidASC2(in)) {
            cout << "Invalid Input!!! - Valid color: [1, " << (static_cast<int>(Code::num_color) & 0xFF) << "]" << endl;
            continue;
        }

        guess.SetCodeASC2(in);
        return;
    }
}

void HumanCodeBreakerImpl::ProcFeedback(Code& guess, Keys& keys) {
	//Do nothing.
}
