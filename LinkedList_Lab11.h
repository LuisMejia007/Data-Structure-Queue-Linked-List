//  LinkedList_Lab11.hpp
//  Lab_11
//

#ifndef LinkedList_Lab11_h
#define LinkedList_Lab11_h

#include  <stdio.h>
#include  <iostream>
#include  <cstdlib>

using namespace std;


typedef struct Node
{
    int val;
    Node* next;

}* Pointer;




class LinkedList
{
protected:
    
    Pointer first;
    Pointer last;
    
    
public:
    //Default Constructor
    LinkedList();
    
    //Destructor
    ~LinkedList();
    
    //Functions for Exercise 1
    
    void insertAtBack(int insertElement);
    //insertAtBack - inserts a new element at the end of the list
    //@param - the element that will be placed at the back
    
    int removeFromBack();
    //removeFromBack - removes the last element from the back of the list
    //returns - true if the element was successfully removed otherwise false
    
    void print();
    //print() - will print the entire linked list
    
    bool isEmpty();
    //isEmpty() - returns if the list is empty or not (true if empty, false if not)
    
    int size();
    //size() - returns the size of the linked list
    
    void clear();
    //clear() - will clear the linked list
    
    
    //Functions for Exercise 2
    void insertAtFront(int insertElement);
    //insertAtFront - will insert a new element in the front of the linked list
    //@param - an integer value that will be moved to the front
    
    bool removeFromFront();
    //removeFromFront() - will remove an integer from the front of the linked list (first element)
    //removeFromFront() - will return true if the element was successfully removed, false if not
    
    
};

#endif /* LinkedList_h */





