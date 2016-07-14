/*
 * SimpleCodeBreakerImpl.cpp
 *
 *  Created on: 14 Jul, 2016
 *      Author: tengx
 */

#include "SimpleCodeBreakerImpl.h"

SimpleCodeBreakerImpl::SimpleCodeBreakerImpl() {
	// TODO Auto-generated constructor stub

}

SimpleCodeBreakerImpl::~SimpleCodeBreakerImpl() {
	// TODO Auto-generated destructor stub
}


void SimpleCodeBreakerImpl::Guess(Code& guess) {
	char a[Code::num_code] = {1, 2, 3, 4};
	guess.SetCode(a);
}

