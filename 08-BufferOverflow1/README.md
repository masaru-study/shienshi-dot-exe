## 【支援士.exe #8】 / バッファオーバーフロー PART1 / プログラミング入門編
![title](https://github.com/user-attachments/assets/c6fc5883-45cf-4829-8e98-efbc1e71ad40)
### 動画
[<動画タイトル>](https://www.youtube.com/watch?v=fFxSdjQCEjg&list=PLfrpqyRFsglJS2KMDgRL_xtbM5Pkn6BEO&index=8&t=1s)

### 支援士のキーワード
「バッファオーバーフロー」<br>
平成30年 秋期 情報処理安全確保支援士試験 午後Ⅰ 問1


### 学習環境
PC環境 / C言語プログラミング <br><br>

### 必要なもの
- Kali Linuxなどの仮想環境（推奨）<br>

## 実行するコマンド

#### Hello Worldを表示（C言語）
```
# ソースコードの作成
vi hello.c

# 「i」キーを押して入力モードにする
# 以下ソースコードの内容
------------------------------------
#include <stdio.h>

int main(void)
{
    printf("Hello World!\n");
    return 0;
}
------------------------------------
# 「Esc」キーを押して「:wq」を入力して「Enter」

# コンパイル
# エラーが出た場合は構文ミスの可能性があるのでソースコードを修正する
gcc hello.c -o hello

# 実行
./hello

```
#### Hello Worldを表示（Python）
```
# ソースコードの作成
vi hello.py

# 「i」キーを押して入力モードにする
# 以下ソースコードの内容
------------------------------------
print("Hello World!")
------------------------------------
# 「Esc」キーを押して「:wq」を入力して「Enter」

# 実行
python3 hello.py

```


