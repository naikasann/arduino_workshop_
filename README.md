# マイコン(ESP32,m5stack)勉強会

## 概要

研究室内で行ったESP32の勉強会のアーカイブ。

-------------------
## 実施概要

- 実施場所　--- ○○大学。大学学内。
- 実施日    --- 2020/1/15 15:10~
- 備考      --- プロキシサーバーでの利用ができないためポケットWi-Fi等のWi-Fi環境の用意。

## 実施内容

マイコンの簡単な部分を紹介する。パワーポイントの資料の目次

1. はじめに
2. マイコンって？
3. 実際にプログラムしてみよう 1 (LED を点滅)
4. 実際にプログラムしてみよう 2 (環境センサーを使ってみよう)
5. 実際にプログラムしてみよう 1 (サーボモーターを使ってみよう)
6. クラウドサービスにアップデートしてデータを可視化しよう
7. 最新の技術をのぞいてみよう
8. 研究について(現地来た人のみに見せます。)
9. 終わりに

## 実施の際に使用したもの
実施の際に使用した物を列挙する。(switchscience or 秋月電子商通 or Amazon のURLつき)
- [M5Stack Basic - スイッチサイエンス](https://www.switch-science.com/catalog/3647/)
- [普通のブレッドボード - スイッチサイエンス](https://www.switch-science.com/catalog/313/)
- [マイクロサーボ９ｇ　ＳＧ－９０: パーツ一般 秋月電子通商-電子部品・ネット通販](http://akizukidenshi.com/catalog/g/gM-08761/)
- [超高輝度５ｍｍ白色ＬＥＤ　ＯＳＰＷ５１１１Ａ－Ｚ３　１５度　（５個入）: LED(発光ダイオード) 秋月電子通商-電子部品・ネット通販](http://akizukidenshi.com/catalog/g/gI-02024/)
- [M5Stack用環境センサユニット - スイッチサイエンス](https://www.switch-science.com/catalog/5690/)
- [ESPr® Developer 32 - スイッチサイエンス](https://www.switch-science.com/catalog/3210/)
- [USBマイクロBケーブル - スイッチサイエンス](https://www.switch-science.com/catalog/507/)
- [Amazon.co.jp： ELEGOO 120pcs多色デュポンワイヤー、arduino用ワイヤ—ゲ—ジ28AWG オス-メス オス-オス メス –メス ブレッドボードジャンパーワイヤー: 産業・研究開発用品](https://www.amazon.co.jp/ELEGOO-120pcs%E5%A4%9A%E8%89%B2%E3%83%87%E3%83%A5%E3%83%9D%E3%83%B3%E3%83%AF%E3%82%A4%E3%83%A4%E3%83%BC%E3%80%81arduino%E7%94%A8%E3%83%AF%E3%82%A4%E3%83%A4%E2%80%94%E3%82%B2%E2%80%94%E3%82%B828AWG-%E3%82%AA%E3%82%B9-%E3%83%A1%E3%82%B9-%E3%82%AA%E3%82%B9-%E3%82%AA%E3%82%B9-%E2%80%93%E3%83%A1%E3%82%B9-%E3%83%96%E3%83%AC%E3%83%83%E3%83%89%E3%83%9C%E3%83%BC%E3%83%89%E3%82%B8%E3%83%A3%E3%83%B3%E3%83%91%E3%83%BC%E3%83%AF%E3%82%A4%E3%83%A4%E3%83%BC/dp/B06Y48V9DL/ref=sr_1_4?__mk_ja_JP=%E3%82%AB%E3%82%BF%E3%82%AB%E3%83%8A&keywords=%E3%82%B8%E3%83%A3%E3%83%B3%E3%83%91%E3%83%BC%E7%B7%9A&qid=1578991414&sr=8-4)

-------------------
## ファイル構成

- library --- 使用したlibrary(参考文献のURL参照)
- pptx_pdf --- パワーポイントとPDFを置いてあります。
- program --- 実行するプログラムの置き場
- gitignore --- gitignore
- readme --- readme

-------------------
## 参考文献
### ライブラリ
1. [adafruit/Adafruit_BMP280_Library: Arduino Library for BMP280 sensors](https://github.com/adafruit/Adafruit_BMP280_Library)
2. [adafruit/Adafruit_Sensor: Common sensor library](https://github.com/adafruit/Adafruit_Sensor)
3. [wamisnet/Ambient_ESP32_lib](https://github.com/wamisnet/Ambient_ESP32_lib)
4. [xreef/DHT12_sensor_library](https://github.com/xreef/DHT12_sensor_library)
5. [espressif/arduino-esp32: Arduino core for the ESP32](https://github.com/espressif/arduino-esp32)
6. [m5stack/M5Stack: M5Stack Arduino Library](https://github.com/m5stack/M5Stack)

### プログラム

1. [esp32-wroomDevkitCをarduino IDEでセットアップからサーボ駆動まで(Windows) - Qiita](https://qiita.com/WK_ZAKK/items/d7fbbb8c0c8eebe5682d)
2. [ESP32 でサーボモーターを動かしてみた：息子と一緒に Makers：So-netブログ](https://makers-with-myson.blog.ss-blog.jp/2017-11-26)
3. [M5StickCで小型環境センサ端末を作る – Ambient](https://ambidata.io/samples/m5stack/m5sitckc/)
4. [M5Stackを初めて使う時につまずいた事｜悠久｜note](https://note.com/yukyu/n/n7360fb2c7134)

### 資料内でとりあげた物の参考文献
1. [IoT開発スタートブック ── ESP32 でクラウドにつなげる電子工作をはじめよう！](https://gihyo.jp/book/2019/978-4-297-10736-9)
2. [電子工作パーフェクトガイド](https://www.seibundo-shinkosha.net/book/kids/20602/)
3. [大絶賛！「自転車の鍵を指紋認証にしてみた」 | netgeek](http://netgeek.biz/archives/150094)
4. [PLEN:bit & bCoreレーサー (@PLEN_Project) / Twitter](https://twitter.com/PLEN_Project)
5. [Petoi Nybble - Arduino Project Hub](https://create.arduino.cc/projecthub/RzLi/petoi-nybble-944867?ref=platform&ref_id=424_trending___&offset=118)
6. [brownie/README.ja.md at master · ksasao/brownie](https://github.com/ksasao/brownie/blob/master/README.ja.md)
7. [NVIDIA-AI-IOT/jetracer: An autonomous AI racecar using NVIDIA Jetson Nano](https://github.com/NVIDIA-AI-IOT/jetracer)
-------------------