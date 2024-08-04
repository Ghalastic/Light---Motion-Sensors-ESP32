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
![‏‏لقطة الشاشة (2230)](https://github.com/user-attachments/assets/34dba6cc-d4e1-4c55-abfb-45533a2f8ddf)
#### 
### Program:
Wokwi
#### 
### Duration:
1 day
#### 
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
### Illustrations:
#### 
#### Version 1 - No Server, Not Connected to a Database
#### 
[Version 1](https://github.com/user-attachments/assets/11d77cd1-b49d-43d2-9506-19fba4d2ca61)
#### 
#### Version 2 - With a Server (IP Address), Connected to a Database
#### 
[Version 2](https://github.com/user-attachments/assets/6551877b-a9ee-4182-bb0e-b390341b73d0)
#### 
### Link:
[Light and Motion Sensors ESP32 Project](https://wokwi.com/projects/404743228762044417)
#### 
