/*stack_implementation.c Mon Jun 08 2018 12:30:00 Lakshmi priya */
/*
Module:	
       stack_implementation.c
Function:
        push,pop operations in stack
Version:
	V1.01a Mon Jun 08 2018 12:30:00 Abinaya Edit level 1
Copyright notice:
	This file copyright (C) 2018 by
		MCCI Corporation
		3520 Krums Corners Road
		Ithaca, NY 14850
	An unpublished work. All rights reserved.
	This file is proprietary information, and may not be disclosed or
	copied without the prior permission of MCCI Corporation.
Author:
	Lakshmi priya, MCCI Jun 2018
Revision history:
	1.01a Mon Jun 08 2018 12:30:00  Abinaya
	Module created.
*/
#include "stdafx.h"
#include<stdio.h>
#include<stdlib.h>


/****************************************************************************\
|
|	Manifest constants & typedefs.
|
|	This is strictly for private types and constants which will not
|	be exported.
|
\****************************************************************************/


/****************************************************************************\
|
|	Read-only data.
|
|	If program is to be ROM-able, these must all be tagged read-only
|	using the ROM storage class; they may be global.
|
\****************************************************************************/



/****************************************************************************\
|
|	VARIABLES:
|
|	If program is to be ROM-able, these must be initialized
|	using the BSS keyword.  (This allows for compilers that require
|	every variable to have an initializer.)  Note that only those
|	variables owned by this module should be declared here, using the BSS
|	keyword; this allows for linkers that dislike multiple declarations
|	of objects.
|
\****************************************************************************/

struct node
        {
        int data;
        struct node *pnext;
        }*ptop = NULL;
/*
        Name:
                push()
        Function:
                This function inserts the elements in queue.
        Definition:
                void push(
                        int v
                        );
        Description:
                This function creates a new node and assigns the new node to the element to be inserted.The condition,whether the stack is empty is checked.
                after inserting the element the stack top is assigned to the new node.
        Returns:
                Nothing.
 */
        void push(
        int v
        )
        {
        struct node *pnewnode;/*create new node */
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data = v;
        if (top == NULL)
                pnewnode->pnext = NULL;
        else
                pnewnode->pnext = top;
        ptop = pnewnode;
        }
 /*
        Name:
                pop()
        Function:
                This function deletes element from the queue.
        Definition:
                void pop();
        Description:
                This function checks whether the stack is empty.If not it aasigns the top of the stack to the previous node and free the element
        Returns:
                Nothing.
   */
void pop()
        {
        if (ptop == NULL)
                {
                printf("stack empty");
                }
        else
                {
                struct node *ptemp = ptop;
                ptop = ptemp->pnext;
                free(ptemp);
                }
        }
        
/*
        Name:
                display()
        Funtion:
                This function displays the elements of the stack
        Definition:
                void display();
        Description:
                This function prints all the elements of the stack until stack top is found to be null.
        Returns:
                Nothing.
   */
void display()
{
        if (ptop == NULL)
                printf("stack empty");
        else
                {
                struct node *ptemp = ptop;
                while (ptemp != NULL)
                {
                        printf("%d->", ptemp->data);
                        ptemp = ptemp->pnext;
                }   printf("\n");
                }
}
/*
        Name:
                main()
        Function:
                This function asks for the operation to be carried out.
        Definition:
                void main()
        Description:
                This function displays the choice for the operation and gets the operation to be carried out.
        Returns:
                Nothing.
 */
void main()
        {
        int choice, value,size,counter=0;
        
        do 
                {
                printf("1.push 2.pop 3.display 4.exit\n");
                scanf_s("%d", &ch);
                switch (ch)
                        {
                        case 1: printf("Enter the number of stack elements:");
                                scanf_s("%d", &size);
                                do
                                        {
                                        printf("enter element to push\n");
                                        scanf_s("%d", &value);
                                        push(value);
                                        counter++;
                                        }while(counter<size);
                                break;
                        case 2: pop();
                                break;
                        case 3:display();
                                break;
                        default:printf("Exit choice");break;break;
                        }
                }   while (ch<4);
            getchar();
        }
