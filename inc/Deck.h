/*
 * Deck.h
 *
 *  Created on: 15 ago 2021
 *      Author: arubiom
 */

#include <vector>
#include <algorithm>
#include <time.h>
#include "../inc/Card.h"
using namespace std;

#ifndef INC_DECK_H_
#define INC_DECK_H_


class Deck {
	private:
		int max;
		vector<Card> cards;

	public:

		Deck();

		Deck(int m);

		Deck(const Deck& d);

		~Deck();

		int getMax() const;

		vector<Card> getCards() const;

		inline int size() const {return cards.size();}

		void addCard(const Card c);

		bool removeCard(int i, Card& c);

		void shuffle(int seed);

		Deck& operator=(const Deck& d);

};


#endif /* INC_DECK_H_ */
