/*function_ptr.c.cpp Friday 05 18 2018 10:30:00 Lakshmipriya */

/*
Module:
        function_ptr.c
Function:
        To return pointer from a function.
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
        function returning pointer
        
int *greater(int *a, int *b)
        {
        if (*a > *b)
        return a;
        else
        return b;
        
        }
int main()
        {
         int first_num, second_num, *result, d;
        while (1)
                {       
                printf("input first number");
                scanf_s("%d", &first_num);
                printf("input second number");
                scanf_s("%d", &second_num);
                result = greater(&first_num, &second_num);
                printf("larger element is %d", *result);
                printf("1.yes2.no");
                scanf_s("%d", &d);
                if (d == 2)
                        {
                    break;
                        }
                return 0;
                }
        
        }
