/*
 * LaBrisca.h
 *
 *  Created on: 23 ago 2021
 *      Author: arubiom
 */

#include "Desk.h"

#ifndef INC_LABRISCA_H_
#define INC_LABRISCA_H_

class LaBrisca: public Desk {
	private:
		const int MAXCARDS = 3;
		Card priority;
	public:

		LaBrisca();

		void setHeap();
};



#endif /* INC_LABRISCA_H_ */
