/*
 * intDLLNode.h
 *
 *  Created on: Dec 10, 2024
 *      Author: ivan-byju
 */

// Header file implementing the DLL Node
#ifndef INTDLLNODE_H_
#define INTDLLNODE_H_

class intDLLNode {
public:
   // Constructor to initialize a node with data and optional prev/next pointers
   intDLLNode(int el = 0, intDLLNode* prev = nullptr, intDLLNode* next = nullptr)
       : data(el), prev(prev), next(next) {}


   int data; // Stores the integer data of the node
   intDLLNode* prev; // Pointer to the previous node in the doubly linked list
   intDLLNode* next; // Pointer to the next node in the doubly linked list
};




#endif /* INTDLLNODE_H_ */
