// 脆弱性を含む可能性があるため、実環境でこのまま使用しないでください

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    // 入力バッファ
    char user_input[42];

    // 正しいパスワード格納
    // "20m@s@3p!k@26" は 13文字 + '\0' で合計 14 バイト
    char expected_password[14];

    int input_len;
    int i;

    // 0xE(14) バイトコピー＝終端 '\0' まで含めてコピーする想定
    strncpy(expected_password, "20m@s@3p!k@26", 14);

    puts("===================\n"
         "Shienshi-dot-exe!\n"
         "===================");

    puts("Hello World! \n");
    puts("Password :");

    if (fgets(user_input, sizeof(user_input), stdin) == NULL) exit(0);
    user_input[strcspn(user_input, "\n")] = '\0';

    input_len = (int)strlen(user_input);

    // 間違っていた場合
    if (input_len != 13) {
        puts("Error!!!");
        exit(0);
    }

    for (i = 0; i < 13; i++) {
        if (expected_password[i] != user_input[i]) {
            puts("Nope");
            exit(0);
        }
    }

    puts("Excellent!!!!! It's your Password!!!!!");
    return 0;
}

