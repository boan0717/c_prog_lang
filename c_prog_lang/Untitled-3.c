#include<stdio.h>

int main()
{
    float a = 299792458.0;

    printf("a=%f\n", a);
    printf("a=%e\n", a);
    printf("a=%E\n", a);

    //---------------------------
    printf("--------\n");
    float b = 6.8;
    printf("b=%5.2f", b);

    int c = 911;
    printf("c=%5d", c);

    return 0;
}