/*
 * Card.cpp
 *
 *  Created on: 15 ago 2021
 *      Author: arubiom
 */

#include "../inc/Card.h"

Card::Card(cardSuits cs=cardSuits::oros, int v, int p = 0) {
	suit = cs;
	value = v;
	points = p;
}

Card::Card(Card c) {
    this(c.getSuit(), c.getValue(), c.getPoints());
}

cardSuits Card::getSuits() {
    return suit;
}

int Card::getValue() {
    return value;
}

int Card::getPoints() {
    return points;
}
