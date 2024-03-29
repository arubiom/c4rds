/*
 * Player.cpp
 *
 *  Created on: 21 ago 2021
 *      Author: arubiom
 */


#include "../inc/Player.h"


Player::Player(const string n, const Deck& d) {
	name = n;
	currentCards = d;
	points = 0;
}

Player::Player(const Player& p) : Player(p.getName(), p.getCurrentCards()) {
	points = p.getPoints();
}

int Player::getPoints() const {
	return points;
}

Deck Player::getCurrentCards() const {
	return currentCards;
}

void Player::draw(Deck& d, int n) {

	bool valid = false;

	for (int i = 0; i < n; ++i) {
		Card c;
		valid = d.removeCard(0, c);

		if (valid != false)
			currentCards.addCard(c);
		else
			break;
	}
}

bool Player::removeCard(int i, Card& c) {
	return currentCards.removeCard(i, c);
}

string Player::getName() const {
	return name;
}

void Player::addPoints(int p) {
	points+=p;
}
