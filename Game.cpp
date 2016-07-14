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

	cout << "Welcome to Master Mind Game!" << endl << endl;
	cout << "Currently we support human breaker only." << endl << endl;


	cout << "Rules:" << endl;
	cout << "  4 code pegs with 6 colors [1, 6]" << endl;
	cout << "  Maximum 10 guesses" << endl;
	cout << "  Key pegs, Black: correct in both color and position" << endl;
	cout << "            White: correct color in the wrong position" << endl << endl;

	cout << "Please check below for more details" << endl;
	cout << "https://en.wikipedia.org/wiki/Mastermind_%28board_game%29" << endl << endl;

	cout << "Code maker  : AlphaCat" << endl;
	cout << "Code breaker: You" << endl << endl;

	countGuess = 0;
}

void Game::Start() {
	alphaCat.MakeCode(code);
	cout << endl << "Code is made: **** " << endl << endl;
//	cout << endl << "Code is made as ";\
//	code.PrintCode();
//	cout << endl;

	while (countGuess < maxGuess) {
		human.Guess(guess);
		alphaCat.Feedback(code, guess, keys);
		if (keys.isAllHit()) {
			ifWin = true; // You win.
			return;
		} else {
			cout << "Black " << keys.GetBlackKey() << " White " << keys.GetWhiteKey() << endl;
			cout << "retried " << ++countGuess << endl << endl;
		}

	}
	ifWin = false; // You lose.
	return;
}

void Game::End() {
	if (ifWin) {
		cout << "Congratulations! You win in " << countGuess << " moves!" << endl << endl;
	} else {
		cout << "You lose in breaking the code. The right code is ";
		code.PrintCode();
		cout << endl << endl;
	}

}

int main() {
	Game game;
	game.Init();
	game.Start();
	game.End();

    return 0;
}
