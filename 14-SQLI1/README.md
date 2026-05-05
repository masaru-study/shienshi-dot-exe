## 【支援士.exe #14】 SQLインジェクション / SQL基礎編
![title](https://github.com/user-attachments/assets/cb560d75-87cd-48d3-a8a1-3a0b10988ae9)
### 動画
[<動画タイトル>](<動画URL>)

### 支援士のキーワード
「SQLインジェクション」<br>
令和7年 春期 情報処理安全確保支援士 午前Ⅱ 問21


## 学習環境
TryHackMe / Database SQL Basics（データベースのSQL基礎）/ Task3<br>
[https://tryhackme.com/room/databasesqlbasics](https://tryhackme.com/room/databasesqlbasics)<br><br>

### 必要なもの
- TryHackMeアカウント（Premium）<br>



## 実行するコマンド
①Menuテーブルから全件表示 ※問題<br>
`SELECT * FROM Menu;`<br>
【参考】カウント関数<br>
`SELECT count(*) as count FROM Orders;`<br><br>
②Ordersテーブルから全件表示<br>
`SELECT * FROM Orders;`<br><br>
③Ordersテーブルからdrinkとprice列のみ表示<br>
`SELECT drink, price FROM Orders;`<br><br>
④Ordersテーブルからpriceが安い順(昇順)に表示 ※問題<br>
`SELECT * FROM Orders ORDER BY price;`<br><br>
⑤Ordersテーブルからpriceが高い順(降順)に表示 ※問題<br>
`SELECT * FROM Orders ORDER BY price DESC;`<br><br>
⑥Ordersテーブルからdrink列が「Coffee」の行のみ表示<br>
`SELECT * FROM Orders WHERE drink = 'Coffee';`<br><br>
⑦Ordersテーブルからdrink列が「Coffee」または「Tea」の行のみ表示<br>
`SELECT * FROM Orders WHERE drink = 'Coffee' or drink = 'Tea';`<br><br>
➇⑦の「Tea」の条件を「1=1」にしてみる<br>
`SELECT * FROM Orders WHERE drink = 'Coffee' or 1 = 1;`<br><br>

## セキュリティ図鑑
「」<br>
URL<br>