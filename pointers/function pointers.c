/*function pointers.c.cpp Thursday 07 06 2018 06:10:00 Lakshmipriya */

/*
Module:
        function_pointer.c
Function:
        sorting,reverse,palindrome operations using function pointers
Version:
        V1.01a Thursday 07 06 2018 06:10:00 Lakshmipriya Edit level 1

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
        1.00A Thursday 07 06 2018 06:10:00  Lakshmi priya
        Module created.

*/
#include<stdio.h>
#include<string.h>
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
void sorting(char *string, int n);
void reverse(char *string1, int n);
void palindrome(char *string1, int n);
void(*v)(char *, int);
void(*rev)(char *, int);
void(*equal)(char *, int);

Name: 
        sorting();
Function:
        This function sorts the string in alphabetical order.
Definition: 
        void sorting(char *string,int n)
Description: 
        This function compares the string letters, sorts it in alphabetical
        order and prints the sorted string.
Returns:
        Nothing.
void sorting(char *string,int n)
    {
    int i,j;
    char temp;

    for (i = 0; i<n - 1; i++)
        {
        for (j = i + 1; j<n; j++)
            {
            if (string[i] > string[j])
                {
                temp = string[i];
                string[i] = string[j];
                string[j] = temp;
                }
            }
        }
    printf("\n%s", string);
    }
    
Name: 
        reverse();
Function:
        This function reverses the string.
Definition: 
        void reverse(char *string1,int n)
Description: 
        This function prints the string from last.
Returns:
        Nothing. 
void reverse(char *string1,int n)
    {
    printf("\nreverse of string is\n");
    int i=0, j=0,k;
    char reverse[20];
    for (i = n - 1;i>=0;i--)
        {
        reverse[j] = string1[i];
        j++;
        }
    for (k = 0;k<n;k++)
        {
        printf("%c", reverse[k]);
        }
    }

Name: 
        palindrome();
Function:
        This function finds whether the string is palindrome or not.
Definition: 
        void palindrome(char *string1, int n)
Description: 
        This function checks if the string is 
        palindrome or not and displays the result.
Returns:
        Nothing. 
void palindrome(char *string1, int n)
    {
    int i, j = n - 1, counter = 0;
    
    for(i=0;i<n/2;i++)
        {
        if (string1[i] != string1[n- 1])
            {
            counter = 1;
            break;
            }

        }
    string1[n] = '\0';
    if (counter)
        {
        printf("\n%s is not a palindrome\n", string1);
        }
    else 
        {
        printf("\n%s is a palindrome\n", string1);
        }
     }
Name: 
         main();
 Function:
         This function performs the given operations.
 Definition: 
         void main()
 Description: 
         This function performs operations sucha as 
         sorting,finding reverse of the string,
         cheking palindrome or not.
 Returns:
        Nothing. 
void main()
    {
 
    int choice1 = 0,choice=0;
    char *string;int n = 0, i = 0, j = 0,l;
    string = (char *)malloc(sizeof(char));
    char *string1;
    string1 = (char *)malloc(sizeof(char));
   
        printf("enter the string\n");
        scanf("%s", string);
        while (string[i] != NULL)
            {
            n++;
            i++;
            }
        for (l = 0;l < n;l++)
            {
            string1[l] = string[l];
            }
        do
            {
        printf("\nenter your choice 1.sort 2.reverse 3.palindrome\n");
        scanf("%d", &choice1);
        
        switch (choice1)
            {
            case 1:
            v = sorting;
            (*v)(string, n);
            break;
            case 2:rev = reverse;
            (*rev)(string1, n);
            break;
            case 3:equal = palindrome;
            (*equal)(string1, n);
            break;
            case 4:choice=1;
            break;
            }
        } while (choice == 0);
    }
