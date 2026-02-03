## 【支援士.exe #7】 リバースエンジニアリング PART2 / CTF Reversing
![title](https://github.com/user-attachments/assets/f97d46cd-9dde-4068-88aa-d94a0bfa0319)
[<動画タイトル>](<動画リンク>)

### 支援士のキーワード
「リバースエンジニアリング」<br>
令和７年 春期 情報処理安全確保支援士試験 午後 問３ 設問１(２)


### 学習環境
TryHackMe / 0x41haz/ Task1<br>
[https://tryhackme.com/room/0x41haz](https://tryhackme.com/room/0x41haz)<br><br>

### 必要なもの
- TryHackMeアカウント<br>
- Kali Linuxなどの仮想環境（推奨）<br>

## 実行するコマンド

```
# 表層解析
file crackme

# 動的解析
./crackme

# 静的解析
strings crackme

# hexeditorを起動する
hexeditor
```

#### Ghidraをインストールする
・Ghidraをダウンロードする
Kali Linuxなど、使用する仮想環境から下記のインストールファイルをダウンロードする
[https://github.com/NationalSecurityAgency/ghidra/releases](https://github.com/NationalSecurityAgency/ghidra/releases)<br>
一番上の「Latest」が最新版（2026/01/13時点ではGhidra 12.0）<br>
「ghidra_12.0_PUBLIC_20251205.zip」をクリック（zipファイル名はバージョンによって異なる）<br><br>

※以降の<zipfile-name>はダウンロードしたファイル名に置き換えてください
```
# JDKをインストールする(26の数字はバージョンによって異なる可能性あり)
sudo apt update
sudo apt install openjdk-26-jdk

# Ghidraのダウンロードフォルダを解凍する
cd Download
unzip <zipfile-name>

# Ghidraを起動する
cd <zipfile-name>
./ghidraRun

```
#### プロジェクトの作成
Ghidraが起動したら、 [File] > [New Project] > [Non-Shared Project] を選択<br>
Project Nameを「Ghidra1」とする（任意の名前でOK）<br>
#### ファイルのインポート
 [File] > [Import File] > [Desktop] > [crackme] > [Select File To Import] を選択<br>
 [Language] を Filter:で [gcc] と検索<br>
 [x86 default 64 little gcc]を選択<br>
 [crack]をダブルクリック > [OK] > [Analyze]
