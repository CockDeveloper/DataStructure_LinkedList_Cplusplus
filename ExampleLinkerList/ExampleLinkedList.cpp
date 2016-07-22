// ExampleLinkedList.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Node.cpp"

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
    delete q;
	return 0;
}

