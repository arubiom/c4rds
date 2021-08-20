/*
 * Player.h
 *
 *  Created on: 20 ago 2021
 *      Author: arubiom
 */

#ifndef INC_PLAYER_H_
#define INC_PLAYER_H_

#include "Deck.h"

class Player {
	private:
		int points;
		Deck currentCards;
	public:
		Player(const Deck& c);

		Player(const Player& p);

		int getPoints() const;

		Deck getCurrentsCards() const;

		void draw(Deck &d, int n=1);


};


#endif /* INC_PLAYER_H_ */
