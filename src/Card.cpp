/*
 * Card.cpp
 *
 *  Created on: 15 ago 2021
 *      Author: arubiom
 */

#include "Card.h"

Card::Card(cardSuits cs=cardSuits::oros, int v, int p = 0) {
	suit = cs;
	value = v;
	points = p;
}
