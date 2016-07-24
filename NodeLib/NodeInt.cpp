#include "stdafx.h"
#include "NodeInt.h"
#include <iostream>

using namespace std;

namespace NodeLib
{

    tNodeInt* InsertAtHead(tNodeInt *head, int data)
    {
        //set update newNode
        tNodeInt *pNewNode = new tNodeInt;
        pNewNode->data = data;

        //Insert into list
        //step 1: set next (of newNode) is head
        pNewNode->next = head;

        //step 2: set head is newNode
        return pNewNode;
    }

    bool InsertAtHead(tNodeInt **head, int data)
    {
        bool isCreatedNode = false;
        //set update newNode
        tNodeInt *pNewNode = new tNodeInt;
        if(pNewNode != NULL)
        {
            isCreatedNode = true;
            pNewNode->data = data;

            //Insert into list
            //step 1: set next (of newNode) is head
            pNewNode->next = *head;

            //step 2: set head is newNode
            *head = pNewNode;
        }
        else
        {
            isCreatedNode = false;
            cerr << "Memory allocation failed." << endl;
            exit(1);
        }

        return isCreatedNode;
    }

    void Print(tNodeInt *head)
    {
        tNodeInt *ptrCurrent = head;
        while (ptrCurrent != NULL)
        {
            cout << ptrCurrent->data << endl;
            ptrCurrent = ptrCurrent->next;
        }
    }
}