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
		Card();

		Card(cardSuits cs, int v, int p);

		Card(const Card& c);

		~Card();

		cardSuits getSuit() const;

		int getValue() const;

		int getPoints() const;

		Card& operator=(const Card& c);
};


#endif /* INC_CARD_H_ */
