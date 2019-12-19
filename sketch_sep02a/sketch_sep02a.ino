#include <Adafruit_NeoPixel.h>

#define PIN 12 // номер порта к которому подключен модуль
#define count_led 16 // количество светодиодов 

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(count_led, PIN, NEO_GRB + NEO_KHZ800);
int input = 0;


void setup() {
  // put your setup code here, to run once:
  pixels.begin();
  pixels.show(); // Устанавливаем все светодиоды в состояние "Выключено"
  Serial.begin(9600);
  loading_2();
}

void loop() {
  // put your main code here, to run repeatedly:

if (input == 'q')
    bchb();
if (input == 'a')
    rainbow();
if (input == 'p')
    purple();
if (input == 'y')
    yellow();
if (input == 'b')
    blue();
if (input == 'g')
    green();
if (input == 'r')
    red();
if (input == 'c')
    changing();
if (input == 'f')
    flashlight();
if (input == 'l')
    loading();

if (Serial.available())
  {
    byte save_in = input;
    input = Serial.read();
    if(input != 'r' &&
       input != 'b' &&
       input != 'p' &&
       input != 'y' &&
       input != 'q' &&
       input != 'g' &&
       input != 'a' &&
       input != 'c' &&
       input != 'f' &&
       input != 'l') {
          input = save_in;
       }
    
  }
}

void rainbow() {
     for(int i = 0 ; i <= 15 ; i++) {//вступление
      int a = 0;
      pixels.setPixelColor(i , pixels.Color(0 , 60  , 0));
      a = i+1;if(a > 15)a-=16;
      pixels.setPixelColor(a , pixels.Color(13*1 , 60 -13*1, 0));
      a = i+2;if(a > 15)a-=16;
      pixels.setPixelColor(a , pixels.Color(13*2 , 60 -13*2, 0));
      a = i+3;if(a > 15)a-=16;
      pixels.setPixelColor(a , pixels.Color(13*3 , 60 -13*3, 0));
      a = i+4;if(a > 15)a-=16;
      pixels.setPixelColor(a , pixels.Color(13*4 , 60 -13*4, 0));
      a = i+5;if(a > 15)a-=16;
      pixels.setPixelColor(a , pixels.Color(60 , 0 , 0));
      a = i+6;if(a > 15)a-=16;
      pixels.setPixelColor(a , pixels.Color(60 -13*1, 0 , 13*1));
      a = i+7;if(a > 15)a-=16;
      pixels.setPixelColor(a , pixels.Color(60 -13*2, 0 , 13*2));
      a = i+8;if(a > 15)a-=16;
      pixels.setPixelColor(a , pixels.Color(60 -13*3, 0 , 13*3));
      a = i+9;if(a > 15)a-=16;
      pixels.setPixelColor(a , pixels.Color(60 -13*4, 0 , 13*4));
      a = i+10;if(a > 15)a-=16;
      pixels.setPixelColor(a , pixels.Color(0, 0 , 60));
      a = i+11;if(a > 15)a-=16;
      pixels.setPixelColor(a , pixels.Color(0, 13*1, 60 -13*1));
      a = i+12;if(a > 15)a-=16;
      pixels.setPixelColor(a , pixels.Color(0, 13*2, 60 -13*2));
      a = i+13;if(a > 15)a-=16;
      pixels.setPixelColor(a , pixels.Color(0, 13*3, 60 -13*3));
      a = i+14;if(a > 15)a-=16;
      pixels.setPixelColor(a , pixels.Color(0, 13*4, 60 -13*4));
      a = i+15;if(a > 15)a-=16;
      pixels.setPixelColor(a , pixels.Color(0, 60, 0));
      for(int q = i+1 ; q <= 15 ; q++) {
        pixels.setPixelColor(q , pixels.Color(0,0,0));
      }
      pixels.show();
      delay(20);
    }
  
  for (int circle = 0 ; circle < 10 ; circle++) {
    for(int i = 0 ; i <= 15 ; i++) { //кружки
      int a = 0;
      pixels.setPixelColor(i , pixels.Color(0 , 60  , 0));
      a = i+1;if(a > 15)a-=16;
      pixels.setPixelColor(a , pixels.Color(13*1 , 60 -13*1, 0));
      a = i+2;if(a > 15)a-=16;
      pixels.setPixelColor(a , pixels.Color(13*2 , 60 -13*2, 0));
      a = i+3;if(a > 15)a-=16;
      pixels.setPixelColor(a , pixels.Color(13*3 , 60 -13*3, 0));
      a = i+4;if(a > 15)a-=16;
      pixels.setPixelColor(a , pixels.Color(13*4 , 60 -13*4, 0));
      a = i+5;if(a > 15)a-=16;
      pixels.setPixelColor(a , pixels.Color(60 , 0 , 0));
      a = i+6;if(a > 15)a-=16;
      pixels.setPixelColor(a , pixels.Color(60 -13*1, 0 , 13*1));
      a = i+7;if(a > 15)a-=16;
      pixels.setPixelColor(a , pixels.Color(60 -13*2, 0 , 13*2));
      a = i+8;if(a > 15)a-=16;
      pixels.setPixelColor(a , pixels.Color(60 -13*3, 0 , 13*3));
      a = i+9;if(a > 15)a-=16;
      pixels.setPixelColor(a , pixels.Color(60 -13*4, 0 , 13*4));
      a = i+10;if(a > 15)a-=16;
      pixels.setPixelColor(a , pixels.Color(0, 0 , 60));
      a = i+11;if(a > 15)a-=16;
      pixels.setPixelColor(a , pixels.Color(0, 13*1, 60 -13*1));
      a = i+12;if(a > 15)a-=16;
      pixels.setPixelColor(a , pixels.Color(0, 13*2, 60 -13*2));
      a = i+13;if(a > 15)a-=16;
      pixels.setPixelColor(a , pixels.Color(0, 13*3, 60 -13*3));
      a = i+14;if(a > 15)a-=16;
      pixels.setPixelColor(a , pixels.Color(0, 13*4, 60 -13*4));
      a = i+15;if(a > 15)a-=16;
      pixels.setPixelColor(a , pixels.Color(0, 60, 0));
      pixels.show();
      delay(20);
    }
  }

  
  for(int i = 0 ; i <= 15 ; i++) {//эффектное завершение
      int a = 0;
      pixels.setPixelColor(i , pixels.Color(0 , 60  , 0));
      a = i+1;if(a <= 15)
      pixels.setPixelColor(a , pixels.Color(13*1 , 60 -13*1, 0));
      
      a = i+2;if(a <= 15)
      pixels.setPixelColor(a , pixels.Color(13*2 , 60 -13*2, 0));
      else pixels.setPixelColor(a-16 , pixels.Color(0 , 0, 0));
      a = i+3;if(a <= 15)
      pixels.setPixelColor(a , pixels.Color(13*3 , 60 -13*3, 0));
      else pixels.setPixelColor(a-16 , pixels.Color(0 , 0, 0));
      a = i+4;if(a <= 15)
      pixels.setPixelColor(a , pixels.Color(13*4 , 60 -13*4, 0));
      else pixels.setPixelColor(a-16 , pixels.Color(0 , 0, 0));
      a = i+5;if(a <= 15)
      pixels.setPixelColor(a , pixels.Color(60 , 0 , 0));
      else pixels.setPixelColor(a-16 , pixels.Color(0 , 0, 0));
      a = i+6;if(a <= 15)
      pixels.setPixelColor(a , pixels.Color(60 -13*1, 0 , 13*1));
      else pixels.setPixelColor(a-16 , pixels.Color(0 , 0, 0));
      a = i+7;if(a <= 15)
      pixels.setPixelColor(a , pixels.Color(60 -13*2, 0 , 13*2));
      else pixels.setPixelColor(a-16 , pixels.Color(0 , 0, 0));
      a = i+8;if(a <= 15)
      pixels.setPixelColor(a , pixels.Color(60 -13*3, 0 , 13*3));
      else pixels.setPixelColor(a-16 , pixels.Color(0 , 0, 0));
      a = i+9;if(a <= 15)
      pixels.setPixelColor(a , pixels.Color(60 -13*4, 0 , 13*4));
      else pixels.setPixelColor(a-16 , pixels.Color(0 , 0, 0));
      a = i+10;if(a <= 15)
      pixels.setPixelColor(a , pixels.Color(0, 0 , 60));
      else pixels.setPixelColor(a-16 , pixels.Color(0 , 0, 0));
      a = i+11;if(a <= 15)
      pixels.setPixelColor(a , pixels.Color(0, 13*1, 60 -13*1));
      else pixels.setPixelColor(a-16 , pixels.Color(0 , 0, 0));
      a = i+12;if(a <= 15)
      pixels.setPixelColor(a , pixels.Color(0, 13*2, 60 -13*2));
      else pixels.setPixelColor(a-16 , pixels.Color(0 , 0, 0));
      a = i+13;if(a <= 15)
      pixels.setPixelColor(a , pixels.Color(0, 13*3, 60 -13*3));
      else pixels.setPixelColor(a-16 , pixels.Color(0 , 0, 0));
      a = i+14;if(a <= 15)
      pixels.setPixelColor(a , pixels.Color(0, 13*4, 60 -13*4));
      else pixels.setPixelColor(a-16 , pixels.Color(0 , 0, 0));
      a = i+15;if(a <= 15)
      pixels.setPixelColor(a , pixels.Color(0, 60, 0));
      else pixels.setPixelColor(a-16 , pixels.Color(0 , 0, 0));
      pixels.show();
      delay(20);
    }
    pixels.setPixelColor(15 , pixels.Color(0, 0, 0));
    pixels.show();
}

void bchb () {
  for(int i = 0 ; i <= 15 ; i++) {
    pixels.setPixelColor(i , pixels.Color(20 , 20 , 20));
  }
  //pixels.setPixelColor(0 , pixels.Color(60 , 0 , 0));
  pixels.setPixelColor(1 , pixels.Color(60 , 0 , 0));
  pixels.setPixelColor(2 , pixels.Color(60 , 0 , 0));
  //pixels.setPixelColor(3 , pixels.Color(60 , 0 , 0));
  //pixels.setPixelColor(8 , pixels.Color(60 , 0 , 0));
  pixels.setPixelColor(9 , pixels.Color(60 , 0 , 0));
  pixels.setPixelColor(10 , pixels.Color(60 , 0 , 0));
  //pixels.setPixelColor(11 , pixels.Color(60 , 0 , 0));

  pixels.setPixelColor(15 , pixels.Color(7 , 7 , 7));
  pixels.setPixelColor(12 , pixels.Color(7 , 7 , 7));
  pixels.setPixelColor(14 , pixels.Color(2 , 2 , 2));
  pixels.setPixelColor(13 , pixels.Color(2 , 2 , 2));
  pixels.setPixelColor(4 , pixels.Color(7 , 7 , 7));
  pixels.setPixelColor(7 , pixels.Color(7 , 7 , 7));
  pixels.setPixelColor(5 , pixels.Color(2 , 2 , 2));
  pixels.setPixelColor(6 , pixels.Color(2 , 2 , 2));
  pixels.show();
delay(1000);
}

void purple () {
for(int i = 0 ; i <= 15 ; i++) {
pixels.setPixelColor(i , pixels.Color(25 , 0 , 25));
}
pixels.show();
delay(100);
}

void yellow () {
for(int i = 0 ; i <= 15 ; i++) {
pixels.setPixelColor(i , pixels.Color(25 , 25 , 0));
}
pixels.show();
delay(100);
}

void blue () {
for(int i = 0 ; i <= 15 ; i++) {
pixels.setPixelColor(i , pixels.Color(0 , 5 , 50));
}
pixels.show();
delay(100);
}

void green () {
for(int i = 0 ; i <= 15 ; i++) {
pixels.setPixelColor(i , pixels.Color(0 , 55 , 0));
}
pixels.show();
delay(100);
}

void red () {
for(int i = 0 ; i <= 15 ; i++) {
pixels.setPixelColor(i , pixels.Color(55 , 0 , 0));
}
pixels.show();
delay(100);
}

void changing () {

for(int i = 0 ; i <= 40 ; i++) {
  for(int a = 0 ; a <= 15 ; a++) {
      pixels.setPixelColor(a , pixels.Color(0 , i , 40 - i));
  }
  pixels.show();
  delay(50);
}
for(int i = 0 ; i <= 40 ; i++) {
  for(int a = 0 ; a <= 15 ; a++) {
      pixels.setPixelColor(a , pixels.Color(i , 40 - i , 0));
  }
  pixels.show();
  delay(50);
}
for(int i = 0 ; i <= 40 ; i++) {
  for(int a = 0 ; a <= 15 ; a++) {
      pixels.setPixelColor(a , pixels.Color(40 - i , 0 , i));
  }
  pixels.show();
  delay(50);
}
}

void flashlight () {
for(int i = 0 ; i <= 15 ; i++) {
    pixels.setPixelColor(i , pixels.Color(255 , 255 , 255));
}
pixels.show();
delay(100);
}

void loading () {
for(int i = 3 ; i <= 15 ; i++) {
    for(int q = 0 ; q <= 15 ; q++) pixels.setPixelColor(q , pixels.Color(0 , 0 , 0));
    pixels.setPixelColor(i , pixels.Color(40 , 0 , 20));
    pixels.setPixelColor(i-1 , pixels.Color(30 , 0 , 10));
    pixels.setPixelColor(i-2 , pixels.Color(20 , 0 , 5));
    pixels.setPixelColor(i-3 , pixels.Color(10 , 0 , 2));
    pixels.show();
    delay(40);
}
for(int q = 0 ; q <= 15 ; q++) pixels.setPixelColor(q , pixels.Color(0 , 0 , 0));
pixels.setPixelColor(0 , pixels.Color(40 , 0 , 20));
pixels.setPixelColor(15 , pixels.Color(30 , 0 , 10));
pixels.setPixelColor(14 , pixels.Color(20 , 0 , 5));
pixels.setPixelColor(13 , pixels.Color(10 , 0 , 2));
pixels.show();
delay(40);
for(int q = 0 ; q <= 15 ; q++) pixels.setPixelColor(q , pixels.Color(0 , 0 , 0));
pixels.setPixelColor(1 , pixels.Color(40 , 0 , 20));
pixels.setPixelColor(0 , pixels.Color(30 , 0 , 10));
pixels.setPixelColor(15 , pixels.Color(20 , 0 , 5));
pixels.setPixelColor(14 , pixels.Color(10 , 0 , 2));
pixels.show();
delay(40);
for(int q = 0 ; q <= 15 ; q++) pixels.setPixelColor(q , pixels.Color(0 , 0 , 0));
pixels.setPixelColor(2 , pixels.Color(40 , 0 , 20));
pixels.setPixelColor(1 , pixels.Color(30 , 0 , 10));
pixels.setPixelColor(0 , pixels.Color(20 , 0 , 5));
pixels.setPixelColor(15 , pixels.Color(10 , 0 , 2));
pixels.show();
delay(40);
for(int q = 0 ; q <= 15 ; q++) pixels.setPixelColor(q , pixels.Color(0 , 0 , 0));
pixels.setPixelColor(3 , pixels.Color(40 , 0 , 20));
pixels.setPixelColor(2 , pixels.Color(30 , 0 , 10));
pixels.setPixelColor(1 , pixels.Color(20 , 0 , 5));
pixels.setPixelColor(0 , pixels.Color(10 , 0 , 2));
pixels.show();
delay(40);
}

void loading_2 () {
  for(int i = 0 ; i <= 15 ; i++) {
      pixels.setPixelColor(i , pixels.Color(30 , 0 , 10));
      pixels.show();
      delay(40);
  }
}

