/*
 * queue.cpp
 *
 *  Created on: Dec 10, 2024
 *      Author: ivan-byju
 */

// C++ file containing the functions needed for the queue
// These functions are from the doubly linked list functions implemented in intDLList.cpp
#include "queue.h"

void Queue::enqueue(int el) {
   list.addToTail(el);
}


int Queue::dequeue() {
   return list.deleteFromHead();
}


void Queue::printQueue() const {
   list.printList();
}


bool Queue::isEmpty() const {
   return list.isEmpty();
}





