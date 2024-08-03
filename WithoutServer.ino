#define PIR_PIN 14
#define RELAY_PIN 4
#define LDR_PIN 36  

void setup() {
  pinMode(PIR_PIN, INPUT);
  pinMode(RELAY_PIN, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  int pirValue = digitalRead(PIR_PIN);
  int ldrValue = analogRead(LDR_PIN);

  Serial.print("PIR Value: ");
  Serial.println(pirValue);
  Serial.print("LDR Value: ");
  Serial.println(ldrValue);

if (pirValue == HIGH) {
    digitalWrite(RELAY_PIN, HIGH); 
    Serial.println("Light ON");
  } else {
    digitalWrite(RELAY_PIN, LOW); 
    Serial.println("Light OFF");
  }

  delay(1000); 
}
