//============================================================================
// Name        : lab6.cpp
// Author      : Ivan Byju
// This is the main function for a project that implements doubly linked lists.
// Using doubly linked lists, this project also implements stacks and queues.
// (It is worth mentioning that it would be better to implement stacks and
//  queues using singly linked lists in the real world, as discussed in class).
//============================================================================

#include "intDLList.h"
#include "queue.h"
#include "stack.h"
#include <iostream>
#include <stdexcept>


int main() {
	// Create objects
	intDLList simpleList;
    intDLList sortedList;
    Queue queue;
    Stack stack;

    // Variables to be used when running switch statements
    int choice, value;


    while (true) {
    	// Main menu options
        std::cout << "\nMain Menu:\n";
        std::cout << "1. Create Simple (Unsorted) List\n";
        std::cout << "2. Create Sorted List\n";
        std::cout << "3. Create Queue (FIFO)\n";
        std::cout << "4. Create Stack (LIFO)\n";
        std::cout << "5. Exit program\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;


        try {
           switch (choice) {
           case 1: {
               int listChoice;
               do {
            	   // Options for the simple unsorted list
                   std::cout << "\nSimple List Menu:\n";
                   std::cout << "1. Enter integer for insertion at head of list\n";
                   std::cout << "2. Enter integer for insertion at tail of list\n";
                   std::cout << "3. Display and delete integer from head of list\n";
                   std::cout << "4. Display and delete integer from tail of list\n";
                   std::cout << "5. Search for integer in list, and delete that node\n";
                   std::cout << "6. Display contents of list from head to tail, in order\n";
                   std::cout << "7. Exit program\n";
                   std::cout << "Enter your choice: ";
                   std::cin >> listChoice;

                   // Specifications for the functions to call given user choice
                   switch (listChoice) {
                   case 1:
                       std::cout << "Enter integer for insertion at head: ";
                       std::cin >> value;
                       simpleList.addToHead(value);
                       break;
                   case 2:
                       std::cout << "Enter integer for insertion at tail: ";
                       std::cin >> value;
                       simpleList.addToTail(value);
                       break;
                   case 3:
                       std::cout << "Deleted from head: " << simpleList.deleteFromHead() << std::endl;
                       break;
                   case 4:
                       std::cout << "Deleted from tail: " << simpleList.deleteFromTail() << std::endl;
                       break;
                   case 5:
                       std::cout << "Enter value to search and delete: ";
                       std::cin >> value;
                       simpleList.deleteNode(value);
                       break;
                   case 6:
                       std::cout << "List contents: ";
                       simpleList.printList();
                       break;
                   case 7:
                       break;
                   default:
                       std::cout << "Invalid choice. Try again.\n";
                   }
               } while (listChoice != 7);
               break;
           }


           case 2: {
               int sortedChoice;
               do {
            	   // Options for the sorted list
                   std::cout << "\nSorted List Menu:\n";
                   std::cout << "1. Enter integer for sorted insertion (increasing order) into list\n";
                   std::cout << "2. Search and delete integer, if present in list\n";
                   std::cout << "3. Display contents of sorted list of integers, in increasing order\n";
                   std::cout << "4. Exit program\n";
                   std::cout << "Enter your choice: ";
                   std::cin >> sortedChoice;

                   // Specifications for the functions to call given user choice
                   switch (sortedChoice) {
                   case 1:
                       std::cout << "Enter integer for sorted insertion: ";
                       std::cin >> value;
                       sortedList.addSorted(value);
                       break;
                   case 2:
                       std::cout << "Enter value to search and delete: ";
                       std::cin >> value;
                       sortedList.deleteNode(value); // Assuming `deleteNode` is implemented
                       break;
                   case 3:
                       std::cout << "Sorted List contents: ";
                       sortedList.printList();
                       break;
                   case 4:
                       break;
                   default:
                       std::cout << "Invalid choice. Try again.\n";
                   }
               } while (sortedChoice != 4);
               break;
           }


           case 3: {
               int queueChoice;
               do {
            	   // Menu options for the queue
                   std::cout << "\nQueue Menu:\n";
                   std::cout << "1. ENQUEUE\n";
                   std::cout << "2. DEQUEUE\n";
                   std::cout << "3. PRINT QUEUE\n";
                   std::cout << "4. Exit program\n";
                   std::cout << "Enter your choice: ";
                   std::cin >> queueChoice;

                   // Specifications for the functions to call given user choice
                   switch (queueChoice) {
                   case 1:
                       std::cout << "Enter integer to enqueue: ";
                       std::cin >> value;
                       queue.enqueue(value);
                       break;
                   case 2:
                       std::cout << "Dequeued: " << queue.dequeue() << std::endl;
                       break;
                   case 3:
                       std::cout << "Queue contents: ";
                       queue.printQueue();
                       break;
                   case 4:
                       break;
                   default:
                       std::cout << "Invalid choice. Try again.\n";
                   }
               } while (queueChoice != 4);
               break;
           }


           case 4: {
               int stackChoice;
               do {
            	   // Menu options for the stack
                   std::cout << "\nStack Menu:\n";
                   std::cout << "1. PUSH\n";
                   std::cout << "2. POP\n";
                   std::cout << "3. PRINT STACK\n";
                   std::cout << "4. Exit program\n";
                   std::cout << "Enter your choice: ";
                   std::cin >> stackChoice;

                   // Specifications for the functions to call given user choice
                   switch (stackChoice) {
                   case 1:
                       std::cout << "Enter integer to push: ";
                       std::cin >> value;
                       stack.push(value);
                       break;
                   case 2:
                       std::cout << "Popped: " << stack.pop() << std::endl;
                       break;
                   case 3:
                       std::cout << "Stack contents: ";
                       stack.printStack();
                       break;
                   case 4:
                       break;
                   default:
                       std::cout << "Invalid choice. Try again.\n";
                   }
               } while (stackChoice != 4);
               break;
           }


           case 5:
               std::cout << "Exiting program.\n";
               return 0;


           default:
               std::cout << "Invalid choice. Try again.\n";
           }
       } catch (const std::exception &e) {
    	   // Error handling
    	   // Source: https://www.geeksforgeeks.org/exception-handling-c/
           std::cerr << "Error: " << e.what() << std::endl;
       }
   }
   return 0;
}



