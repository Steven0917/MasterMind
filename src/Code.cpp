/*
 * Code.cpp
 *
 *  Created on: 14 Jul, 2016
 *      Author: tengx
 */

#include "Code.h"
#include <time.h>
#include <iostream>

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
        if (code[i] == guess.code[i]) {
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
                    if (guess.code[i] == code[j]) {
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
        this->code[i] = rand() % num_color + 1; //Valid color [1, num_color]
    }
}

bool Code::isValid(char code[]) {
    for (int i = 0 ; i < num_code; i++) {
    	//Valid color [1, num_color]
        if ( code[i] <= 0 || code[i] > num_color ) {
        	return false;
        }
    }
    return true;
}

bool Code::SetCode(char code[]) {
	if (!isValid(code)) {
		return false;
	}
    for (int i = 0 ; i < num_code; i++) {
        this->code[i] = code[i];
    }
    return true;
}

bool Code::isValidASC2(char code[]) {
    for (int i = 0 ; i < num_code; i++) {
    	//Valid color [1, num_color]
        if ( code[i] - '0' <= 0 || code[i] - '0'> num_color ) {
        	return false;
        }
    }
    return true;
}

bool Code::SetCodeASC2(char code[]) {
	if (!isValidASC2(code)) {
		return false;
	}
    for (int i = 0 ; i < num_code; i++) {
        this->code[i] = code[i] - '0';
    }
    return true;
}

void Code::PrintCode() {
    for (int i = 0 ; i < num_code; i++) {
        std::cout << (static_cast<int>(code[i]) & 0xFF);
    }
}

void Code::Reset() {
    for (int i = 0 ; i < num_code; i++) {
        this->code[i] = 0;
    }
}

void Code::SetCode(char m, char n, char j, char k) {
	this->code[0] = m;
	this->code[1] = n;
	this->code[2] = j;
	this->code[3] = k;
}

bool Code::isValid() {
    for (int i = 0 ; i < num_code; i++) {
    	//Valid color [1, num_color]
        if ( this->code[i] <= 0 || this->code[i] > num_color ) {
        	return false;
        }
    }
    return true;
}

