/*swap_ptr.c Friday 05 18 2018 10:30:00 Lakshmipriya */

/*
Module:
        swap_ptr.c
Function:
        To swap elements using pointer.
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
        To swap elements using call by reference.
Returns:
        Nothing.
void swap(int *a, int*b, int*c)
        {
        int temp;
        temp = *c;
        *c = *b;
        *b = *a;
        *a = temp;
        }
 void main()
        {
        while (1) 
                {
                int first_num, second_num, third_num, d;
                printf("enter first num");
                scanf_s("%d", &first_num);
                printf("enter second num");
                scanf_s("%d", &second_num);
                printf("enter third num");
                scanf_s("%d", &third_num);
                printf("values before swapping:");
                printf("%d\n", first_num);
                printf("%d\n", second_num);
                printf("%d\n", third_num);
                swap(&first_num, &second_num, &third_num);
                printf("first num %d\n", first_num);
                printf("second num %d\n", second_num);
                printf("third num %d\n", third_num);
                printf("do you want to continue 1.yes 2.no");
                scanf_s("%d", &d);
                if (d == 2)
                {
                    break;
                }
              }
          
        }
