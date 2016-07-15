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
	bool isAllHit();
	bool equal(Keys& keys);

private:
	/* A colored or black key peg is placed for each code peg from the guess
	 * which is correct in both color and position.
	 *
	 * A white key peg indicates the existence of a correct color code peg
	 * placed in the wrong position.
	 *
	 * key[0]: Black or Colored Key.
	 * key[1]: White Key.
	 */
	int key[2] = {0};
};

#endif /* KEYS_H_ */
