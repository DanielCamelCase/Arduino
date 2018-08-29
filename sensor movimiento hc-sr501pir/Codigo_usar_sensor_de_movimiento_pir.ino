

const int sPIR = 7; // Sensor de movimiento PIR HC-SR501 / Pin 8 - Arduino Uno;
const int led = 9; // Led / Pin 13 - Arduino Uno;

int mov = 0; // Variable que guarda el cambio de estado del PIR HC-SR501

void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  pinMode(sPIR,INPUT);
  Serial.println("PIR HC-SR501| Sensor de Movimiento Infrarrojos");
  Serial.println("Escrito por DanielCamelCase");
  Serial.println(" ");
}

void loop() {
  mov = digitalRead(sPIR);
  delay(100);
  if (mov == HIGH) {
    Serial.print(mov); Serial.print(" : "); Serial.println("1"); 
    digitalWrite(led,HIGH);
    delay(7000);
    digitalWrite(led,LOW);
    mov = 0;
    delay(200);
  }
    
  else {
    Serial.print(mov); Serial.print(" : "); Serial.println("No detecto ningun movimiento");
    delay(200);
    }
    }


