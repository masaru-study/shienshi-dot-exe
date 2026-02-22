#include <stdio.h>

int main(void)
{
    int name ;
    int check = 0;

    if(name > 2)
    {
        check = 1;
    }

    if(check){
        if(name == 1){
            printf("お世話になっております。\n");
        }else if(name == 2){
            printf("Hello World!\n");
        }else{
            printf("こんにちは\n");
        }
    } else {
        printf("Excellent!!!\n");
    }

    return 0;

}
