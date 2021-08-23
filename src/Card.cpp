/*
 * Card.cpp
 *
 *  Created on: 15 ago 2021
 *      Author: arubiom
 */

#include "../inc/Card.h"

Card::Card() {
	suit = cardSuits::oros;
	value = 1;
	points = 0;

}

Card::Card(cardSuits cs, int v, int p) {
	suit = cs;
	value = v;
	points = p;
}

Card::Card(const Card& c) : Card(c.getSuit(), c.getValue(), c.getPoints()) {}

Card::~Card() {}

cardSuits Card::getSuit() const {
    return suit;
}

int Card::getValue() const {
    return value;
}

int Card::getPoints() const {
    return points;
}

Card& Card::operator=(const Card& c) {
	if (this == &c)
		return *this;

	suit = c.getSuit();
	value = c.getValue();
	points = c.getPoints();

	return *this;
}
