/*linked list merge.cpp Friday 05 18 2018 10:30:00 Lakshmipriya */

/*
Module:
        linked list merge.c
Function:
        To merge the linked list.
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
        Lakshmi priya.N, MCCI 06 2018

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

struct node head = NULL, head2 = NULL, *head3 = NULL;
void swap(node *head_node, node * min_node, node ptemp_node2);
struct node  find_pre(node head_node, node *p);
void display(node *head_node);

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
        Head node.
node insert(node  head_node)
        {
        int ch; node *head1 = head_node;

        node * current_node;

        current_node = head1;
        do 
                {
                node* new_node = (struct node*)
                malloc(sizeof(struct node));
                new_node->next = NULL;
                current_node = head1;
                scanf_s("%d", &new_node->data);
                if (head1 == NULL)
                        {
                        head1 = new_node;
                        }
                else
                        {
                        while (current_node->next != NULL)
                                {
                                current_node = current_node->next;

                                }
                        current_node->next = new_node;
                        new_node->next = NULL;
                        }
                        printf("do you want to enter another element?
                        1.yes 2.no\n");
                        scanf_s("%d", &ch);
                   } while (ch == 1);

                        return head1;
                }
Name: 
        insert();
Function:
        This function inserts the new element as the merged linked list.
Definition: 
        node  insert1(node  head_node, int data)
Description: 
        This function creates newnode and inserts the newnode to the 
        list after merging the list
Returns:
        Head node               
node  insert1(node  head_node, int data)
        {
        node * head1 = head_node;
        node *current_node;
        current_node = head1;
        node* new_node = (struct node*)malloc(sizeof(struct node));
        new_node->next = NULL;
        new_node->data = data;
  
        if (head1 == NULL)
                {
                head1 = new_node;
                }
        else
                {
                while (current_node->next != NULL)
                        {
                        current_node = current_node->next;

                        }
                current_node->next = new_node;
   
                }
                return head1;
        }
       
Name: 
        merge();
Function:
        This function merges the list1 and list 2.
Definition: 
        node * merge()
Description: 
        This function merges list2 to the end of list 1 and
        insert it to the new list.And sorts the new list.
Returns:
        Head node.
node * merge()
        {

        node *head3 = NULL;
        node * temp = head;
        if (head != NULL)
                {
                while (temp != NULL)
                        {
                        head3 = insert1(head3, temp->data);
                        temp = temp->next;
                        }
                temp = head2;
                while (temp!=NULL)
                        {
                        head3 = insert1(head3, temp->data);
                        temp = temp->next;
                        }
  
                }
        else
                {
                head3 = head2;
                }
       if ((head == NULL) && (head2 == NULL))
                {
                printf("list is empty");
                }
        else
                {
                display(head3);
                }
                return head3;
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
void display(node *head_node)
        {
        node *current_node = head_node;
        if (head_node == NULL)
                {
                printf("list empty\n");
                }
        else
                {
                while (current_node != NULL)
                {
                printf("%d-->", current_node->data);
                current_node = current_node->next;
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
node  sorting(node  head_node)
        {
        if (head_node == NULL)
                {
                printf("no elements\n");
                }
        else
                {
                node *min_node = NULL;
                node *temp_node = head_node->next;
                node *ptemp_node2 = head_node;
                int temp_val = head_node->data;
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
                swap(&head_node, min_node, ptemp_node2);
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
                }
         printf("\n");
         temp_node = head_node;
        do
                {
                printf("%d--> ", temp_node->data);
                temp_node = temp_node->next;
                } while (temp_node != NULL);
                }
        return head_node;
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
        This function performs the specified operation.
        
Description:
        This function is to perform operations such as insertion,
        sorting,merging.
        
Returns:
        Nothing.        
int main()
        {
        int ch, ch1, ch2;
        bool Bexit = false;
        while (1)
                {
                printf("enter your choice 1.insert list 1
                2.insert list 2 3.display 4.sort 5.merge 6.exit\n");
                scanf_s("%d", &ch);
                switch (ch)
                        {
                        case 1: printf("enter elements for list 1\n");
                        head = insert(head);
                        break;
                        case 2:printf("enter elements for list 2\n");
                        head2 = insert(head2);
                        break;
                        case 3:printf("1.display list1 2.display list2\n");
                        scanf_s("%d", &ch2);
                        switch (ch2)
                                {
                                case 1:  display(head);
                                break;
                                case 2:  display(head2);
                                break;
                                }
                        break;
                        case 4:printf("1.sort list 1 2.sort list 2\n");
                        scanf_s("%d", &ch1);
                        if (ch1 == 1)
                                {
                                head=sorting(head);
                                }
                        else
                                {
                                head2=sorting(head2);
                                }
                        break;
                        case 5:head3= merge();
                        sorting(head3);
                        break;
                        case 6:Bexit = true;
                        break;
                }
                        if (Bexit == true)
                                {
                                break;
                                }
                }
                return 0;
        }
