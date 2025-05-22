#define BLYNK_TEMPLATE_ID "TMPL6Yv1bdEkM"
#define BLYNK_TEMPLATE_NAME "THT"
#define BLYNK_FIRMWARE_VERSION "0.1.0"
#define BLYNK_PRINT Serial
#define APP_DEBUG
#define USE_NODE_MCU_BOARD

#include "BlynkEdgent.h"
#include "SensorManager.h"

WidgetLED led(V0);
BlynkTimer timer;
unsigned long times = millis();

void blinkLedWidget() {
  if (led.getValue()) led.off();
  else led.on();
}

void setup() {
  Serial.begin(115200);
  delay(100);
  BlynkEdgent.begin();
  initSensor();
  timer.setInterval(1000L, blinkLedWidget);
}

void loop() {
  BlynkEdgent.run();
  timer.run();
  if (millis() - times > 2000) {
    sendDHTData();
    times = millis();
  }
}
