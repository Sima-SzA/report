عنوان آزمایش : تغییر روشنایی ال ای دی با پتاسیومتر

ابزار و تجهیزات : پتاسیومتر ، ال ای دی ، مقاومت ، برد آردینو

هدف : تغییر شدت نور ال ای دی

شرح آزمایش

بخش مدار

پتاسیم متر را روی برد بورد گذاشته و پایه راست آن را به زمین ، پایه وسط را A0  و پایه چپ آن را به 5 ولت آردینو وصل میکنیم

ال ای دی را نیز روی برد بورد قرار داده و پایه مثبت آن را به پایه 9 آردینو وصل میکنیم و پایه منفی آن توسط مقاومت به زمین وصل میشود 

![code](./photo_2025-01-17_11-08-52.jpg)

بخش کد
```cpp
int ledPin = 9;
int val = 0;
void setup() {
pinMode(ledPin, OUTPUT);
Serial.begin(9600);
}
void loop() {
val = analogRead(A0);
analogWrite(ledPin, val / 4);
Serial.print(val);
}127
• خواندن ولتاژ خروجی یک پتانسیومتر
Potent
```
نتیجه گیری : به استفاده از پیچ پتاسیم متر روشنایی ال ای دی کم و زیاد می شود.