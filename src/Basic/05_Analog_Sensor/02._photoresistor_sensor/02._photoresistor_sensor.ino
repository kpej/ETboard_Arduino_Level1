/******************************************************************************************
 * FileName     : 02._photoresistor_sensor
 * Description  : 조도 센서 값 출력해 보기
 * Author       : 오경석
 * Created Date : 2023.10.25
 * Reference    :
 * Modified     : 2024.03.25 : PEJ : 주석 수정, 딜레이 추가
******************************************************************************************/


// global variable
int sensor = A1;                          // 조도 센서 핀 지정


// setup
void setup() {
  Serial.begin(115200);                   // 시리얼 통신 속도 설정
}


// main loop
void loop() {
  int sensor_result = analogRead(sensor); // 조도 센서 값 저장

  Serial.println(sensor_result);          // 시리얼 모니터에 조도 센서 값 출력

  delay(100);                             // 0.1초 기다리기
}


//==========================================================================================
//                                                    
// (주)한국공학기술연구원 http://et.ketri.re.kr       
//                                                    
//==========================================================================================