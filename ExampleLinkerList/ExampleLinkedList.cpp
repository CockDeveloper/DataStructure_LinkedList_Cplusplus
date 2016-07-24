// ExampleLinkedList.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Node.cpp"
#include "NodeInt.h"

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
    //Node<char> *p,*q,*r;
    NodeLib::Node<char> p,*q,*r;
    // Link the nodes with each other
    q = new NodeLib::Node<char>('B'); // here ptrNext is passed by a nullptr by default
    //p = new Node<char>('A',q);
    //r = new Node<char>('C');
    cout << "q data is " << q->GetData() << endl;

    NodeLib::NodeInt *head = NULL;
    head = NodeLib::InsertAtHead(head, 2);
    Print(head);
    while (head != NULL)
    {
        NodeLib::NodeInt *ptrCurrent = head;
        head = head->next;
        delete ptrCurrent;
    }

    NodeLib::InsertAtHead(NodeLib::InsertAtHead(head, 1), 2);
    Print(head);
    while (head != NULL)
    {
        NodeLib::NodeInt *ptrCurrent = head;
        head = head->next;
        delete ptrCurrent;
    }

    delete q;
	return 0;
}

