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

};

#endif /* ALPHACAT_H_ */
