#include <SimpleTimer.h>
SimpleTimer timerCnt; //SimpleTimer를 이용해 오브젝트 timerCnt를 생성

unsigned long loopCnt;

void timerCntFunc() {
  Serial.println(loopCnt);
  loopCnt = 0;
}

void setup() {
  Serial.begin(115200);
  Serial.println();
  //timerCnt에 setInterval() 메소드를 붙여 실행
  timerCnt.setInterval(1000,timerCntFunc); //(실행 간격-밀리초, 함수)
}
// loop()의 수행 속도에 맞춰 센서 데이터를 취득하는 것이 중요한 경우 SimpleTimer 사용
void loop() {
  timerCnt.run(); //메소드가 실행될 때 조건이 충족되면 지정한 함수가 실행
  loopCnt++; 
}
