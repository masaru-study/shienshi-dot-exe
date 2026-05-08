## 【支援士.exe #14】 SQLインジェクション / SQL基礎編
![title](https://github.com/user-attachments/assets/cb560d75-87cd-48d3-a8a1-3a0b10988ae9)
### 動画
[<動画タイトル>](<動画URL>)

### 支援士のキーワード
「SQLインジェクション」<br>
応用情報技術者試験 平成22年春期 午前 問43


## 学習環境
TryHackMe / Database SQL Basics（データベースのSQL基礎）/ Task3<br>
[https://tryhackme.com/room/databasesqlbasics](https://tryhackme.com/room/databasesqlbasics)<br><br>

### 必要なもの
- TryHackMeアカウント（Premium）<br>


## 実行するコマンド
①Ordersテーブルから全件表示<br>
`SELECT * FROM Orders;`<br><br>
②Ordersテーブルからdrinkとprice列のみ表示<br>
`SELECT drink, price FROM Orders;`<br><br>
③Ordersテーブルからdrink列が「Coffee」の行のみ表示<br>
`SELECT * FROM Orders WHERE drink = 'Coffee';`<br><br>
④Ordersテーブルからdrink列が「Coffee」または「Tea」の行のみ表示<br>
`SELECT * FROM Orders WHERE drink = 'Coffee' or drink = 'Tea';`<br><br>
⑤④の「Tea」の条件を「1=1」にしてみる<br>
`SELECT * FROM Orders WHERE drink = 'Coffee' or 1 = 1;`<br><br>

## セキュリティ図鑑
「安全なウェブサイトの作り方」<br>
https://www.ipa.go.jp/security/vuln/websecurity/ug65p900000196e2-att/000017316.pdf<br>