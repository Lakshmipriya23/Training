/*strcmp.c Wednesday 07 June 2018 06:10:00 Lakshmipriya */

/*
Module:
        strcmp.c
Function:
        To compare two strings.
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
        This function compares two strings.
Definition: 
        void main()
Description: 
        This function compares two strings to find whether both 
        strings are equal or not.
        
Returns:
        Nothing.
void main() 
    {
    char *str1, *str2;
    int i,length;
    str1 = (char*)malloc(20*sizeof(char));
    str2 = (char*)malloc(20*sizeof(char));
    printf("\nEnter two strings :\n");
    gets_s(str1,20);
    gets_s(str2,20);
    length = strlen(str1);
    i = 0;
    
    if(*str1+i)==NULL)
	{
	printf("no string1\n");
	}
    if (*str2 + i) == NULL)
	{
	printf("no string2\n");
	}
    while (*(str1 + i) != '\0')
	{
	if (*(str1 + i) - *(str2 + i) == 32 || *(str1 + i) -
	*(str2 + i) == -32||*(str1+i)==*(str2+i))
	    {
	    i++;
	    if (i == length)
		{
		printf("equal\n");
		}

	    }
    	else
	    {
	    printf("not equal\n");
	    break;
	    }
	}
    getchar();
   
    }
