/*
 * HumanCodeMakerImpl.h
 *
 *  Created on: 14 Jul, 2016
 *      Author: tengx
 */

#ifndef HUMANCODEMAKERIMPL_H_
#define HUMANCODEMAKERIMPL_H_

#include "BaseCodeMakerImpl.h"



class HumanCodeMakerImpl: public BaseCodeMakerImpl {
public:
	HumanCodeMakerImpl();
	virtual ~HumanCodeMakerImpl();

	virtual void MakeCode(Code& code);
};


#endif /* HUMANCODEMAKERIMPL_H_ */
