/*
 * Desk.h
 *
 *  Created on: 22 ago 2021
 *      Author: arubiom
 */

#include "Player.h"
#include "GameState.h"
#include <iostream>

#ifndef INC_DESK_H_
#define INC_DESK_H_

class Desk {
	protected:
		Deck heap;
		int maxPlayers;
		vector<Player> players;
		int currentPlayerIndex;
		gameState state;

	public:
		Desk(int m);

		virtual ~Desk() = 0;

		virtual void setHeap() = 0;

		virtual bool init(vector<string> names) = 0;

		virtual bool play() = 0;

		virtual void showRules() = 0;

		void nextTurn();

		void win(const vector<Player> winners) const;

		void addPlayer(Player &p);
};


#endif /* INC_DESK_H_ */
