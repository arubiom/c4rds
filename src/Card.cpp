/*
 * Card.cpp
 *
 *  Created on: 15 ago 2021
 *      Author: arubiom
 */

#include "../inc/Card.h"

Card::Card(cardSuits cs, int v, int p) {
	suit = cs;
	value = v;
	points = p;
}

Card::Card(const Card& c) : Card(c.getSuit(), c.getValue(), c.getPoints()) {}

cardSuits Card::getSuit() const {
    return suit;
}

int Card::getValue() const {
    return value;
}

int Card::getPoints() const {
    return points;
}
