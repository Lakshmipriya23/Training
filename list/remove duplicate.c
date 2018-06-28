/*remove duplicate.cpp Friday 05 18 2018 10:30:00 Lakshmipriya */

/*
Module:
       remove duplicate.c
Function:
        To remove the duplicate elements.
Version:
        V1.01a Wednesday 05 16 2018 10:30:00 Lakshmipriya Edit level 1

Copyright notice:
        This file copyright (C) 2018 by

                MCCI Corporation
                3520 Krums Corners Road
                Ithaca, NY 14850

        An unpublished work. All rights reserved.

        This file is proprietary information, and may not be disclosed or
        copied without the prior permission of MCCI Corporation.

Author:
        Lakshmi priya.N, MCCI 05 2018

Revision history:
        1.00A Wednesday 05 16 2018 10:30:00  Lakshmi priya
        Module created.

*/

#include "stdafx.h"
#include<stdio.h>
#include<stdlib.h>
****************************************************************************\
|
|       Manifest constants & typedefs.
|
|       This is strictly for private types and constants which will not
|       be exported.
|
\****************************************************************************/

 typedef struct node
{
 int data;
 node *next;
}node;
/****************************************************************************\
|
|       Read-only data.
|
|       If program is to be ROM-able, these must all be tagged read-only
|       using the ROM storage class; they may be global.
|
\****************************************************************************/


/****************************************************************************\
|
|       VARIABLES:
|
|       If program is to be ROM-able, these must be initialized
|       using the BSS keyword.  (This allows for compilers that require
|       every variable to have an initializer.)  Note that only those
|       variables owned by this module should be declared here, using the BSS
|       keyword; this allows for linkers that dislike multiple declarations
|       of objects.
|
\****************************************************************************/

Name: 
        insert();
Function:
        This function inserts the element to  the linked list.
Definition: 
        node insert(node  head_node)
Description: 
        This function creates newnode and inserts the newnode to the 
        list if the list is not null.
        If the list is null,new node is inserted as head node.
Returns:
       nothing

void  insert_at_begin()
{
        struct node* newnode;
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("enter element to insert");
        scanf_s("%d", &newnode->data);
        newnode->next = NULL;
        if (head == NULL)
        {
                
                head = newnode;
                
        }
        else
        {
                newnode->next = head;
                head = newnode;
        }printf("element inserted");

}

Name: 
        insert();
Function:
        This function inserts the element to  the linked list.
Definition: 
        node insert(node  head_node)
Description: 
        This function creates newnode and inserts the newnode to the 
        list if the list is not null.
        If the list is null,new node is inserted as head node.
Returns:
        nothing
void insert_after()
        {
        int location;
        struct node* newnode;
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("enter element to insert");
        scanf_s("%d", &newnode->data);
        printf("enter the location");
        scanf_s("%d", &location);
        if(head==NULL)
                {
                head = newnode;
                newnode->next = NULL;
                }
        else
                {
                struct node* temp = head;
                while (temp->next != NULL && temp->data != location)
                        temp = temp->next;
                newnode->next = temp->next;
                temp->next = newnode;

                }
        

        }
Name: 
         insert();
 Function:
         This function inserts the element to  the linked list.
 Definition: 
         node insert(node  head_node)
 Description: 
         This function creates newnode and inserts the newnode to the 
         list if the list is not null.
         If the list is null,new node is inserted as head node.
 Returns:
        nothing
void insert_at_end()
        {
        struct node* newnode;
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("enter element to insert");
        scanf_s("%d", &newnode->data);
        newnode->next = NULL;
        if (head == NULL)
                {
                head = newnode;
                }
        else
                {
                struct node* temp = head;
                while (temp->next != NULL)
                        temp = temp->next;
                temp->next = newnode;
                }
        
        }
Name:
         display()
 Function:
         void display();
 Definition:
         This function displays the elements of the list.
 Description:
         This function traverse all the elements of the list and 
         prints the element until null is found.
 Returns:
        Nothing.
void display()
        {
        if (head == NULL)
                {
                printf("\nList is Empty\n");
                }
        else
                {
                struct node *temp = head;
                printf("\n\nList elements are - \n");
                while (temp->next != NULL)
                        {
                        printf("%d --->", temp->data);
                        temp = temp->next;
                         }
                printf("%d --->NULL", temp->data);
                }
        }

Name:
       length()
Function:
        int length()
Definition:
        This function finds the length.
Description:
        This function finds the length.
Returns:
        length.
int length()
        {
        int counter = 0;
        struct node *temp=head;
        while(temp!=NULL)
                {
                temp = temp->next;
                counter++;
                } 
        return counter;
        }


Name:
         duplicate()
 Function:
         remove_duplicate()
 Definition:
         This function removes the duplicate elements.
 Description:
         This function traverse all the elements of the list and 
         deletes the duplicate element.
 Returns:
        Nothing.
void remove_duplicate()
        {
        node *temp = head;node*temp2=head;
        node *temp1=head->next;
        while (temp1 != NULL)
                while (temp != NULL && temp->data != temp1->data)
                        {
                        temp1 = temp1->next;
                        temp2 = temp2->next;
                        temp = temp->next;
                        }
        temp1 = temp1->next;
        temp2->next = temp1->next;
                
        }

Name:
        main()
Function:
        void main();
Definition:
        This function performs the specified operation.
        
Description:
        This function is to perform operations such as insertion,
        sorting,merging.
        
Returns:
        Nothing.

int main()
        {
        int choice,s;
        bool bExit;
        bExit = false;

        while(1)
                {
                printf("\nenter your choice\n1.add at begin 2.insert after 3.insert at end 4.display 5.find length 6.remove duplicate\n");
                scanf_s("%d", &choice);
                s = 0;

                switch (choice)
                        {
                        case 1: insert_at_begin();
                        break;
                        case 2:insert_after();
                        break;
                        case 3:insert_at_end();
                        break;
                        case 4: display();
                        break;
                        case 5: s= length();
                        printf("\nlength of the list is %d", s);
                        break;
                        case 6:remove_duplicate();
                        break;

                        case 7:
                        bExit = true;

                default: printf("wrong choice");
                        break;
                        }
                if (bExit)
                        break;
                        }
                return 0;
           }

