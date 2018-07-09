/*list.cpp Monday 07 09 2018 10:40:00 Lakshmipriya */

/*
Module:
    list.c
Function:
    linked list
Version:
    V1.01a Monday 07 09 2018 10:40:00 Lakshmipriya Edit level 1

Copyright notice:
    This file copyright (C) 2018 by

    MCCI Corporation
    3520 Krums Corners Road
    Ithaca, NY 14850

    An unpublished work. All rights reserved.

    This file is proprietary information, and may not be disclosed or
    copied without the prior permission of MCCI Corporation.

Author:
    Lakshmi priya.N, MCCI 07 2018

    Revision history:
    1.00A Monday 07 09 2018 10:40:00  Lakshmi priya
    Module created.

*/

#include"linked_list.h"
/****************************************************************************\
|
|       Manifest constants & typedefs.
|
|       This is strictly for private types and constants which will not
| be exported.
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


/*Name: 
        insert_at_begin();
Function:
        This function inserts the element to the beginning of the linked list.
Definition: 
        void insert_at_begin()
Description: 
        This function creates newnode and inserts the newnode to the beginning 
        of the list if the list is not null.
        If the list is null,new node is inserted as head node.
Returns:
        Head node.*/

NODE * insert_at_begin(NODE *head)
    {
    NODE* newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("enter element to insert\n");
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
        }
        printf("element inserted\n");
        return head;
        }
/*Name:
        insert_after();
Function:
        This function inserts the element after any elements in the list.
Definition:
        void insert_after()
Description:
        This function creates newnode and inserts the newnode to the specified 
        location in the linked list.if the head is null newnode is 
        inserted as headnode. 
Returns:
         Head node.*/
NODE  *insert_after(NODE *head)
    {
    int location;
    NODE* newnode;

    newnode = (struct node*)malloc(sizeof(struct node));
    printf("enter element to insert\n");
    scanf_s("%d", &newnode->data);
    printf("enter the location\n");
    scanf_s("%d", &location);
    if (head == NULL)
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
        return head;

    }
/*Name:
        insert_at_end();
Function:
        void insert_at_end();
Definition:
        This functions adds element to the end of the list.
Description:
        This function traverse till the last element of the list and 
        insert the new node to the end.If the list is null,
        new node is inserted as head.
Returns:
         Head node.*/
NODE *insert_at_end(NODE *head)
        {
        struct node* newnode;
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("enter element to insert\n");
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
        return head;
        }
/*Name:
        display()
Function:
        void display();
Definition:
        This function displays the elements of the list.
Description:
        This function traverse all the elements of the list and 
        prints the element until null is found.
Returns:
        Nothing.*/
void display(NODE *head)
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
                printf("\n");
                }
        }
/*Name:
        find_length();
Function:
        int find_length();
Definition:
        This function finds the length of the list.
Description:
        This function counts the number of elements in the list till null is 
        found.The length of the list is found out.
Returns:
        Returns the count of the elements.*/
int find_length(NODE *head)
    {
    int counter = 0;
    struct node *temp = head;
    while (temp != NULL)
                {
                temp = temp->next;
                counter++;
                }
    return counter;
    }
/*Name:
       linked_list()
Function:
       NODE *linked_list();
Definition:
        This function performs the specified operation
        
Description:
        This function is to perform operations such as insertion,
        deletion.
        
Returns:
        Head node*/
NODE *delete_node(NODE* head)
        {
        NODE *ptemp; int del_no;
        printf("enter no to delte");
        scanf_s("%d", &del_no);
        ptemp = head;
        if (del_no == head->data)
                {
                head = ptemp->next;
                return head;
                }
                while (ptemp->next != NULL && ptemp->next->data != del_no)
                        {
                        ptemp = ptemp->next;
                        }
                        if (ptemp->next != NULL && ptemp->next->data == del_no)
                                {
                                ptemp->next = ptemp->next->next;
                                }

        return head;
        }
