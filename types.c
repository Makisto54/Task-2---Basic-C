#include <stdio.h>

int main(void)
{
    printf("Char size - %ld\n", sizeof(char));
    printf("Short size - %ld\n", sizeof(short));
    printf("Int size - %ld\n", sizeof(int));
    printf("Long size - %ld\n", sizeof(long));
    printf("Long long int size - %ld\n", sizeof(long long int));
    printf("Float size - %ld\n", sizeof(float));
    printf("Double size - %ld\n", sizeof(double));
    printf("Long Double size - %ld\n", sizeof(long double));

    return 0;
}