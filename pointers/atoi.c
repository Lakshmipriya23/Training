/*atoi.c Wednesday 07 June 2018 06:10:00 Lakshmipriya */

/*
Module:
        atoi.c
Function:
        To convert the given string to upper case.
Version:
        V1.01a Wednesday 07 June 2018 06:10:00 Lakshmipriya Edit level 1

Copyright notice:
        This file copyright (C) 2018 by

                MCCI Corporation
                3520 Krums Corners Road
                Ithaca, NY 14850

        An unpublished work. All rights reserved.

        This file is proprietary information, and may not be disclosed or
        copied without the prior permission of MCCI Corporation.

Author:
        Lakshmi priya.N, MCCI June 2018

Revision history:
        1.00A Wednesday 07 June 2018 06:10:00  Lakshmi priya
        Module created.

*/
#include "stdafx.h"
#include<string.h>
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
        main();
Function:
        This function converts the ASCII value to integer.
Definition: 
        This function converts the given ASCII value to integer type
Description: 
        void main()
        
Returns:
        Nothing.
void main()
        {
        char *str;
        int i,j,len;
        int result;
        unsigned long int result1;
        str = (char*)malloc(20 * sizeof(char));
  
        i=0,j=0;
        result=0,result1=0;
        printf("enter string");
        gets(str, 20);
        len = strlen(str);
        if (str == NULL)
                {
                printf("no string");
                }
        if (*(str + j) >= 'a'&&*(str + j) <= 'z')
                {
                printf("character");
                }       
        else if (len >= 10)
                {
                for (i = 0;*(str + i) != '\0';++i)
                        {
                        result1 = result1 * 10 + *(str + i) - '0';
                        }
                printf("long int value is %d", result1);
                }
        else if (len < 10)
                {
                for (i = 0; *(str + i) != '\0'; ++i)
                        {
                        result = result * 10 + *(str + i) - '0';

                        }printf("integer value is %d", result);
                }
        getchar();

        }
