/*handle_ptr.cpp Friday 05 18 2018 10:30:00 Lakshmipriya */

/*
Module:
       handle_ptr.c
Function:
        To store display using pointers.
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
        This function is to demonstrate how to handle the pointers in the program.

Returns:
        Integer value.

int main()
        {
        int m;
        int *ab;
        m = 29;
                
        printf("address of m %p\n", &m);
        printf("value of m %d\n", m);
        ab = &m;
        printf("address of ab %p\n", ab);
        printf("content of ab %d\n", *ab);
        m = 34;
        printf("address of ab %p\n", ab);
        printf("content of ab %d\n", *ab);
        m = 7;
        printf("address of m %p\n", &m);
        printf("value of m %d\n", m);
        getchar();
        return 0;
        }
