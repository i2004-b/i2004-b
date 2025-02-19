/*
 * intDLList.cpp
 *
 *  Created on: Dec 10, 2024
 *      Author: ivan-byju
 */


// This file contains all the definitions for functions within the intDLLNode class
#include "intDLList.h"

// Destructor to delete
intDLList::~intDLList() {
   while (!isEmpty()) {
       deleteFromHead();
   }
}

// Adds element to the head
void intDLList::addToHead(int el) {
	// Construct new node
   intDLLNode* newNode = new intDLLNode(el, nullptr, head);

   // Checks if head not equal to nullptr to set prev
   if (head != nullptr) {
       head->prev = newNode;
   }

   head = newNode;

   // Sets tail equal to head if the tail is at nullptr
   if (tail == nullptr) {
       tail = head;
   }
}

// Adds element to the tail
void intDLList::addToTail(int el) {
	// Constructs new node
   intDLLNode* newNode = new intDLLNode(el, tail, nullptr);

   // Checks if tail is not equal to nullptr to set next
   if (tail != nullptr) {
       tail->next = newNode;
   }
   tail = newNode;

   // Sets head equal to tail if the head is at nullptr
   if (head == nullptr) {
       head = tail;
   }
}

// Deletes the head
int intDLList::deleteFromHead() {
   if (isEmpty()) {
	   // Exception thrown if the list is empty
       throw std::underflow_error("Cannot delete from an empty list.");
   }

   // Head element saved to return
   int el = head->data;
   intDLLNode* temp = head;
   head = head->next;

   // Checks what needs to be set equal to the nullptr
   if (head != nullptr) {
       head->prev = nullptr;
   } else {
       tail = nullptr;
   }

   // Delete temp that was declared
   delete temp;
   return el;
}

// Deletes the tail
int intDLList::deleteFromTail() {
   if (isEmpty()) {
	   // Exception thrown if the list is empty
       throw std::underflow_error("Cannot delete from an empty list.");
   }

   // Tail element saved to return
   int el = tail->data;
   intDLLNode* temp = tail;
   tail = tail->prev;

   // Checks what needs to be set equal to the nullptr
   if (tail != nullptr) {
       tail->next = nullptr;
   } else {
       head = nullptr;
   }

   // Delete temp that was declared
   delete temp;
   return el;
}

// Prints the list using a loop
void intDLList::printList() const {
   intDLLNode* current = head;
   while (current != nullptr) {
       std::cout << current->data << " ";
       current = current->next;
   }
   std::cout << std::endl;
}

// Inserts integer element in sorted order within the list
void intDLList::addSorted(int el) {
   intDLLNode* newNode = new intDLLNode(el);

   // What to do if list is empty
   if (isEmpty()) {
       head = tail = newNode;
       return;
   }

   intDLLNode* current = head;
   // Update current
   while (current != nullptr && current->data < el) {
       current = current->next;
   }
   if (current == head) {
       addToHead(el);
   } else if (current == nullptr) {
       addToTail(el);
   } else {
	   // What to do if the addition of element is in the middle and not at the ends
       newNode->prev = current->prev;
       newNode->next = current;
       current->prev->next = newNode;
       current->prev = newNode;
   }
}

// Deletes a node from the list
void intDLList::deleteNode(int el) {
    if (isEmpty()) {
        throw std::underflow_error("Cannot delete from an empty list.");
    }

    intDLLNode* current = head;

    // Loop to find the node to delete
    while (current != nullptr && current->data != el) {
        current = current->next;
    }

    // If the node is not found
    if (current == nullptr) {
        std::cerr << "Value " << el << " not found in the list.\n";
        return;
    }

    // Adjusts the pointers if node is found
    if (current->prev != nullptr) {
        current->prev->next = current->next;
    } else {
        head = current->next;
    }

    if (current->next != nullptr) {
        current->next->prev = current->prev;
    } else {
        tail = current->prev;
    }

    delete current;
}




