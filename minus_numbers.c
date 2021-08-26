#include <stdio.h>

int main(void)
{
    int a = 5;
    int b = -5;
    float c = 16777216.0;
    float d = 33554432.0;
    float e = 67108864.0;

    printf("Number %d - ", a);
    for(int i = 31; i >= 0; i--)
    {
        printf("%d", (a >> i & 1));
    }
    printf("\n");

    printf("Number %d - ", b);
    for(int i = 31; i >= 0; i--)
    {
        printf("%d", (b >> i & 1));
    }
    printf("\n");

    printf("Number %f - ", c);
    for(int i = 31; i >= 0; i--)
    {
        printf("%d", ((int)c >> i & 1));
    }
    printf("\n");
    
    return 0;
}