#pragma once
/*list.cpp Monday 07 09 2018 10:40:00 Lakshmipriya */

/*
Module:
    linked_list_functions.c
Function:
    linked list function declarations
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
    /****************************************************************************\
    |
    |       Manifest constants & typedefs.
    |
    |       This is strictly for private types and constants which will not
    | be exported.
    |
    \****************************************************************************/
typedef struct node
	{
    	int data;
    	struct node* next;
	}NODE;
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
NODE * delete_node
	(
	NODE *head
	);
NODE*  insert_at_begin
	(
	NODE *head
	);
NODE* insert_after
	(
	NODE *head
	);
NODE* insert_at_end
	(
	NODE *head
	);
void display
	(
	NODE *head
	);
int find_length
	(
	NODE *head
	);
