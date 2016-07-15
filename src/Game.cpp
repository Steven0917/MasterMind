/*
 * Game.cpp
 *
 *  Created on: 14 Jul, 2016
 *      Author: tengx
 */

#include "Game.h"
#include <iostream>

using std::cout;
using std::endl;

Game::Game() {
	// TODO Auto-generated constructor stub

}

Game::~Game() {
	// TODO Auto-generated destructor stub
}

void Game::Init() {
	Help();
}

void Game::Help() {

	cout << "*************************************************************************" << endl;
	cout << endl << "Welcome to Master Mind Game!" << endl << endl;

	cout << "Rules:" << endl;
	cout << "1. Four code pegs with Six colors [1, 6]" << endl;
	cout << "2. Maximum Eight guesses" << endl;
	cout << "3. Key pegs, Black: correct in both color and position" << endl;
	cout << "             White: correct color in the wrong position" << endl;
	cout << "4. Two round games, you will play as code breaker and code make separately." << endl << endl;

	cout << "Please check below wiki page for more details:" << endl;
	cout << "https://en.wikipedia.org/wiki/Mastermind_(board_game)" << endl << endl;
	cout << "*************************************************************************" << endl;
}

void Game::Start() {
	Init();
	PlayGame();
}

void Game::PlayGame() {
	int round = 1;
	PlayGame(alphaCat, human, round++);
	PlayGame(human, alphaCat, round++);
}

void Game::PlayGame(AbsPlayer& maker, AbsPlayer& breaker, int round) {
	cout << endl << endl << "       Round " << round << "       " << endl << endl;
	cout << "Code Maker:   " << maker.GetName() << endl;
	cout << "Code Breaker: " << breaker.GetName() << endl << endl;

	int moves = PlayGame(maker, breaker);
	int scoreMaker, scoreBreaker;

	cout << endl << "**************************************************" << endl << endl;
	cout << "Round Completed!" << endl;
	if (moves <= maxMoves) {
		cout << "Code breaker succeeds in " << moves << " moves!" << endl;

		scoreMaker   = 200;
		scoreBreaker = 1000 + 100*(maxMoves - moves);
	} else {
		cout << "Code breaker fails to do the job. The right code is ";
		code.PrintCode();
		cout << endl;

		scoreMaker   = 1000;
		scoreBreaker = 200;
	}

	cout << endl << "Score awarded" << endl << maker.GetName() << ": +" << scoreMaker << endl;
	cout << breaker.GetName() << ": +" << scoreBreaker << endl;

	scoreMaker   += maker.GetScore();
	scoreBreaker +=	breaker.GetScore();

	maker.SetScore(scoreMaker);
	breaker.SetScore(scoreBreaker);

	cout << endl << "Now Scores" << endl;
	cout << maker.GetName() << ": " << scoreMaker << endl;
	cout << breaker.GetName() << ": " << scoreBreaker << endl;

	cout << endl << "**************************************************" << endl;
}

int Game::PlayGame(CodeMaker& maker, CodeBreaker& breaker) {
	int  moves = 0;
	maker.MakeCode(code);
	cout << endl << "Code is made: **** " << endl << endl;

	bool isFirst = true;
	while (++moves <= maxMoves) {
		breaker.Guess(guess, isFirst);
		isFirst = false;
		alphaCat.Feedback(code, guess, keys);
		breaker.ProcFeedback(guess, keys);
		if (keys.isAllHit()) {
			break;
		} else {
			cout << "Black " << keys.GetBlackKey() << " White " << keys.GetWhiteKey() << endl;
			cout << "retried " << moves << endl << endl;
		}
	}

	return moves;
}

void Game::End() {
	if (alphaCat.GetScore() <= human.GetScore()) {
		cout << endl << endl << endl << "You Win!" << endl << endl << endl;
	} else {
		cout << endl << endl << endl << "You Lose..." << endl << endl << endl;
	}
}

int main() {
	Game game;
	game.Start();
	game.End();

    return 0;
}
