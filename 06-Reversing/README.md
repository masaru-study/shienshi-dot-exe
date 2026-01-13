## 【支援士.exe #6】 リバースエンジニアリング/ CTF Reversing
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

#### Ghidraをインストールする
・Ghidraをダウンロードする
Kali Linuxなど、使用する仮想環境から下記のインストールファイルをダウンロードする
[https://github.com/NationalSecurityAgency/ghidra/releases](https://github.com/NationalSecurityAgency/ghidra/releases)<br>
一番上の「Latest」が最新版（2026/01/13時点ではGhidra 12.0）<br>
「ghidra_12.0_PUBLIC_20251205.zip」をクリック（zipファイル名はバージョンによって異なる）<br><br>

※以降の<zipfile-name>はダウンロードしたファイル名に置き換えてください
```
# JDKをインストールする
sudo apt update
sudo apt install openjdk-17-jdk

# Ghidraのダウンロードフォルダを解凍する
cd Download
unzip <zipfile-name>

# Ghidraをダウンロードする
cd <zipfile-name>
./ghidraRun.bat
```

