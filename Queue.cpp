//  Queue.cpp
//  Lab_11
//  Copyright © 2015 CSE30. All rights reserved.
#include "LinkedList_Lab11.h"
#include "Queue.h"

//Constructor
Queue :: Queue ()
{
    
}


//Destructor
Queue :: ~Queue()
{
    
}

//Enqueue Function
void Queue :: enqueue(int value)
{
    insertAtBack(value);

}


//Dequeue Function
int Queue :: dequeue() throw()
{
    try
    {
        
        if(isEmpty())
        {
            
            throw 1;
        }
        
    }
    catch (int exception1)
    {
        cout<<"The call to dequeue() generated an exception, because the queue is empty. ERROR 1.";
        
    }

    
    return removeFromFront();


}

//Front Function
int& Queue :: front() throw()
{
    
   
    try
    {
    
        if(isEmpty())
        {
        
            throw 2;
        }
        
    }
    catch (int exception2)
    {
        cout<<"The call to dequeue() generated an exception, because the queue is empty. ERROR 2.";
        
    }
    
    
    
    return first ->val;
   
    
}