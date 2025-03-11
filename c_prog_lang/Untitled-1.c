#include <stdio.h>

int main()
{
    int a = 45;

    printf("a=%o", a); // 輸出八進位表示法
    printf("\n");      // 輸出換行
    printf("a=%x", a); // 輸出十六進位表示法
    printf("\n");      // 輸出換行
    printf("a=%x", a); // 再次輸出十六進位表示法

    return 0;
}