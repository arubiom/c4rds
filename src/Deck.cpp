/*
 * Deck.cpp
 *
 *  Created on: 15 ago 2021
 *      Author: arubiom
 */

#include "../inc/Deck.h"

Deck::Deck() {
	cards.clear();
	max = 0;
}

Deck::Deck(int m) {
	max = m;
	cards.clear();
}

Deck::Deck(const Deck& d) : Deck(d.getMax()) {
	cards = d.getCards();
}

vector<Card> Deck::getCards() const {
	return cards;
}

int Deck::getMax() const {
	return max;
}

void Deck::addCard(const Card c) {
    cards.push_back(c);
}

bool Deck::removeCard(int i, Card& c) {
	if (i >= 0 && i < size()) {
		Card ret(cards[i]);
    	cards.erase(cards.begin()+i);
    	c = ret;

    	return true;
	}

	return false;
}

void Deck::shuffle(int seed = 1) {
	srand(time(NULL));
	random_shuffle(cards.begin(), cards.end());
}

Deck& Deck::operator=(const Deck& d) {
	if (this == &d)
		return *this;

	max = d.getMax();
	cards = d.getCards();

	return *this;
}
