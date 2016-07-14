/*
 * Keys.h
 *
 *  Created on: 14 Jul, 2016
 *      Author: tengx
 */

#ifndef KEYS_H_
#define KEYS_H_

class Keys {
public:
	Keys();
	virtual ~Keys();

	void SetBlackKey(int n);
	void SetWhiteKey(int n);
	int GetBlackKey();
	int GetWhiteKey();

private:
	int key[2] = {0};  //key[0]: Black or Colored Key. key[1]: White Key.
};

#endif /* KEYS_H_ */
