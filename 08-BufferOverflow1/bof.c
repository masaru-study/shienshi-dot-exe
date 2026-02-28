/* バッファオーバーフローを引き起こすコードです
　 セキュリティ学習の目的以外で利用しないでください
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(char password, char *pass[])
{
    char buffer[8];
    int check = 0;

    if(password <= 1)
    {
        printf("input password");
        return 0;
    }

    strcpy(buffer, pass[1]);

    if(strcmp(buffer,"DotExe") == 0)
    {
        check =1;
    }

    if(check)
    {
        printf("Excellent!!!\n");
    }
    else
    {
        printf("Error...It's wrong.\n");
    }

    return 0;
}