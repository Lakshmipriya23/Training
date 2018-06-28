/*fact_ptr.c.cpp Friday 05 18 2018 10:30:00 Lakshmipriya */

/*
Module:
        fact_ptr.c
Function:
        To find the factorial of a number.
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
        find the factorial of a given number using pointers.  
        
void main()
        {
        while (1)
                {
                int num, i, fac, *p1, *p2, d;
                p1 = &num;
                p2 = &fac;
                printf("Enter any number ");
                scanf_s("%d", p1);
                fac = 1;
                for (i = 1;i <= *p1;i++)
                        {
                    *p2 = *p2*i;
                        }
                printf("\nFactorial of %d is =  %d", *p1, *p2);
                printf("do you want to continue 1.yes 2.no");
                scanf_s("%d", &d);
                if (d == 2)
                        {
                    break;
                        }
                }
        }
