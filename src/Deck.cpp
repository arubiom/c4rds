/*
 * Deck.cpp
 *
 *  Created on: 15 ago 2021
 *      Author: arubiom
 */

#include "Deck.h"

Deck::Deck(int m) {
	max = m;
	cards.clear();
}

Deck::Deck(Deck d) {
	this(d.getMax());
	cards = d.getCards();

}

vector <Card> Deck::getCards() {
	return cards;
}

int Deck::getMax() {
	return max;
}
