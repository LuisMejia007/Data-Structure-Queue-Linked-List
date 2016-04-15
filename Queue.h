//
//  Queue.hpp
//  Lab_11
//
//  Copyright © 2015 CSE30. All rights reserved.
//

#ifndef Queue_hpp
#define Queue_hpp

#include<stdio.h>
#include<cstdlib>
#include<iostream> 
#include "LinkedList_Lab11.h" 

using namespace std;


class Queue : public LinkedList
{
public:
    
    //Default Constructor
        Queue();
    
    
    //Destructor
        ~Queue();
    
    //void enqueue(int value)
    void enqueue(int value);
        //@param - will insert a new value at the back of the Queue
    
    //int dequeue ()
        int dequeue() throw();
        //@param - removes the first element of the Queue
        //Will also return of the element that has been dequeued
    
    //int& front
        int& front() throw();
        //returns a reference to the front of the element of the Queue 
};




#endif /* Queue_hpp */
