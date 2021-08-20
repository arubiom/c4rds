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
		Card(cardSuits cs, int v, int p);

		Card(const Card& c);

		cardSuits getSuit() const;

		int getValue() const;

		int getPoints() const;
};


#endif /* INC_CARD_H_ */
