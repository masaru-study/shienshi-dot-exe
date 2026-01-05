# 【支援士.exe #4】  Modbus／OTセキュリティ
![title](https://github.com/user-attachments/assets/ea95fd82-e244-46bd-bf9b-5c8df1df33d4)
### 動画
[<動画タイトル>](<動画リンク>)

### 支援士のキーワード
「OTセキュリティ」<br>
令和７年 秋期 情報処理安全確保支援士試験 午後 問４


## 学習環境
TryHackMe / Attacking ICS Plant #1（ICS工場への攻撃）/ Task2&Task3&Task4<br>
[https://tryhackme.com/room/attackingics1](https://tryhackme.com/room/attackingics1)<br>


### 必要なもの
- TryHackMeアカウント<br>




## 実行するコマンド

```
# 実行前に各プログラムの5行目を以下に変更してください
from pymodbus.client import ModbusTcpClient as ModbusClient

# 有料アカウントの方は以下を最初に実行することで、上記の操作が不要になります
python3 -m pip install "pymodbus==2.5.3"
```

※\<targetIP>は起動したマシンのIPアドレスに変更してください
①discovery.py<br>
`python3 discovery.py <targetIP>`

②set_registry.py<br>
`python3 set_registry.py <targetIP> 4 1`

③attack_stop_fill2.py<br>
`python3 attack_stop_fill2.py <targetIP>`
