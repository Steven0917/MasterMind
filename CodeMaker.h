/*
 * CodeMaker.h
 *
 *  Created on: 14 Jul, 2016
 *      Author: tengx
 */

#ifndef CODEMAKER_H_
#define CODEMAKER_H_
#include "Code.h"
#include "Keys.h"

class CodeMaker {
public:
	CodeMaker();
	virtual ~CodeMaker();

	virtual void MakeCode(Code& code) = 0;
	virtual void Feedback(Code& code, Keys& keys) = 0;
};

#endif /* CODEMAKER_H_ */
