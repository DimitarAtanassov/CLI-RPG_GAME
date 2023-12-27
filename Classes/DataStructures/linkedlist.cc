// template <class T>
// LinkedList<T>::LinkedList()
// {
//     this->head = NULL;
//     this->length = 0;
//     this->tail = NULL;
// }

// Above is an example of the constructor for a linked list
#include <stdio.h>
#include <string>
#include <linkedlist.hh>

template<class T> 
linkedList<T>::linkedList()
{
    head = nullptr;
    tail = nullptr;
}

template <class T>
void linkedList<T>::insertHead(T data)
{
    // Create a new node w/ data
    Node<T> *newNode = new Node<T>(data);
    
    // Check if list is empty
    if(this->head == nullptr)
    {
        newNode->next = NULL;
        head = newNode;
        tail = newNode;
        return;
    }
    
    // List is not empty
    // head -> a -> k -> d
    // head -> NN -> a -> k -> d
    
    // newNode will now point to whatever head is pointing to (aka to old head, which points to the rest of the list)
    newNode->next = head;
    
    // head will now point to newNode because it is the newhead
    head = newNode;
}

template <class T>
Node<T>* linkedList<T>::getHead()
{
    // List is empty
    if(this->head == nullptr)
    {
        return nullptr;
    }
    
    // List not empty
    return this->head;
}

template <class T>
void linkedList<T>::insertTail(T data)
{
    // Create new node containing the user provided data
    Node<T>* newNode = new Node<T>();
    newNode->data = data;
    newNode->next = NULL; // tail node has null as its next reference.
    
    //Check if list is empty
    if(this->tail == nullptr)
    {
        this->tail = newNode;
        this->head = newNode;
        return;
    }

    // List is not empty
    // a -> b -> c -> d-> NULL
    // a -> b -> c -> d -> newNode -> NULL                    
    Node<T>* curr = head;
    while(curr->next != NULL)
    {
        curr = curr->next;
    }

    // Insert newNode after the old tail
    curr->next = newNode;
    this->tail = newNode;
    return;
}


