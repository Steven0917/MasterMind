/*
 * Code.h
 *
 *  Created on: 14 Jul, 2016
 *      Author: tengx
 */

#ifndef CODE_H_
#define CODE_H_

#include "Keys.h"

class Code {
public:
	Code();
	virtual ~Code();

	void CheckGuess(Code& guess, Keys& keys);

private:
	int code[4] = {0};
};

#endif /* CODE_H_ */
