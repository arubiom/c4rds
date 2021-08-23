/*
 * Player.h
 *
 *  Created on: 20 ago 2021
 *      Author: arubiom
 */


#include "Deck.h"
#include <string>

#ifndef INC_PLAYER_H_
#define INC_PLAYER_H_

class Player {
	private:
		int points;
		Deck currentCards;
		string name;
	public:
		Player(const string n, const Deck& c);

		Player(const Player& p);

		~Player();

		int getPoints() const;

		Deck getCurrentCards() const;

		void draw(Deck &d, int n);

		bool removeCard(int i, Card& c);

		string getName() const;

		void addPoints(int p);
};


#endif /* INC_PLAYER_H_ */
