//
//  main.cpp
//  Lab_11
//
//  Copyright © 2015 CSE30. All rights reserved.
//

#include <iostream>
#include "Queue.h"
#include "LinkedList_Lab11.h"

int main()
{
    Queue queue;

    
    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);
    queue.enqueue(4);
    queue.enqueue(5);
    queue.enqueue(6);
    queue.enqueue(7);
    queue.enqueue(8);
    queue.enqueue(9);
    queue.enqueue(10);
    
    cout << "Queue is: \n";
    queue.print();
    cout<<"\n";
    cout <<endl;
    
    cout<<"Lets delete " << queue.front()<<  " element of the queue.";
    cout<<endl;
    cout<<queue.front() << " was deleted from queue. \n";
   
    cout<<"Our Queue is now: \n";
    queue.dequeue();
    queue.print();
    cout<<"\n";
    
    cout<<endl;
    
    cout<<"How many items in the queue would you like to delete (1-9): ";
    int delNum;
    cin>>delNum;
    
    if( delNum > 9 || delNum <=0)
    {
        cout<<"Incorrect amount!";
        cout<<endl;
    }
    
    else
    {
        for(int i=0; i < delNum; i++)
        {
            queue.dequeue();
        }
        
        cout<<"Our queue is now: \n";
        queue.print();
        cout<<"\n";
        cout<<endl;
    }
    
    if(queue.isEmpty())
    {

        cout<<"You can no longer delete anymore elements.";
        cout<<endl;
    }
   
    if(!queue.isEmpty())
    {
        cout<<"The size of our queue is:";
        cout<<queue.size();
        cout<<endl;
    }
    
    
    
}
