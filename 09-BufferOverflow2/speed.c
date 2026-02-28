/* 100000000より大きい値を入れて実行しないでください */
#include <stdio.h>

int main(void)
{
    int i = 0;

    while(i < 100000000)
    {
        i++;
    }

    printf("finish C\n");
    return 0;
}