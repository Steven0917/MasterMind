/*
 * CodeMaker.h
 *
 *  Created on: 14 Jul, 2016
 *      Author: tengx
 *
 * Abstract class only.
 */

#ifndef CODEMAKER_H_
#define CODEMAKER_H_
#include "Code.h"
#include "Keys.h"
#include "AbsCodeMakerImpl.h"

class CodeMaker {
public:
	CodeMaker();
	virtual ~CodeMaker();

	virtual void MakeCode(Code& code);
	virtual void Feedback(Code& code, Code& guess, Keys& keys);

	void SetCodeMakerImpl(AbsCodeMakerImpl* pImpl);

protected:
	AbsCodeMakerImpl* mpCodeMakerImpl;
};

#endif /* CODEMAKER_H_ */
