/*
 * Player.cpp
 *
 *  Created on: 21 ago 2021
 *      Author: arubiom
 */


#include "../inc/Player.h"


Player::Player(const Deck& d) {
	currentCards = d;
	points = 0;
}

Player::Player(const Player& p) : Player(p.getCurrentCards()) {
	points = p.getPoints();
}

int Player::getPoints() const {
	return points;
}

Deck Player::getCurrentCards() const {
	return currentCards;
}

void Player::draw(Deck& d, int n = 1) {

	for (int i = 0; i < n; ++i) {
		Card c(d.removeCard(0));

		if (c != NULL)
			currentCards.addCard(c);
		else
			break;
	}
}

Card Player::removeCard(int i) {
	return currentCards.removeCard(i);
}
