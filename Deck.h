/*
 * Deck.h
 *
 *  Created on: Sep 15, 2020
 *      Author: natedogg
 */

#ifndef DECK_H_
#define DECK_H_

#include <algorithm>
#include "GenericPlayer.h"

class Deck: public Hand {


public:

	Deck();

	virtual ~Deck();

	//create a standard deck of 52 cards
	void Populate();

	//shuffle cards
	void Shuffle();

	//deal one card to a hand
	void Deal(Hand &aHand);

	//give additional cards to a generic player
	void AdditionalCards(GenericPlayer &aGenericPlayer);
};

#endif /* DECK_H_ */
