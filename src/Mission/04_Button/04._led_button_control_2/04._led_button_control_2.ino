/******************************************************************************************
 * FileName     : 04._led_button_control_2
 * Description  : 빨강, 파랑 버튼 눌러서 모든 LED 켰다 껐다 해 보기
 * Author       : 오경석
 * Created Date : 2023.10.25
 * Reference    :
 * Modified     : 2024.03.27 : PEJ : 파일명, 코드, 주석 수정
******************************************************************************************/


// global variable
int led_red = D2;                                   // 빨강 LED 핀 지정
int led_blue = D3;                                  // 파랑 LED 핀 지정
int led_green = D4;                                 // 초록 LED 핀 지정
int led_yellow = D5;                                // 노랑 LED 핀 지정

int button_red = D6;                                // 빨강 버튼 핀 지정
int button_blue = D7;                               // 파랑 버튼 핀 지정


// setup
void setup() {
  pinMode(led_red, OUTPUT);                         // 빨강 LED를 출력 모드로 설정
  pinMode(led_blue, OUTPUT);                        // 파랑 LED를 출력 모드로 설정
  pinMode(led_green, OUTPUT);                       // 초록 LED를 출력 모드로 설정
  pinMode(led_yellow, OUTPUT);                      // 노랑 LED를 출력 모드로 설정

  pinMode(button_red, INPUT);                       // 빨강 버튼을 입력 모드로 설정
  pinMode(button_blue, INPUT);                      // 파랑 버튼을 입력 모드로 설정

  Serial.begin(115200);                             // 시리얼 통신 속도 설정
}


// main loop
void loop() {
  int button_red_value = digitalRead(button_red);   // 빨강 버튼 값 저장
  int button_blue_value = digitalRead(button_blue); // 파랑 버튼 값 저장

  if (button_red_value == LOW) {                    // 빨강 버튼의 값이 LOW라면
    digitalWrite(led_red, HIGH);                    // 빨강 LED 켜기
    digitalWrite(led_blue, HIGH);                   // 파랑 LED 켜기
    digitalWrite(led_green, HIGH);                  // 초록 LED 켜기
    digitalWrite(led_yellow, HIGH);                 // 노랑 LED 켜기

    // 시리얼 모니터에 "빨강 버튼이 눌림" 출력
    Serial.println("빨강 버튼이 눌림");
  }
  else if (button_blue_value == LOW) {              // 파랑 버튼의 값이 LOW라면
    digitalWrite(led_red, LOW);                     // 빨강 LED 끄기
    digitalWrite(led_blue, LOW);                    // 파랑 LED 끄기
    digitalWrite(led_green, LOW);                   // 초록 LED 끄기
    digitalWrite(led_yellow, LOW);                  // 노랑 LED 끄기

    // 시리얼 모니터에 "파랑 버튼이 눌림" 출력
    Serial.println("파랑 버튼이 눌림");
  }

  delay(100);                                       // 0.1초 기다리기
}


//==========================================================================================
//                                                    
// (주)한국공학기술연구원 http://et.ketri.re.kr       
//                                                    
//==========================================================================================
