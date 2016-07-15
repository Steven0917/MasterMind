/*
 * AbsPlayer.h
 *
 *  Created on: 15 Jul, 2016
 *      Author: tengx
 */

#ifndef ABSPLAYER_H_
#define ABSPLAYER_H_

#include "CodeBreaker.h"
#include "CodeMaker.h"
#include <string>

using std::string;

class AbsPlayer: public CodeBreaker, public CodeMaker {
public:
	AbsPlayer();
	virtual ~AbsPlayer();

	string GetName();
	void SetName(string name);

	int GetScore();
	void SetScore(int score);

protected:
	string name;
	int    score = 0;
};

#endif /* ABSPLAYER_H_ */
