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
#include "AbsPlayer.h"
#include "Code.h"
#include "Keys.h"

class Game {
public:
	Game();
	virtual ~Game();

	void Start();
	void End();
	void PlayGame();

protected:
	void Init();
	void Help();
	void PlayGame(AbsPlayer& maker, AbsPlayer& breaker, int round);
	int  PlayGame(CodeMaker& maker, CodeBreaker& breaker);

private:
	AlphaCat    alphaCat;
	HumanPlayer human;
	Code        code;
	Code        guess;
	Keys        keys;

	const int   maxMoves = 8;
};

#endif /* GAME_H_ */
