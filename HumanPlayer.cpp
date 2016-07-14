/*
 * HumanPlayer.cpp
 *
 *  Created on: 14 Jul, 2016
 *      Author: tengx
 */

#include "HumanPlayer.h"
#include <iostream>
#include <stdio.h>
#include <string.h>

using std::cout;
using std::cin;
using std::endl;

HumanPlayer::HumanPlayer() {
    // TODO Auto-generated constructor stub

}

HumanPlayer::~HumanPlayer() {
    // TODO Auto-generated destructor stub
}

void HumanPlayer::Guess(Code& guess) {
    char in[Code::num_code];

    while (true) {
        cout << "Your guess: ";
        cin  >> in;

        if (strlen(in) != 4) {
            cout << "Invalid Input!!! - Can't exceed or less than 4 input." << endl;
            continue;
        }

        if (!guess.isValidASC2(in)) {
            cout << "Invalid Input!!! - Valid color: [1, " << Code::num_color << "]" << endl;
            continue;
        }

        guess.SetCodeASC2(in);
        return;
    }
}
