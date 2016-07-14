/*
 * Code.cpp
 *
 *  Created on: 14 Jul, 2016
 *      Author: tengx
 */

#include "Code.h"
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

Code::Code() {
    // TODO Auto-generated constructor stub

}

Code::~Code() {
    // TODO Auto-generated destructor stub
}

void Code::CheckGuess(Code& guess, Keys& keys) {
	int i, j;
	int hits = 0;
	int onlist = 0;
    int hitmap[4] = {0};
    int map[4] = {0};

    // Check for direct hits
    for (i = 0; i < num_code; i++) {
        if (code[i] == guess[i]) {
            hits++;
            hitmap[i] = 1;
            map[i] = 1;
        }
    }

    if (hits == num_code) {
    	keys.SetBlackKey(num_code);
    	keys.SetWhiteKey(0);
    	return;
    }

    // Calculates the correctness of guess
    // http://mathworld.wolfram.com/Mastermind.html
    for (i = 0; i < num_code; i++) {
        if (!hitmap[i]) {
            for (j = 0; j < num_code; j++) {
                if (!map[j]) {
                    if (guess[i] == code[j]) {
                        onlist++;
                        map[j] = 1;
                        break;
                    }
                }
            }
        }
    }

    keys.SetBlackKey(hits);
    keys.SetWhiteKey(onlist);
    return;
}

void Code::MakeRandomCode() {
    srand((int)time(0));
    for (int i = 0 ; i < num_code; i++) {
        this->code[i] = rand() % num_color;
    }
}

void Code::SetCode(int code[]) {
    for (int i = 0 ; i < num_code; i++) {
        this->code[i] = code[i];
    }
}

void Code::PrintCode() {
    for (int i = 0 ; i < num_code; i++) {
        std::cout << code[i] << " ";
    }
}
