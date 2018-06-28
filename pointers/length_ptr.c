/*length_ptr.cpp Friday 05 18 2018 10:30:00 Lakshmipriya */

/*
Module:
        length_ptr.c
Function:
        To find the length of string.
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
        Calculate the length of the string using a pointer.  
        
void main()
        {
        char *s=(char*)malloc(20*sizeof(char));
        int counter=0;
                
        printf("enter the string\n");
        gets_s(s,20);
        while (*s != NULL)
                {       
                counter++;
                s++;
                }
        printf("length of the string is %d", counter);
        getchar();
        }
