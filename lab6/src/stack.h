/*
 * stack.h
 *
 *  Created on: Dec 10, 2024
 *      Author: ivan-byju
 */

// Header file containing stack class
#ifndef STACK_H
#define STACK_H


#include "intDLList.h"


class Stack {
	public:
	   void push(int el);     // Add element to the stack
	   int pop();             // Remove element from the stack
	   void printStack() const;  // Display stack contents
	   bool isEmpty() const;  // Check if the stack is empty


	private:
	   intDLList list;  // Use intDLList to implement stack
};


#endif






