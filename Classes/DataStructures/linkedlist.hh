#ifndef LINKED_LIST_H
#define LINKED_LIST_H

//Node Struct
template <class T>
struct Node
{
    struct Node *next;
    T data;
};


// Linked List Class
template <class T> 
class linkedList{
    
    private:


        // Linked List Vars
        Node<T> *head; 
        Node<T> *tail;
    
    
    public:
            
            linkedList(); // Constructor
            ~linkedList();  // Deconstructor
            void insertHead(T); // Do not need to enter a parameter name in the header file only its type.
            Node<T>* getHead();
            void insertTail(T);    
            // Functions to implement
            /*
                bool insert(*int index); //Insert anywhere
                iterate();
                printList();
                swapNode();
                removeNode();
                addNode();
                
            */
    

};

#endif