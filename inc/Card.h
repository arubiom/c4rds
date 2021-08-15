/*
 * Card.h
 *
 *  Created on: 15 ago 2021
 *      Author: arubiom
 */

#include "CardSuit.h"

#ifndef INC_CARD_H_
#define INC_CARD_H_


class Card {
	private:
		cardSuits suit;
		int value;
		int points;

	public:
		Card(cardSuits cs=cardSuits::oros, int v, int p = 0);

		inline cardSuits getSuit() {return suit;}

		inline int getValue() {return value;}

		inline int getPoints() {return points;}
};


#endif /* INC_CARD_H_ */
