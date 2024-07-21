#define BLYNK_TEMPLATE_ID "TMPL6faPXGFqx"
#define BLYNK_TEMPLATE_NAME "Quickstart Template"
#define BLYNK_AUTH_TOKEN "1H0fQZKlu_Uhap-GGVC-LWsskI7cYnYG"
#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "Realme 7i";
char pass[] = "yum123yumm";

BlynkTimer timer;

const int led = 13;
const int vs = D2; // Vibration sensor, connect to GPIO pin D2 on ESP8266

void setup() {
  pinMode(D0, OUTPUT);
  pinMode(led, OUTPUT);
  pinMode(vs, INPUT);
  Serial.begin(9600);

  Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);
  timer.setInterval(1000L, readSW420);
}

void loop() {
  Blynk.run();
  timer.run();

  long measurement = vibration();

  if (measurement >= 0 && measurement <= 1000) {
    Serial.println(measurement);

    if (measurement > 450) {
      digitalWrite(led, HIGH);
      // Send a high signal to virtual pin V0
      Blynk.virtualWrite(V0, HIGH);
    } 

    // Send the vibration measurement to Blynk app
    Blynk.virtualWrite(V3, measurement);
  }
}


long vibration() {
  unsigned long duration = pulseIn(vs, HIGH, 1000000);  // Set a timeout of 1 second (adjust as needed)
  return duration;
}

void readSW420() {
  int sw420Value = analogRead(vs);
  Blynk.virtualWrite(V1, sw420Value); // Send SW420 value to virtual pin V1
}

BLYNK_WRITE(V0) {
  int ledState = param.asInt();
  digitalWrite(D0, ledState);
}
