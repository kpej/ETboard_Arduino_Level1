/******************************************************************************************
 * FileName     : 01._led_red_turn_on
 * Description  : 빨강 LED 켜 보기
 * Author       : 오경석
 * Created Date : 2023.10.24
 * Reference    :
 * Modified     : 2024.03.22 : PEJ : 주석 수정
******************************************************************************************/


// global variable
int led_red = D2;                       // 빨강 LED 핀 지정


// setup
void setup() {
  pinMode(led_red, OUTPUT);             // 빨강 LED를 출력 모드로 설정
}


// main loop
void loop() {
  digitalWrite(led_red, HIGH);          // 빨강 LED 켜기
}


//==========================================================================================
//                                                    
// (주)한국공학기술연구원 http://et.ketri.re.kr       
//                                                    
//==========================================================================================
