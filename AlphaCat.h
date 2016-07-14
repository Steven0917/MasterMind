/*
 * AlphaCat.h
 *
 *  Created on: 14 Jul, 2016
 *      Author: tengx
 */

#ifndef ALPHACAT_H_
#define ALPHACAT_H_

#include "CodeMaker.h"

class AlphaCat: public CodeMaker {
public:
	AlphaCat();
	virtual ~AlphaCat();

	virtual void MakeCode(Code& code);
	virtual void Feedback(Code& code, Code& guess, Keys& keys);
};

#endif /* ALPHACAT_H_ */
