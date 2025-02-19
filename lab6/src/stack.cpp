/*
 * stack.cpp
 *
 *  Created on: Dec 10, 2024
 *      Author: ivan-byju
 */

// C++ file containing the functions needed for the stack
// These functions are from the doubly linked list functions implemented in intDLList.cpp
#include "stack.h"

void Stack::push(int el) {
   list.addToHead(el);
}


int Stack::pop() {
   return list.deleteFromHead();
}


void Stack::printStack() const {
   list.printList();
}


bool Stack::isEmpty() const {
   return list.isEmpty();
}







