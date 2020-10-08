#include <stdio.h>

int main() {
    char c = 'a';
    int i = 20;
    long l = 30;

    //Hexadecimal address
    printf("c address: %p\n", &c);
    printf("i address: %p\n", &i);
    printf("l address: %p\n\n", &l);

    //Decimal address
    printf("c address: %lu\n", &c);
    printf("i address: %lu\n", &i);
    printf("l address: %lu\n\n", &l);

    //The long (last declared) has the lowest address.
    //Step up 8 bytes for int and 7 for char.

    //Create and print pointers
    char *cp = &c;
    char *ip = &i;
    char *lp = &l;

    printf("c pointer: %p\n", cp);
    printf("i pointer: %p\n", ip);
    printf("l pointer: %p\n\n", lp);

    //Modify values with pointers
    *cp = 'q';
    *ip = 40;
    *lp = 50;

    printf("c val: %c\n", c);
    printf("i val: %d\n", i);
    printf("l val: %ld\n\n", l);

    //New unsigned int with pointers
    unsigned int v = 100;
    int *vpi = &v;
    char *vpc = &v;

    printf("vpi: %p vpi points to %d\n", vpi, *vpi);
    printf("vpc: %p vpc points to %c\n\n", vpc, *vpc);

    printf("v decimal: %u\n", v);
    printf("v hex: %x\n\n", v);

    //Print out each byte
    int j;
    for(j = 0; j < 4; j++) {
        printf("B%d: %hhu\n", j, *(vpc + j));
    }

    printf("\n");

    //Increment each byte
    for(j = 0; j < 4; j++) {
        (*(vpc + j))++;
        printf("Byte %d incremented, new val hex/dec: %x/%d\n", j, v, v);
    }

    printf("\n");

    for(j = 0; j < 4; j++) {
        printf("B%d: %hhu\n", j, *(vpc + j));
    }

    printf("\n");

    //Add 16 to each byte
    v = 100;
    for(j = 0; j < 4; j++) {
        (*(vpc + j)) += 16;
        printf("Byte %d incremented, new val hex/dec: %x/%d\n", j, v, v);
    }

    printf("\n");

    for(j = 0; j < 4; j++) {
        printf("B%d: %hhu\n", j, *(vpc + j));
    }

    //Adding 1 to the nth bit increases the number by 256^n, or 2^(8*n)
}
