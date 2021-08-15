/*
 * Deck.h
 *
 *  Created on: 15 ago 2021
 *      Author: arubiom
 */

#include <vector>
#include <algorithm>
#include "Card.h"
using namespace std;

#ifndef INC_DECK_H_
#define INC_DECK_H_


class Deck {
	private:
		int max;
		vector<Card> cards;

	public:

		Deck(int m);

		Deck(Deck d);

		int getMax();

		vector<Card> getCards();

		inline int size() {return cards.size();}

		void addCard(Card c);

		Card removeCard();

		void shuffle();


};


#endif /* INC_DECK_H_ */
