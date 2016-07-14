/*
 * Game.h
 *
 *  Created on: 14 Jul, 2016
 *      Author: tengx
 */

#ifndef GAME_H_
#define GAME_H_

#include "AlphaCat.h"
#include "HumanPlayer.h"
#include "Code.h"
#include "Keys.h"

class Game {
public:
	Game();
	virtual ~Game();
	void Init();
	void Start();
	void End();

protected:
	void PlayAsCodeBreaker();
	void PlayAsCodeMaker();

private:
	bool        isWin;
	const int   maxGuess = 10;
    int         countGuess;
	AlphaCat    alphaCat;
	HumanPlayer human;
	Code        code;
	Code        guess;
	Keys        keys;
};

#endif /* GAME_H_ */
