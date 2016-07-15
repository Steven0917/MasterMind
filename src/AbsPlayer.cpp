/*
 * AbsPlayer.cpp
 *
 *  Created on: 15 Jul, 2016
 *      Author: tengx
 */

#include "AbsPlayer.h"


AbsPlayer::AbsPlayer() {
	// TODO Auto-generated constructor stub

}

AbsPlayer::~AbsPlayer() {
	// TODO Auto-generated destructor stub
}

string AbsPlayer::GetName() {
	return name;
}

void AbsPlayer::SetName(string name) {
	this->name = name;
}

int AbsPlayer::GetScore() {
	return score;
}

void AbsPlayer::SetScore(int score) {
	this->score = score;
}
