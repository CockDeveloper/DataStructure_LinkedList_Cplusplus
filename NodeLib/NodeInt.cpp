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

    tNodeInt* InsertNth(tNodeInt *head, int data, int position)
    {
        tNodeInt* ptrPosition = head;
        tNodeInt* ptrNewNode = new tNodeInt;
        if(ptrNewNode == NULL)
        {
            cerr << "Memory allocation failed." << endl;
            exit(1);
        }
        ptrNewNode->data = data;
        ptrNewNode->next = NULL;

        if(position == 0)
        {
            ptrNewNode->next = head;
            head = ptrNewNode;
        }
        else
        {
            while(position != 1)
            {
                ptrPosition = ptrPosition->next;
                --position;
            }
            tNodeInt* ptrPositionNext = ptrPosition->next;
            ptrPosition->next = ptrNewNode;
            ptrNewNode->next = ptrPositionNext;
        }

        return head;
    }

    tNodeInt* Delete(tNodeInt *head, int position)
    {
        tNodeInt *ptrDelete = head;
        if(position == 0)
        {
            if(ptrDelete != NULL)
            {
                head = ptrDelete->next;
            }
            else
            {
                head = NULL;
            }

        }
        else
        {
            tNodeInt *ptrPosition = head;
            while(position != 1)
            {
                ptrPosition = ptrPosition->next;
                --position;
            }

            ptrDelete = ptrPosition->next;
            ptrPosition->next = ptrPosition->next->next;
        }

        delete ptrDelete;
        return head;
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