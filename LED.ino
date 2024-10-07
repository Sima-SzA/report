int led = 13
void setup(){
    pinMode(led,OUTPUT);            //SET THE PIN LED OUTPUT
}
void loop(){
    digitalWrite(led,HIGH);         //TURNNIG LED ON
    delay(1000);        //ms
    digitalWrite(led,LOW);          //TURNNIG LED OFF
    delay(1000);        //ms
}