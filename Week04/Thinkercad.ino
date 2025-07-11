//풀업 저항은 I2C 신호선을 기본적으로 HIGH(1)로 유지해주는 역할
//I2C: 슬리브 장치(112개) 에 주소와 읽기/쓰기를 결정하는 비트

#include <Wire.h>    //I2C 통신을 위한 기본 라이브러리
#include <LiquidCrystal_I2C.h>    //I2C LDC 라이브러리

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup()
{
  lcd.init();  // I2C LDC 초기화
  lcd.backlight();  // 백라이트 켜기
  lcd.print("LCD init");
  delay(2000);
  lcd.clear();
}

void loop()
{
  lcd.setCursor(0, 0);
  lcd.print("Hello, World");
  
  for (int position = 0; position < 16; position++){
  	lcd.scrollDisplayLeft();
    delay(150);
  }
}
