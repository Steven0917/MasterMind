/*
 * BaseCodeMakerImpl.h
 *
 *  Created on: 14 Jul, 2016
 *      Author: tengx
 */

#ifndef BASECODEMAKERIMPL_H_
#define BASECODEMAKERIMPL_H_

#include "AbsCodeMakerImpl.h"


class BaseCodeMakerImpl: public AbsCodeMakerImpl {
public:
	BaseCodeMakerImpl();
	virtual ~BaseCodeMakerImpl();

	virtual void MakeCode(Code& code);
	virtual void Feedback(Code& code, Code& guess, Keys& keys);

};

#endif /* BASECODEMAKERIMPL_H_ */
