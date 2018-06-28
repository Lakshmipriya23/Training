// delete_even.c: Defines the entry point for the console application.
//
/*delete_even.cpp Friday 05 18 2018 10:30:00 Lakshmipriya */

/*
Module:
        delete_even.c
Function:
        To delete the even numbers.
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

 
/****************************************************************************\
|
|       Read-only data.
|
|       If program is to be ROM-able, these must all be tagged read-only
|       using the ROM storage class; they may be global.
|
\****************************************************************************/
struct node
{
	int data;
	struct node *next;
	struct node *prev;
};
typedef node NODE;
NODE *head = NULL;

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
        craetenode();
Function:
        This function creates new node.
Definition: 
        NODE *createnode()
Description: 
        This function creates newnode.
Returns:
       nothing


NODE *createnode()
	{
	NODE *newnode;
	newnode = (struct node*)malloc(sizeof(struct node));
	newnode->next=newnode->prev= NULL;
	return newnode;
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
       head.
NODE *add(NODE *head)
	{
    	NODE *newnode = createnode();
    	printf("enter data to insert\n");
    	scanf_s("%d", &newnode->data);
    	if (head == NULL)
    		{
		head = newnode;
    		}
   	else
    		{
		NODE *temp = head;
		while (temp->next != NULL)
	    	temp = temp->next;
		temp->next = newnode;
		newnode->prev = temp;

   		 }
    
    	return head;
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
void display(NODE *head)
	{
	if (head == NULL)
		{
		printf("list is empty\n");
		}
	else
		{
		NODE *current_node = head;
		while(current_node!= NULL)
			{
			printf("%d-->", current_node->data);
			current_node = current_node->next;
			}
		
		}
	printf("\n");
	
	}

ame: 
         deletionh();
 Function:
         This function deletes the element from  the linked list.
 Definition: 
         node insert(node  head_node)
 Description: 
         This function deletes the node.
 Returns:
        nothing
NODE *deletion(NODE *head)
	{
	NODE *temp = head;
	if (temp == NULL)
		{
		printf("no elements\n");
		}
	else
		{
		int temp_val;
		while (temp != NULL)
			{
			temp_val = temp->data;
			if (temp_val % 2 == 0||temp_val==0) 
				{
				if (temp==head)
					{if(temp->next==NULL)
						{
						head = NULL;
						}
				else
					{
					head = temp->next;
					head->prev = NULL;
					
					}
				}
				else
					{
					if(temp->next==NULL)
						{
						temp->prev->next = NULL;
						
						}
					else
						{
						temp->prev->next = temp->next;
						temp->next->prev = temp->prev;
						
						
						}
					}
				printf("%d is deleted\n", temp_val);
				}
		temp = temp->next;

		}
		
		}

	display(head);
	free(temp);
	return head;
	}

Name:
        main()
Function:
        void main();
Definition:
        This function performs the specified operation.
        
Description:
        This function is to perform operations such as insertion,
        sorting,deletion.
        
Returns:
        Nothing.

void main()
	{
	int ch;
	bool Bexit = false;
	while (1)
		{
		printf("1.add 2.display 3.exit 4.delete even\n");
		scanf_s("%d", &ch);
		switch (ch)
			{
			case 1:head = add(head);
			break;
			case 2:display(head);
			break;
			case 3:Bexit = true;
			break;
			case 4:head=deletion(head);
			}
		if (Bexit == true)
			{
			break;
			}
		}
	

	}
