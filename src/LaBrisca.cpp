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
