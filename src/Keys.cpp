/*
 * Keys.cpp
 *
 *  Created on: 14 Jul, 2016
 *      Author: tengx
 */

#include "Keys.h"
#include "Code.h"

Keys::Keys() {
	// TODO Auto-generated constructor stub

}

Keys::~Keys() {
	// TODO Auto-generated destructor stub
}

void Keys::SetBlackKey(int n) {
	key[0] = n;
}

void Keys::SetWhiteKey(int n) {
	key[1] = n;
}

int Keys::GetBlackKey() {
	return key[0];
}

int Keys::GetWhiteKey() {
	return key[1];
}

bool Keys::isAllHit() {
	return key[0] == Code::num_code;
}

bool Keys::equal(Keys& keys) {
	if (this->GetBlackKey() == keys.GetBlackKey() &&
		this->GetWhiteKey() == keys.GetWhiteKey()) {
		return true;
	}
	return false;
}

