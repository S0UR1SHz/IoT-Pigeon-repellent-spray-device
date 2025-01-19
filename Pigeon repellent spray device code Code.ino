#define BLYNK_PRINT Serial

#define BLYNK_TEMPLATE_ID           "TMPL6w8OUk5Qs"
#define BLYNK_TEMPLATE_NAME         "Project"
#define BLYNK_AUTH_TOKEN            "_JCmquNALnBpfjblkLRcfC_IML2xl9qo"

#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

char ssid[] = "Suriyakarn";  // ชื่อ WI-FI
char pass[] = "12345678";    // รหัส WI-FI

void setup()
{
  Serial.begin(115200);
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
  pinMode(16, OUTPUT); // ในแอปให้ใช้ Pin ตัวที่ 16 หรือตามที่ตั้ง

  // Set pin to HIGH initially to ensure relay is off
  digitalWrite(16, HIGH); 

  // Set default value of V16 to 1 in the app (relay off initially)
  Blynk.virtualWrite(V16, 1);
}

void loop()
{
  Blynk.run();
}

BLYNK_WRITE(V16) {
  int pinValue = param.asInt();
  digitalWrite(16, !pinValue); // สลับค่าของ pinValue เพื่อรองรับ Low Level Trigger relay
}
