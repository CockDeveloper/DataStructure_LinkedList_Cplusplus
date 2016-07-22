// ExampleLinkedList.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Node.cpp"




int _tmain(int argc, _TCHAR* argv[])
{
    //Node<char> *p,*q,*r;
    Node<char> p,*q,*r;
    // Link the nodes with each other
    q = new Node<char>('B'); // here nxtptr is passed by a nullptr by default
    //p = new Node<char>('A',q);
    //r = new Node<char>('C');
	return 0;
}

