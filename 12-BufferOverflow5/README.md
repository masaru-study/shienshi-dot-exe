## 【支援士.exe #12】 / バッファオーバーフロー PART5 / 原因と対策編
![title](https://github.com/user-attachments/assets/dd067885-1cc2-4a69-8270-52ff2c3f493b)
### 動画
[バッファーオーバフロー！原因と対策【支援士.exe #12】]
(https://youtu.be/WYCG8dIV0Cc?si=MgqKKmgpctLHZPnB)

### 支援士のキーワード
「バッファオーバーフロー」<br>
平成30年 秋期 情報処理安全確保支援士試験 午後Ⅰ 問1


### 学習環境
PC環境 / C言語プログラミング <br><br>

### 必要なもの
- Kali Linuxなどの仮想環境（推奨）<br>


## 実行するコマンド

```
# SSPを適用してコンパイル
 gcc bof.c -fstack-protector-all -o bof
```
