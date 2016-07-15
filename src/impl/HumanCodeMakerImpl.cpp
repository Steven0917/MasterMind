/*
 * HumanCodeMakerImpl.cpp
 *
 *  Created on: 14 Jul, 2016
 *      Author: tengx
 */

#include "HumanCodeMakerImpl.h"
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <assert.h>

using std::cin;
using std::cout;
using std::endl;

HumanCodeMakerImpl::HumanCodeMakerImpl() {
	// TODO Auto-generated constructor stub
}

HumanCodeMakerImpl::~HumanCodeMakerImpl() {
	// TODO Auto-generated destructor stub
}

void HumanCodeMakerImpl::MakeCode(Code& code) {
    char in[Code::num_code];

    while (true) {
        cout << "Decide Your Code: ";
        cin  >> in;

        if (strlen(in) != 4) {
            cout << "Invalid Input!!! - Can't exceed or less than 4 input." << endl;
            continue;
        }

        if (!code.isValidASC2(in)) {
            cout << "Invalid Input!!! - Valid color: [1, " << Code::num_color << "]" << endl;
            continue;
        }

        code.SetCodeASC2(in);
        return;
    }
}

