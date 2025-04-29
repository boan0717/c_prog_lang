#include <stdio.h>
#include <windows.h>

// 累加計算 5 - 6 + 7 - 8 + 9 - 10 + 11 + ... + 20 = ?
int main()
{
    SetConsoleOutputCP(CP_UTF8);

    printf("請輸入開始與結束的整數：\n");
    int start, end;

    scanf("%d %d", &start, &end);
    
    int sum = 0;        // 累加的結果
    while (start <= end)
    {
        printf("%d ", start);
        if (start != end) {
            printf("+ ");
        }
        sum = sum + start;
        start++;
    }

    printf("= %d", sum);

    return 0;
}