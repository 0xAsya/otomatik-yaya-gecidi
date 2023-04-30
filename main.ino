#include <ServoESP32.h>
int servo1 = DO;
int servo2 = D1;
Servo motor1;
Servo motor2;


void setup() {
Serial.begin(115200);
pinMode(servo1, INPUT) ;
pinMode (D15, OUTPUT) ; //kırmızı.1
pinMode (D9, OUTPUT) ; // sarı. 1 
pinMode (servo2, INPUT) 
pinMode (D4, OUTPUT) ; //yeşil.1

pinMode (D12, OUTPUT) ; // kırmızı.2
pinMode (D13, OUTPUT) ; // sarı.2 
pinMode (D14, OUTPUT); //yeşil.2
motor1.attach(DO);
motor2.attach (D1);
}


void loop() {
motor2.write(0);//yesil servo
digitalwrite(D15,LOW); // 1.kırmızı ışık
digitalwrite(D9, LOW) ;// 1. SARI 
digitalwrite (D4, HIGH); //1. YEŞİL

digitalwrite(D12,HIGH) ; //2. kırmızı ışık
digitalwrite(D13, LOW); //2.SARI ışık 
digitalwrite (D14, LOW); //2. YEŞİL ışık

delay (5000) ;

digitalwrite(D12,LOW); //2. kırmızı ışık
digitalwrite(D13, HIGH); //2.SARI ışık
digitalwrite(D14,LOW); //2.YESIL ışık

delay (100);

digitalwrite(D15, LOW); //2.kırmızı ışık
digitalwrite(D9 ,HIGH) ; //2.SARI ışık
digitalwrite (D4, LOW); //2.YEŞİL ışık

delay (500);

digitalwrite(D12, LOW); //1.karmaza 1$1k 
digitalwrite(D13 , LOW) ; // 1. SARI 
digitalwrite (D14, HIGH);//1.YESIL

delay (100);

digitalwrite(D15,HIGH); //1. kırmızı ışık
digitalwrite(D9, LOW) ; // 1. SARI 
digitalwrite (D4, LOW) ; //1. YESIL

delay (500);
motor2.write (100);
delay (5000);


}
