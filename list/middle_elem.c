/*middle_elem.cpp Friday 05 18 2018 10:30:00 Lakshmipriya */

/*
Module:
        middle_elem.c
Function:
        To find the middle element.
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

/****************************************************************************\
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
        struct node* next;
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
struct node* head = NULL;


Name: 
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
        Nothing.
void  insert_at_begin()
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
                newnode->next = head;
                head = newnode;
                }printf("element inserted\n");

        }

Name:
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
        Nothing.
void insert_after()
        {
        int location;
        struct node* newnode;

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


        }

Name:
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
        Nothing.
void insert_at_end()
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
                printf("\n");
                }
        }

Name:
        find_length();
Function:
        int find_length();
Definition:
        This function finds the length of the list.
Description:
        This function counts the number of elements in the list till null is 
        found.The length of the list is found out.
Returns:
        Returns the count of the elements.
int find_length()
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

Name:
        remove_duplicate();
Function:
        void remove_duplicate()
Definition:
        This function deletes the duplicate elements of the list.
Description:
        This function traverse till the end of the list and identifies
        the duplicate elements and deletes the duplicate elements of the list.
Returns:
        Nothing.
void remove_duplicate()
        {
        struct node *ptr1, *ptr2;
        ptr1 = head;

        
        while (ptr1 != NULL && ptr1->next != NULL)
                {
                ptr2 = ptr1;
                while (ptr2->next != NULL)
                        {
                        if (ptr1->data == ptr2->next->data)
                                {
        
                                
                                ptr2->next = ptr2->next->next;
                                
                                }
                        else 
                                ptr2 = ptr2->next;
                        }
                ptr1 = ptr1->next;
                }

        printf("\n");
        node *temp_node = head;

        do
                {
                printf("%d--> ", temp_node->data);
                temp_node = temp_node->next;
                } while (temp_node != NULL);
        }

Name:
        find_middle(int(*a)())
Function:
        void find_middle(int(*a)())
Definition:
        This function finds the middle element of the list.
Description:
        This function finds the middle element if the length is odd.
        If the length is even,two middle elements are found.
Returns:
        Nothing.
void find_middle(int(*a)())
        {
        int len=find_length();
        int middle,counter=1;
        node *temp = head;
        if (temp != NULL)
                {
                middle = len/ 2;
                while (counter != middle && temp!=NULL)
                        {
                        temp = temp->next;
                        counter++;
                        }

                if (len% 2 == 0)
                        {

                        printf("middle elements are %d %d\n",
                        temp->data, temp->next->data);
                        }
                        else
                        {
                        printf("middle element is %d\n", temp->next->data);
                        }

                }
        }

Name:
        sorting()
Function:
        void sorting()
Definition:
        This function sorts the list in ascending order.
Description:
        This function finds the least element in the list 
        and swaps the least element with other elements.
        likewise,all the elements are sorted
Returns:
        Nothing.
void sorting()
        {
        node *min_node = NULL;
        node *temp_node = head->next;
        node *ptemp_node2 = head;
        int temp_val = head->data;

        while (ptemp_node2 != NULL)
                {
                while (temp_node != NULL)
                        {
                        if (temp_val > temp_node->data)
                                {
                                min_node = temp_node;
                                temp_node = temp_node->next;
                                temp_val = min_node->data;
                                }
                        else
                                temp_node = temp_node->next; 
                        }
                if (min_node != NULL)
                        {
                        swap(&head, min_node, ptemp_node2);
                        ptemp_node2 = min_node->next;
                        temp_node = ptemp_node2;
                        temp_val = temp_node->data;
                        min_node = NULL;
                        }
                else
                        {
                        ptemp_node2 = ptemp_node2->next;
                        temp_node = ptemp_node2;
                        if (ptemp_node2 != NULL)
                        temp_val = temp_node->data;
                        }
                }printf("sort");
        printf("\n");
        temp_node = head;
        do
                {
                printf("%d--> ", temp_node->data);
                temp_node = temp_node->next;
                } while (temp_node != NULL);
        }

Name:
        swap()
Function:
        void swap(node **head, node *min_node, node *ptemp_node2)
Definition:
        This function swaps the element of the list.
Description:
        This function finds the least element in the list 
        and swaps the least element with other elements.
        
Returns:
        Nothing.
void swap(node **head, node *min_node, node *ptemp_node2)
        {
        struct node *ptemp_node, *ptemp_node1_pre, *ptemp_node2_pre;

        ptemp_node1_pre = find_pre(*head, min_node->data);
        ptemp_node2_pre = find_pre(*head, ptemp_node2->data);
        if (ptemp_node1_pre != NULL)
                {
                ptemp_node1_pre->next = ptemp_node2;
                }
        else
                *head = ptemp_node2;

        if (ptemp_node2_pre != NULL)
                {
                ptemp_node2_pre->next = min_node;
                }
        else
                *head = min_node;
        ptemp_node = min_node->next;
        min_node->next = ptemp_node2->next;
        ptemp_node2->next = ptemp_node;

                }

Name:
        find_prev
Function:
        struct node * find_prev(struct node *head, int x)
Definition:
        This function finds the previous element of the list.
Description:
        This function finds the element previous to the specified element.
        
Returns:
        Returns the previous node.
struct node * find_prev(struct node *head, int x)
        {
        struct node * pre_node = NULL, *current_node = head;
        while (current_node != NULL && current_node->data != x)
                {
                pre_node = current_node;
                current_node = current_node->next;
                }
        if (current_node == NULL)
                {
                printf("Node not found\n");
                }
        return pre_node;
        }

Name:
        main()
Function:
        void main();
Definition:
        This function performs the specified operation
        
Description:
        This function is to perform operations such as insertion,
        remove duplicate,finding middle element,sorting
        
Returns:
        Nothing.
void main()
        {
        int choice, len;
        bool Bexit = false;

        while (1)
                {

                printf("\nenter your choice\n1.add at begin 2.insert after 
                3.insert at end 4.display 5.find length 6.remove duplicate 
                7. find middle element 8.sort\n");
                scanf_s("%d", &choice);
                len = 0;

                switch (choice)
                        {
                case 1:
                        insert_at_begin();
                        break;
                case 2:insert_after();
                        break;
                case 3:insert_at_end();
                        break;
                case 4: display();
                        break;
                case 5:len = find_length();
                        printf("\nlength of the list is %d\n", len);
                        break;
                case 6:removeduplicate();
                        break;
                case 7:find_middle(&find_length);
                        break;
                case 8:sorting();
                        break;
                case 9:Bexit = true;
                        break;
                default: printf("wrong choice");
                        break;

                        }
                if (Bexit == true)
                        {
                        break;
                        }
                }
        
        }
        
