/*
 ============================================================================
 Name        : Daesung_test.c
 Author      : Batrakov R. V.
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

typedef union u8_byte
{
   unsigned char byte;
    struct{
        unsigned a0:1;
        unsigned a1:1;
        unsigned a2:1;
        unsigned a3:1;
        unsigned a4:1;
        unsigned a5:1;
        unsigned a6:1;
        unsigned a7:1;
    } bites;
}u8_byte;


int main(void)
{
    u8_byte read_byte;

    read_byte.byte = 0;
    printf("Modify_1: %d \r\n",  read_byte.byte);
    printf(" 7 6 5 4 3 2 1 0 \r\n");
    printf(" %d %d %d %d %d %d %d %d \r\n\r\n",
            read_byte.bites.a7, read_byte.bites.a6, read_byte.bites.a5, read_byte.bites.a4,
            read_byte.bites.a3, read_byte.bites.a2, read_byte.bites.a1, read_byte.bites.a0);

    read_byte.bites.a3 = 1;
    read_byte.bites.a5 = 1;
    printf("Modify_2: %d \r\n",  read_byte.byte);
    printf(" %d %d %d %d %d %d %d %d \r\n\r\n",
            read_byte.bites.a7, read_byte.bites.a6, read_byte.bites.a5, read_byte.bites.a4,
            read_byte.bites.a3, read_byte.bites.a2, read_byte.bites.a1, read_byte.bites.a0);

    read_byte.byte = 255;
    printf("Modify_3: %d \r\n",  read_byte.byte);
    printf(" %d %d %d %d %d %d %d %d \r\n\r\n",
            read_byte.bites.a7, read_byte.bites.a6, read_byte.bites.a5, read_byte.bites.a4,
            read_byte.bites.a3, read_byte.bites.a2, read_byte.bites.a1, read_byte.bites.a0);

    read_byte.byte = 'A';
    printf("Modify_4: %c \r\n",  read_byte.byte);
    printf(" %d %d %d %d %d %d %d %d \r\n\r\n",
            read_byte.bites.a7, read_byte.bites.a6, read_byte.bites.a5, read_byte.bites.a4,
            read_byte.bites.a3, read_byte.bites.a2, read_byte.bites.a1, read_byte.bites.a0);
    return 0;
}
