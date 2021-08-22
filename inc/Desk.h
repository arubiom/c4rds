/*
 * Desk.h
 *
 *  Created on: 22 ago 2021
 *      Author: arubiom
 */

#ifndef INC_DESK_H_
#define INC_DESK_H_

#include "Player.h"
#include "GameState.h"
#include <iostream>

class Desk {
	private:
		Deck heap;
		int maxPlayers;
		vector<Player> players;
		int currentPlayerIndex;
		gameState state;

	public:
		Desk(int m);

		virtual void setHeap() = 0;

		virtual bool play() = 0;

		void win(const vector<Player> winners) const;

		void addPlayer(Player &p);
};


#endif /* INC_DESK_H_ */
