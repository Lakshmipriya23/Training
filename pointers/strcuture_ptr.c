//*structure Thursday 05 18 2018 10:30:00 Lakshmipriya */

/*
Module:
        structure.c
Function:
        pointer to structure
Version:
        V1.01a Thursday 05 16 2018 10:30:00 Lakshmipriya Edit level 1

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
        1.00A Thursday 05 16 2018 10:30:00  Lakshmi priya
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
        pointer to structure.  
struct employee
        {
        char name[10];
        int id[10];
        int phno[10];
        char address[20];
        };
int main()
       {
       struct employee emp = { "priya", {1,2,1,4},{9,8,7,4,3,4,0,2,8,8}, "south street" };
       struct employee *emp1;
       emp1 = &emp;
       printf("name %s\n", emp1->name);
       printf("id %d\n", emp1->id);
       printf("phone num %d\n", emp1->phno);
       printf("address %s\n", emp1->address);
       getchar();
       return 0;
       }
