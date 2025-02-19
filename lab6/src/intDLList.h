/*
 * intDLList.h
 *
 *  Created on: Dec 10, 2024
 *      Author: ivan-byju
 */

// Header file with doubly linked list class
// This file makes use of the DLL node class found in the intDLLNode.h file
#ifndef INTDLLIST_H_
#define INTDLLIST_H_

#include "intDLLNode.h"
#include <iostream>
#include <stdexcept>


class intDLList {
public:
   intDLList() : head(nullptr), tail(nullptr) {}
   ~intDLList();


   void addToHead(int el); // Add element to head
   void addToTail(int el); // Adds element to the tail
   int deleteFromHead(); // Deletes from head and returns value
   int deleteFromTail(); // Deletes from tail and returns value
   bool isEmpty() const { return head == nullptr; } // Checks if empty
   void printList() const; // Prints list
   void addSorted(int el); // Adds an element in sorted order
   void deleteNode(int el); // Deletes node


private:
   intDLLNode* head; // Pointer to the first node of the list
   intDLLNode* tail; // Pointer to the last node of the list
};




#endif /* INTDLLIST_H_ */
