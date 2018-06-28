/*vowel_ptr.cpp Friday 05 18 2018 10:30:00 Lakshmipriya */

/*
Module:
        vowel_ptr.c
Function:
        To find the number of vowels and consonants.
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
        int main();
Description:
        count the number of vowels and consonants in a string using a pointer. 
Returns:
        Integer.
int main()
        {
        char *string=(char*)malloc(20*sizeof(char));
        int count_v=0, count_c=0;
        printf("enter the string");
        gets_s(string, 20);
        while (*string != NULL) 
                {
                if (*string == 'a' || *string == 'A' || *string == 'e' || *string == 'E' || *string == 'i' || *string == 'I' || *string == 'o' || *string == 'O' || *string == 'u' || *string == 'U')
                        {
                    count_v++;
                        }
                else
                        {
                    count_c++;
                        }
                string++;
                }
            printf("number of vowels %d", count_v);
            printf("number of consonant %d", count_c);
                    return 0;
        }
        
