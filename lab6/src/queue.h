/*
 * queue.h
 *
 *  Created on: Dec 10, 2024
 *      Author: ivan-byju
 */

// Header file containing the queue class
#ifndef QUEUE_H
#define QUEUE_H


#include "intDLList.h"


class Queue {
	public:
	   void enqueue(int el);  // Add element to the queue
	   int dequeue();         // Remove element from the queue
	   void printQueue() const;  // Display queue contents
	   bool isEmpty() const;  // Check if the queue is empty


	private:
	   intDLList list;  // Use intDLList to implement queue
};


#endif


