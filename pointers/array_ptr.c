/*array_ptr.cpp Friday 05 18 2018 10:30:00 Lakshmipriya */

/*
Module:
        array_ptr.c
Function:
        To store elements in array.
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
Name:
        main()
Function:
        This function performs the specified operation.
Definition:
        void main();
Description:
        To store n elements in an array and print the elements using pointer.  
int main()
        {
        int array[20],n,i;
        printf("input the no of elements to store in array");
        scanf_s("%d", &n);
        printf("Input %d number of elements in the array :",n);
        for (i = 0;i <n;i++)
                {
                printf("element-%d:", i);
                scanf_s("%d", &array[i]);
                }
         printf("The elements you entered are\n");
         for (i = 0;i <n;i++)
                {
                printf("element- %d: %d\n",i,*(array+i));
                }
         getchar();
         return 0;
        }
        
