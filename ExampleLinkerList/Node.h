#pragma once

#ifndef NODE_H
#define NODE_H


using namespace std;

template<typename T>
//template<class T>
class Node
{
public:
    Node(void);
    Node(const T& data, Node<T>* ptrNext = NULL);
    ~Node(void);

    // access to the next node
    Node<T>* NextNode();

    // list modifycation methods
    void InsertAfter(Node<T>* ptrNext);
    Node<T>* DeleteAfter(void);

    Node<T>* GetNode(const T& data, Node<T>* ptrNext = NULL);

    T GetData(void);
    void SetData(T data);

private:
    T data;
    Node<T>* next;
    void SetNext(Node<T>* ptrNext);

};
#endif // NODE_H