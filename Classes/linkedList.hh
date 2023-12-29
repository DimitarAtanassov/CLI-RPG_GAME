#ifndef LINKED_LIST_H
#define LINKED_LIST_H

// Node Struct
template <class T>
struct Node
{
    struct Node *next;
    T data;
};

// Linked List Class
template <class T>
class linkedList
{

private:
    // Linked List Vars
    Node<T> *head;
    Node<T> *tail;

public:
    linkedList() // Constructor
    {
        head = nullptr;
        tail = nullptr;
    }

    ~linkedList() // Destructor
    {
        // Destructor implementation, delete each Node in the linked list
        Node<T> *current = head;
        Node<T> *next;

        while (current != nullptr)
        {
            next = current->next;
            delete current;
            current = next;
        }
    }

    void insertHead(T data)
    {
        // Create a new node w/ data
        Node<T> *newNode = new Node<T>(data);

        // Check if list is empty
        if (this->head == nullptr)
        {
            newNode->next = nullptr;
            head = newNode;
            tail = newNode;
            return;
        }

        // List is not empty
        // head -> a -> k -> d
        // head -> NN -> a -> k -> d

        // newNode will now point to whatever head is pointing to (aka to old head, which points to the rest of the list)
        newNode->next = head;

        // head will now point to newNode because it is the new head
        head = newNode;
    }
    Node<T> *getHead()
    {
        // List is empty
        if (this->head == nullptr)
        {
            return nullptr;
        }

        // List not empty
        return this->head;
    }

    void insertTail(T data)
    {
        // Create new node containing the user provided data
        Node<T> *newNode = new Node<T>();
        newNode->data = data;
        newNode->next = nullptr; // tail node has null as its next reference.

        // Check if list is empty
        if (this->tail == nullptr)
        {
            this->tail = newNode;
            this->head = newNode;
            return;
        }

        // List is not empty
        // a -> b -> c -> d-> NULL
        // a -> b -> c -> d -> newNode -> NULL
        Node<T> *curr = head;
        while (curr->next != nullptr)
        {
            curr = curr->next;
        }

        // Insert newNode after the old tail
        curr->next = newNode;
        this->tail = newNode;
    }

    bool isEmpty()
    {
        return this->head == nullptr;
    }
};


#endif
