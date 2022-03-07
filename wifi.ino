#include <ESP8266WiFi.h>

void setup()
{
  Serial.begin(9600);  //시리얼 포트 오픈, 전송속도 9600 bps 설정
  Serial.println();

  WiFi.begin("human", "0312395855"); // 와이파이에 접속 시도

  Serial.print("Connecting");
  while (WiFi.status() != WL_CONNECTED)
  // 네트워크의 연결 상태, 8개의 리턴값 
  // STATUS와 WL_CONNECTED 값이 같은지를 통해 제대로 연결이 되있는지를 확인할 수 있다
  {
    delay(500);
    Serial.print(".");
  }
  Serial.println();

  Serial.print("Connected, IP address: ");
  Serial.println(WiFi.localIP());
}

void loop() {}
