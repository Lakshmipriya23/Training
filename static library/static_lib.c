/*list.cpp Monday 07 09 2018 10:40:00 Lakshmipriya */

/*
Module:
    static_library.c
Function:
    To include the static library created.
Version:
    V1.01a Monday 07 09 2018 10:40:00 Lakshmipriya Edit level 1

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
    1.00A Monday 07 09 2018 10:40:00  Lakshmi priya
    Module created.
    */
#include<stdio.h>
#include<stdlib.h>
#include"linked_list.h"
    /****************************************************************************\
    |
    |       Manifest constants & typedefs.
    |
    |       This is strictly for private types and constants which will not
    | be exported.
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
/*Name: 
        void main();
Function:
        This function performs the specified operation
Definition: 
        void main()
Description: 
        This function includes the static library created and
        calls the functions declared in it.
Returns:
        Nothing.*/
int main()
	{
	NODE *list=NULL;
	list = insert_at_begin(list);
	display(list);
	NODE *list1 = NULL;
	list1 = insert_at_end(list1);
	list1 = insert_at_begin(list1);
	display(list1);
	list1 = delete_node(list1);
	display(list1);
	while (1);
	}

