
عنوان : برنامه ای بنویسید که با فشردن کلید ، ال ای دی پایه 13روشن و در غیر این صورت خاموش شود

ابزار و تجهیزات :ال ای دی،کلید،سیم مخابراتی،مقاومت (220,4)،برد آردینو

شرح آزمایش 
بخش مدار:
پایه مثبت ال ای دی مدار را در یک ستون با سیم مخابراتی متصل به پایه 13 آردینو، و پایه دیگر ال ای دی در یک ستون با پایه مقامت 220 اهم قرار میگیرد
پایه دیگر مقاومت به وسیله یک سیم مخابراتی به زمین برد بورد وصل می شود
کلید را به صورتی که سمت چپ و راست آن خالی باشد و پایه های بهم متصل آن در یک ستون باشند روی برد برد قرار میدهیم

![code](./photo_2024-10-20_02-59-18.jpg)

پس با یک سیم یکی از پایه های آن را به پایه شماره 8 آردینو وصل میکنیم و پایه روبه رو متصل به شماره 8 را با یک مقاومت در همان در همان ستون به زمین برد بورد میبریم
پایه دیگ کلید را با یک سیم به 5 ولت برد آردینو وصل میکنیم

![code](./photo_2024-10-20_03-06-24.jpg)


*************************************

![code](./photo_2024-10-19_21-56-50.jpg)


بخش کد:
ابتدا پایه های 12 و 8 آردینو را تعریف میکنیم
و یک متغیر هم برای کلید تعریف میکنیم

-setup:
در این قسمت با پینگ مود حالت دو پایه 13 و 8 را مشخص میکنیم
-void loop:
یک متغیر مثل b در نظر میگیرم نتیجه دستور خواندن وضعیت a یا همان کلید را در آن قرار میدهیم
سپس چک میکنیم اگر b یا کلید در وضعیت روشن باشد، دستور روشن کردن لامپ را صادر میکنیم
در غیر این صورت دستور خاموش شدن لامپ

![code](./photo_2024-10-20_02-46-30.jpg)




