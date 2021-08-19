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

Deck::Deck(Deck& d) : Deck(d.getMax()) {
	cards = d.getCards();
}

vector <Card> Deck::getCards() const {
	return cards;
}

int Deck::getMax() const {
	return max;
}

vector<Card> Deck::getCards() const {
    return cards;
}

void Deck::addCard(const Card c) {
    cards.push_back(c);
}

Card Deck::removeCard(int i) {
    Card ret(cards[i]);
    cards.erase(cards.begin()+i);

    return ret;
}

void Deck::shuffle(int seed = 1) {
	random_shuffle(cards.begin(), cards.end(), seed);
}

Deck& Deck::operator=(const Deck& d) {
	if (this == &d)
		return *this;

	max = d.getMax();
	cards = d.getCards();

	return *this;
}
