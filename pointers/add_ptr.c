/*list.cpp Friday 05 18 2018 10:30:00 Lakshmipriya */

/*
Module:
        add_ptr.c
Function:
        To add two numbers using pointers.
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
        void main();
Definition:
        This function performs the specified operation.
Description:
        To add two numbers using pointers
Returns:
        Nothing.
void main()
        {
         int first_num,second_num,sum;
         int *p, *q;
         printf("input the first number");
         scanf_s("%d", &first_num);
         p = &first_num;
         printf("input the second number");
         scanf_s("%d", &second_num);
         q = &second_num;
         sum = *p + *q;
         printf("sum of the entered number is %d", sum);
         getchar();           
                    
         }
