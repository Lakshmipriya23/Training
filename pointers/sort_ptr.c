/*sort_ptr.cpp Friday 05 18 2018 10:30:00 Lakshmipriya */

/*
Module:
        sort_ptr.c
Function:
        To sort the elements in array.
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
        void main();
Definition:
        This function performs the specified operation.
        
Description:
        sort an array using Pointer.
Returns:
        Integer.
int main()
        {
        while (1)
                {
                int *arr, i, n, j, temp, k, d;
                arr = (int*)malloc(20 * sizeof(int));
                printf("enter the number of array elements\n");
                scanf_s("%d", &n);
                printf("enter array elements\n");
                for (int a = 0;a < n;a++)
                        {
                    scanf_s("%d", (arr + a));
                        }
                for (i = 0;i < n;i++)
                        {
                        for (j = i + 1;j < n;j++)
                                {
                                if (*(arr + i) > *(arr + j))
                                        {
                                        temp = *(arr + i);
                                        *(arr + i) = *(arr + j);
                                        *(arr + j) = temp;
                                        }
                                }
                        }
                for (k = 0;k < n;k++)
                        {
                        printf("%d\n", *(arr + k));
                        }
                printf("\n1.yes2.no");
                scanf_s("%d", &d);
                if (d == 2)
                        {
                        break;
                        }
                return 0;
            }
        }
