#include <WiFi.h>
#include <HTTPClient.h>

#define PIR_PIN 14
#define RELAY_PIN 4
#define LDR_PIN 36

const char* ssid = "Wokwi-GUEST";
const char* password = "";
const char* serverName = "http://your_server_ip/insert_data.php";

void setup() {
  pinMode(PIR_PIN, INPUT);
  pinMode(RELAY_PIN, OUTPUT);
  Serial.begin(115200);

  // Connect to Wi-Fi
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi...");
  }
  Serial.println("Connected to WiFi");
}

void loop() {
  int pirValue = digitalRead(PIR_PIN);
  int ldrValue = analogRead(LDR_PIN);
  String lightStatus = "OFF";

  Serial.print("PIR Value: ");
  Serial.println(pirValue);
  Serial.print("LDR Value: ");
  Serial.println(ldrValue);

  if (pirValue == HIGH) {
    digitalWrite(RELAY_PIN, HIGH);
    lightStatus = "ON";
    Serial.println("Light ON");
  } else {
    digitalWrite(RELAY_PIN, LOW);
    lightStatus = "OFF";
    Serial.println("Light OFF");
  }

  if (WiFi.status() == WL_CONNECTED) {
    HTTPClient http;
    http.begin(serverName);
    http.addHeader("Content-Type", "application/x-www-form-urlencoded");

    String httpRequestData = "pir_value=" + String(pirValue)
                           + "&ldr_value=" + String(ldrValue)
                           + "&light_status=" + lightStatus;
    int httpResponseCode = http.POST(httpRequestData);

    if (httpResponseCode > 0) {
      String response = http.getString();
      Serial.println(httpResponseCode);
      Serial.println(response);
    } else {
      Serial.print("Error on sending POST: ");
      Serial.println(httpResponseCode);
    }

    http.end();
  } else {
    Serial.println("Error in WiFi connection");
  }

  delay(1000);
}
