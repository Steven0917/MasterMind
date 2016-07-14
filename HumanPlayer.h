/*
 * HumanPlayer.h
 *
 *  Created on: 14 Jul, 2016
 *      Author: tengx
 */

#ifndef HUMANPLAYER_H_
#define HUMANPLAYER_H_

#include "CodeBreaker.h"
#include "CodeMaker.h"

class HumanPlayer: public CodeBreaker, CodeMaker {
public:
	HumanPlayer();
	virtual ~HumanPlayer();
};

#endif /* HUMANPLAYER_H_ */
