/*file.cpp Wednesday 06 06 2018 05:22:00 Lakshmipriya */

/*
Module:
        file.c
Function:
        file handling
Version:
        V1.01a Wednesday 06 06 2018 05:22:00 Lakshmipriya Edit level 1

Copyright notice:
        This file copyright (C) 2018 by

                MCCI Corporation
                3520 Krums Corners Road
                Ithaca, NY 14850

        An unpublished work. All rights reserved.

        This file is proprietary information, and may not be disclosed or
        copied without the prior permission of MCCI Corporation.

Author:
        Lakshmi priya.N, MCCI 06 2018

Revision history:
        1.00A Wednesday 06 06 2018 05:22:00  Lakshmi priya
        Module created.

*/
#include "stdafx.h"
#include<stdio.h>
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
        This function creates and copies data from one file to another.
Definition: 
        void main()
Description: 
        This function creates a new file and copies data to another file
        and finds whether it is odd or even number copies it to 
        the new file.
Returns:
        Nothing.
void main()
    {
    char ch, ch1;
    int counter1 = 0, counter2 = 0, number = 0, n = 0,n1=0;
    FILE *source, *destination, *destination2;

    source = fopen("Source.txt", "r+");
    if (source == NULL)
        {
        printf("error opening source file\n");
        //return -1;
        }
    destination = fopen("Dest.txt", "w+");
    if (destination == NULL)
        {
        printf("error opening destination file\n");
        return -1;
        }
    ch = fgetc(source);
    while (ch != EOF)
        {
        /* Write to destination file */
        fputc(ch, destination);
        printf("%c", ch);
        //if (ch != NULL)
          n = atoi(&ch);
        if (n != 0)
            //printf("l%cl\n", ch);
                {
            
            //printf("%d\n ", n);
            
                }
    
        /* Read next character from source file */
        ch = fgetc(source);

        }
    printf("\nFiles copied successfully.\n");
    fseek(destination, 0, SEEK_SET);
    destination2 = fopen("Dest2.txt", "w+");
    if (destination2 == NULL)
        {
        printf("dest 2 not created");
        }
    else
        {
        ch1 = fgetc(destination);
        fputs("Even\n",destination2);
        while (ch1 != EOF)
            {
            
            n1 = atoi(&ch1);
           
            if (n1 != 0)
                {
                if (n1 % 2 == 0)
                    {
                    counter1++;
                    fputc(ch1, destination2);
                    printf("%d\n", n1);
                    fputc('\n',destination2);
                    }

               }
            ch1 = fgetc(destination);

        }
        printf("no of even numbers %d\n", counter1);
        fputs("odd\n", destination2);
        fseek(destination, 0, SEEK_SET);
        ch1 = fgetc(destination);
        while (ch1 != EOF)
            {

            n1 = atoi(&ch1);

            if (n1 != 0)
                {
                if (n1 % 2 != 0)
                    {
                    counter2++;
                    fputc(ch1, destination2);
                    printf("%d\n", n1);
                    fputc('\n', destination2);
                    }
                }
            ch1 = fgetc(destination);

            }
        printf("no of odd numbers %d\n", counter2);
        }
    fclose(source);
    fclose(destination);
    fclose(destination2);
    getchar();
        }
