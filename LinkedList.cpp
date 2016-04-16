//  LinkedList_Lab11.cpp
//  Lab_11
//

#include "LinkedList_Lab11.h"



//Default Constructor

LinkedList :: LinkedList()
{
    first = NULL;
    last = NULL;
    
}


//Destructor

LinkedList :: ~LinkedList()
{
    clear();
    
}


//insertAtBack Function: inserts an element in the back
void LinkedList :: insertAtBack(int newElement)
{
    Pointer temp  = new Node;        //I create a new node called "temp"
    temp -> val  =  newElement;       //I want to store the insertionElement inside my node's value box.
    
    /* This conditional checks if the linked list is empty. If there is no linked list already created than the newly created node will become the first element.*/
    
    if(first == NULL)
    {
        first = temp;                //The beginning node will now become the node that was just created at the top
        
    }//closes if-statement
    
    /*If there isn't already a last element, then the last element will become the newly created node.*/
    if(last == NULL)
    {
        last = temp;                 /*The last node will also be the newly created node. 
                                      Keep in mind that at this point in the program, 
                                      it is assuming that a linked list hasnt already been created*/
    }
    
    /*If a linked list already exists*/
    else
    {
        last -> next = temp;         //Then the last node in the list will now point to the newly created node
        last = temp;                 //And that newly created node will now be the last node in the linked list
    }
    


}

//removeFromBack, removes element from the back
int  LinkedList :: removeFromBack()
{
    Pointer temp = first;
    
    if(first == NULL)
    {
        return 0;
    }
    
    if (first == last)
    {
        delete first;
        first = 0;
        return 0;
    }
    
    
    while( temp ->next != last)   //While we haven't reached the last node in the linked list
    {
        temp = temp -> next;      //Continue updating the newNode to be whatever it was pointing to
    }
    temp  = last;
    delete last;                     //Once we have reached the last node in the list, delete it
    last = temp;                     //The newly updated newNode(in the while loop) will now be the last node in the linked list
    
    return temp -> val;

    
}



//Checks if Linked List is empty or not
bool LinkedList :: isEmpty()
{
    
    if (first == NULL)              //If the List starts to Null to begin with, then that possibly means that arent any elements inside the list
    {
        return true;
    }
    else
    {
        return false;
    }
}

//Returns the size of the Linked List
int LinkedList :: size()
{
    int counter = 1;                    //Will be used to count
    
    Pointer newNode;                   //Create a new node that takes in the elements of the first node
    
    if( first == NULL && last == NULL)
    {
        return 0;
    }
    
    else
    {
        newNode = first;
        
        while(newNode != last)          /*Until we reach the end of the linked list, which will be pointed to NULL, 
                                         count how many nodes are in the list*/
        {
            newNode = newNode-> next;   //Make sure to keep updating the newNode to be whatever it was pointing to
            counter++;                  //Counts the amount of times this sequence occurs
            
        }//closes while loop
    }
    return counter;                 //Will return the amount of incrementations done within the while loop
}//closes size() function

//Clears the Linked List
void LinkedList :: clear()
{
    
    if(!isEmpty())                  /*If the linked list is not empty than we start removing elements from the back*/
    {
        removeFromBack();
    }
    
}

//Inserts a new element to the front of the Linked List
void LinkedList :: insertAtFront(int insertElement)
{
    Pointer newNode = new Node;     //We create a new node
    newNode -> val = insertElement; //We put in a value within the node. This value is the insertion element
    
    /*This conditional assumes that a linked list hasn't already been created*/
    if(first == NULL)
    {
        first = newNode;
    }
    
    if(last == NULL)
    {
        last = newNode;
    }
    /*This part of the code assumes that a linked list has already been created*/
    else
    {
        newNode -> next = first;        //The first element will now start following whatever "connect" is pointing to.
        first = newNode;                //The first element is now connect node
    }
 
    
} //closes insertAtFront() function

bool LinkedList :: removeFromFront()
{
    
    Pointer newNode = first;
    
    if( first == NULL)              //Since there isn't anything in the list than there wouldn't be anything to remove, thus nothing will be removed
    {
        return false;
    }
    
    if (first == last)
    {
        delete first;
        first = NULL;
        last = NULL;
        return true;
    }
    else
    {
        newNode  = first -> next;   //Set the new node : connect, to equal whatever the next node in the linked list is
        delete first;               //If the list has been already made, delete the first item in the list
        first = newNode;            //It will then become the first node in the linked list
        return true;
    }
    
    
    
}//closes removeFromFront() function



void LinkedList :: print()
{
    
    
    if (first != NULL)
    {
        Pointer temp = first;
        
        while( temp != last)
        {
            cout<< temp -> val <<"\n";
            temp = temp -> next;
        }
        
        cout<<temp -> val;
    }
    
    else
    {
        cout<<"Queue empty.";
    }

}



