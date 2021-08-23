/*
 * LaBrisca.cpp
 *
 *  Created on: 23 ago 2021
 *      Author: arubiom
 */

#include "../inc/LaBrisca.h"


LaBrisca::LaBrisca() : Desk(2) {
	setHeap();
}

void LaBrisca::setHeap() {
	heap.addCard(Card(cardSuits::oros, 1, 11));
	heap.addCard(Card(cardSuits::oros, 2, 0));
	heap.addCard(Card(cardSuits::oros, 3, 10));
	heap.addCard(Card(cardSuits::oros, 4, 0));
	heap.addCard(Card(cardSuits::oros, 5, 0));
	heap.addCard(Card(cardSuits::oros, 6, 0));
	heap.addCard(Card(cardSuits::oros, 7, 0));
	heap.addCard(Card(cardSuits::oros, 10, 2));
	heap.addCard(Card(cardSuits::oros, 11, 3));
	heap.addCard(Card(cardSuits::oros, 12, 4));

	heap.addCard(Card(cardSuits::copas, 1, 11));
	heap.addCard(Card(cardSuits::copas, 2, 0));
	heap.addCard(Card(cardSuits::copas, 3, 10));
	heap.addCard(Card(cardSuits::copas, 4, 0));
	heap.addCard(Card(cardSuits::copas, 5, 0));
	heap.addCard(Card(cardSuits::copas, 6, 0));
	heap.addCard(Card(cardSuits::copas, 7, 0));
	heap.addCard(Card(cardSuits::copas, 10, 2));
	heap.addCard(Card(cardSuits::copas, 11, 3));
	heap.addCard(Card(cardSuits::copas, 12, 4));

	heap.addCard(Card(cardSuits::espadas, 1, 11));
	heap.addCard(Card(cardSuits::espadas, 2, 0));
	heap.addCard(Card(cardSuits::espadas, 3, 10));
	heap.addCard(Card(cardSuits::espadas, 4, 0));
	heap.addCard(Card(cardSuits::espadas, 5, 0));
	heap.addCard(Card(cardSuits::espadas, 6, 0));
	heap.addCard(Card(cardSuits::espadas, 7, 0));
	heap.addCard(Card(cardSuits::espadas, 10, 2));
	heap.addCard(Card(cardSuits::espadas, 11, 3));
	heap.addCard(Card(cardSuits::espadas, 12, 4));

	heap.addCard(Card(cardSuits::bastos, 1, 11));
	heap.addCard(Card(cardSuits::bastos, 2, 0));
	heap.addCard(Card(cardSuits::bastos, 3, 10));
	heap.addCard(Card(cardSuits::bastos, 4, 0));
	heap.addCard(Card(cardSuits::bastos, 5, 0));
	heap.addCard(Card(cardSuits::bastos, 6, 0));
	heap.addCard(Card(cardSuits::bastos, 7, 0));
	heap.addCard(Card(cardSuits::bastos, 10, 2));
	heap.addCard(Card(cardSuits::bastos, 11, 3));
	heap.addCard(Card(cardSuits::bastos, 12, 4));
}

void LaBrisca::showRules() {
	cout << "\nLA BRISCA RULES\n" << endl;
	cout << "First of all know that Spanish cards go from 1-7 and 10-12\n"
			"This is a 1v1 game where you must get the most scoring cards you can\n"
			"To begin with a \'priority\' card is chosen. All cards from the same suit than this card always win their turn\n"
			"This game is played by turns. The first player choose a card from the three on his deck and plays it\n"
			"Now the other player choose a card from his deck and plays it\n"
			"The card with the bigger value wins unless one of them has priority and the other not\n"
			"Note that 1 is the strongest card and 3 the second strongest. The others go in decreasing number\n"
			"You can change the priority card by a 7 if its a figure or a 1 or 3, or by a 2 if it's any other, always from the same suit\n"
			"The score of the cards are: 1 -> 11 points, 3 -> 10 points, 12 -> 4 points, 11 -> 3 points, 10 -> 2 points\n"
			"In the end, the player who wins the turns is the first to play a card in the next. GL HF!\n" << endl;

}

bool LaBrisca::init(vector<string> names) {
	bool goOK = false;
	if (state == gameState::init) {
		heap.shuffle();
		Card c;

		goOK = heap.removeCard(0, c);
		if (!goOK)
			return goOK;

		priority = c;

		for (int i = 0; i < names.size(); ++i) {
			Deck d;

			for (int j = 0; j < MAXCARDS; ++j) {
				goOK = heap.removeCard(0, c);

				if (!goOK)
					return goOK;

				d.addCard(c);
			}

			Player p(names[i], d);
			addPlayer(p);
		}

		if (goOK)
			nextTurn();
	}

		return goOK;
}

bool LaBrisca::play() {
	int chose;
	Card c1, c2;
	bool goOK = false, win;

	if (state == gameState::playerThink) {
		cout << "Your turn " << players[currentPlayerIndex].getName() << endl;
		cin >> chose;
		goOK = players[currentPlayerIndex].removeCard(--chose, c1);
		if (!goOK)
			return false;

		cout << "Player " << players[currentPlayerIndex].getName() << " plays:\n" << c1 << endl;

		int falseIndex = (currentPlayerIndex+1) % maxPlayers;
		cout << "Your turn " << players[falseIndex].getName() << endl;
		cin >> chose;
		goOK = players[falseIndex].removeCard(--chose, c2);
		if (!goOK)
			return false;

		cout << "Player " << players[falseIndex].getName() << " plays:\n" << c2 << endl;

		win = compare(c1, c2);

	}
}
