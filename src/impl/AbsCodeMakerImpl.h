/*
 * CodeMakerImpl.h
 *
 *  Created on: 14 Jul, 2016
 *      Author: tengx
 */

#ifndef CODEMAKERIMPL_H_
#define CODEMAKERIMPL_H_

#include "Code.h"

class AbsCodeMakerImpl {
public:
	AbsCodeMakerImpl();
	virtual ~AbsCodeMakerImpl();

	virtual void MakeCode(Code& code) = 0;
	virtual void Feedback(Code& code, Code& guess, Keys& keys) = 0;
};


#endif /* CODEMAKERIMPL_H_ */
