#include "StdAfx.h"
#include "Node.h"

template<typename T>
//template<class T>
Node<T>::Node(void)
{
    // default constructor
    // this is to allow us to create an object without any initialization
}

template<typename T>
//template<class T>
Node<T>::Node(const T& data, Node<T>* ptrNext = NULL)
{
    this->SetData(data);
    this->SetNext(ptrNext);
}

template<typename T>
//template<class T>
Node<T>::~Node(void)
{

}

template<typename T>
//template<class T>
Node<T>* Node<T>::NextNode(void)
{
    return this->next;
}

template<typename T>
//template<class T>
void Node<T>::InsertAfter(Node<T>* ptrNext)
{
    // not to lose the rest of the list, we ought to link the rest of the
    // list to the Node<T>* p first
    p->next = this->next;

    // now we should link the previous Node to Node<T> *p , i.e the Node that we are
    //inserting after,
    this->next = p;
}

template<typename T>
//template<class T>
Node<T>* Node<T>::DeleteAfter(void)
{
    // store the next Node in a temporary Node
    Node<T>* tempNode = next;
    // check if there is a next node
    if(next != NULL)
        next = next->next;

    return tempNode;
}

template<typename T>
//template<class T>
Node<T>* Node<T>::GetNode(const T& data, Node<T>* ptrNext = NULL)
{
    Node<T>* newnode; // Local ptr for new node
    newnode = new Node<T>(data,ptrNext);
    if ( newnode == NULL)
    {
        cerr << "Memory allocation failed." << endl;
        exit(1);
    }
    return newnode;
}

template<typename T>
//template<class T>
T Node<T>::GetData(void)
{
    return this->data;
}

template<typename T>
//template<class T>
void Node<T>::SetData(T data)
{
    this->data = data;
}

template<typename T>
//template<class T>
void Node<T>::SetNext(Node<T>* ptrNext)
{
    this->next = ptrNext;
}
