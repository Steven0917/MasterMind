/*
 * AlphaCat.h
 *
 *  Created on: 14 Jul, 2016
 *      Author: tengx
 */

#ifndef ALPHACAT_H_
#define ALPHACAT_H_

#include "CodeMaker.h"
#include "CodeBreaker.h"

class AlphaCat: public CodeMaker, public CodeBreaker {
public:
	AlphaCat();
	virtual ~AlphaCat();

//	virtual void MakeCode(Code& code);
//	virtual void Feedback(Code& code, Code& guess, Keys& keys);

	virtual void Guess(Code& guess);


};

#endif /* ALPHACAT_H_ */
