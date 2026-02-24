#include <stdio.h>

int main(void)
{
    int num ;
    int check = 0;

    if(num < 10)
    {
        check = 1;
    }

    if(check){
        if(num == 1){
            printf("お世話になっております。\n");
        }else if(num == 2){
            printf("Hello World!\n");
        }else{
            printf("こんにちは\n");
        }
    } else {
        printf("Excellent!!!\n");
    }

    return 0;

}
