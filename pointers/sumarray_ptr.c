/*sumarray_ptr.cpp Friday 05 18 2018 10:30:00 Lakshmipriya */

/*
Module:
        sumarray_ptr.c
Function:
        To find sum of all elements in array
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
Name:
        main()
Function:
        This function performs the specified operation.
Definition:
        void main();
        
Description:
        compute the sum of all elements in an array using pointers.  
Returns:
        Nothing.
void main()
        {
        int *arr=(int*)malloc(10*sizeof(int)),n,i,sum=0;
        printf("enter the number of elements\n");
        scanf_s("%d", &n);
        printf("enter %d number of elements\n", n);
        for (i = 0;i < n;i++) 
                {
                scanf_s("%d", (arr + i));
                }
        for (i = 0;i < n;i++)
                {
                sum = sum + *(arr+i);
                }
        printf("sum of elements is %d", sum);
      
        }
