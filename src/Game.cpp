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

	cout << "*************************************************************************" << endl;
	cout << endl << "Welcome to Master Mind Game!" << endl << endl;

	cout << "Rules:" << endl;
	cout << "1. Four code pegs with Six colors [1, 6]" << endl;
	cout << "2. Maximum Ten guesses" << endl;
	cout << "3. Key pegs, Black: correct in both color and position" << endl;
	cout << "             White: correct color in the wrong position" << endl;
	cout << "4. Two round games, you will play as code breaker and code make separately." << endl << endl;

	cout << "Please check below wiki page for more details:" << endl;
	cout << "https://en.wikipedia.org/wiki/Mastermind_%28board_game%29" << endl << endl;
	cout << "*************************************************************************" << endl;
}

void Game::Start() {
	PlayAsCodeBreaker();
	PlayAsCodeMaker();
}

void Game::PlayAsCodeBreaker() {
	cout << endl << "Round One" << endl;
	cout << "Code maker  : AlphaCat" << endl;
	cout << "Code breaker: You" << endl << endl;

	countGuess = 0;
	alphaCat.MakeCode(code);
	cout << endl << "Code is made: **** " << endl << endl;
//	cout << endl << "Code is made as ";
//	code.PrintCode();
//	cout << endl;

	while (countGuess < maxGuess) {
		human.Guess(guess);
		alphaCat.Feedback(code, guess, keys);
		if (keys.isAllHit()) {
			isWin = true; // You win.
			return;
		} else {
			cout << "Black " << keys.GetBlackKey() << " White " << keys.GetWhiteKey() << endl;
			cout << "retried " << ++countGuess << endl << endl;
		}

	}
	isWin = false; // You lose.
	if (isWin) {
		cout << "Congratulations! You win in " << countGuess << " moves!" << endl << endl;
	} else {
		cout << "You lose in breaking the code. The right code is ";
		code.PrintCode();
		cout << endl << endl;
	}
	return;
}

void Game::PlayAsCodeMaker() {
	cout << endl << "Round Two" << endl;
	cout << "Code maker  : You" << endl;
	cout << "Code breaker: AlphaCat" << endl << endl;

}

void Game::End() {

}

int main() {
	Game game;
	game.Init();
	game.Start();
	game.End();

    return 0;
}