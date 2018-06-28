//*maxarray_ptr.cpp Friday 05 18 2018 10:30:00 Lakshmipriya */

/*
Module:
        maxarray.c
Function:
        find maximum element in array.
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
        find the largest element using Dynamic Memory allocation.
 Returns:
        Nothing.
 void main()
        {
        int n, i, j, temp;
        int *array = (int*)malloc(sizeof(int));
        printf("enter the no of elements");
        scanf_s("%d", &n);
        for (i = 0;i < n;i++)
            {
            scanf_s("%d", &array[i]);
            }
        for (i = 1;i < n;i++) 
                {
                if (*array < *(array + i))
                        {
                        *array = *(array + i);
        
                        }
                }
        printf("%d", *array);
                
            
        }
