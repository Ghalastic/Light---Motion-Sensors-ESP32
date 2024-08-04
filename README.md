# Light and Motion Sensors using ESP32
#### 
## Task Description:-
#### 
Use ESP32 with light and motion sensors and connect the light and motion sensors with the database, so that:
#### 
- When there's no light but there's movement, the bulb opens 
- When there's no light nor there's movement, the bulb is closed
- When there's a light but there's no movement, the bulb is closed
#### 
### Program:
Wokwi
#### 
### Duration:
1 day
#### 
[Wokwi ESP32 Project](https://wokwi.com/projects/404743228762044417)
## Step-by-Step Guide:-
#### 
### Gather Components:
#### 
1- LED
2- ESP32
3- PIR Motion Sensor
4- Photoresistor (LDR) Sensor
5- Relay Module
#### 
### Connections:
#### LED:
#### 
1- A pin to the NO pin of the Relay Module
2- C pin to the GND pin of the ESP32
#### 
#### LDR Sensor:
#### 
1- VCC pin on the LDR Sensor to the CMD pin on the ESP32
2- GND pin on the LDR Sensor to the GND pin on the ESP32
3- AO pin on the LDR Sensor to the VP pin on the ESP32
#### 
#### PIR Motion Sensor:
#### 
1- VCC pin on the PIR Motion Sensor to the 3V3 pin on the ESP32
2- OUT pin on the PIR Motion Sensor to the 14 pin on the ESP32
3- GND pin on the PIR Motion Sensor to the GND pin on the ESP32
#### 
#### Relay Module:
#### 
1- IN pin on the Relay Module to the 4 pin on the ESP32 
2- GND pin on the Relay Module to the GND pin on the ESP32 
3- VCC pin on the Relay Module to the 5V pin on the ESP32
4- COM pin on the Relay Module to the 5V pin on the ESP32 
#### 
### Write the Code
#### 
