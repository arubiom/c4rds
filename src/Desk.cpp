/*
 * Desk.cpp
 *
 *  Created on: 22 ago 2021
 *      Author: arubiom
 */


#include "../inc/Desk.h"

Desk::Desk(int m) {
	maxPlayers = m;
	players.clear();
	currentPlayerIndex = 0;
	state = gameState::init;
}

void Desk::win(const vector<Player> winners) const {
	cout << "\n" << endl;

	if (winners.size() == 0) {
		cout << "NO HAY GANADORES" << endl;
	} else if (winners.size() == 1) {
		cout << "EL GANADOR ES " << winners[0].getName() << endl;
	} else {
		cout << "LOS GANAODRES SON ";
		for (int i = 0; i < (int)winners.size(); ++i) {
			cout << winners[i].getName() << " ";
		}
		cout << endl;
	}

	cout << endl;
}

void Desk::addPlayer(Player &p) {
	if (players.size() < maxPlayers) {
		players.push_back(p);
	}
}


void Desk::nextTurn() {
	if (state == gameState::init) {
		srand(time(NULL));
		currentPlayerIndex = rand() % maxPlayers;
		state = gameState::playerThink;
	} else if (state == gameState::check || state == gameState::done) {
		currentPlayerIndex = (currentPlayerIndex+1) % maxPlayers;
	}
}
