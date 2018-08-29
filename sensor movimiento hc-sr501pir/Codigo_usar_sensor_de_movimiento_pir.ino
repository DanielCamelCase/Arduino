

const int sPIR = 7; // Sensor de movimiento PIR | Pin 8 - Arduino Uno;
const int led = 9; // Led | Pin 13 - Arduino Uno;

int mov = 0; // Variable que guarda el cambio de estado del PIR

void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  pinMode(sPIR,INPUT);
  Serial.println("PIR Motion | Sensor de Movimiento IR");
  Serial.println("Escrito por Hugo Oroño para iobot");
  Serial.println(" ");
}

void loop() {
  mov = digitalRead(sPIR);
  delay(50);
  if (mov == HIGH) {
    Serial.print(mov); Serial.print(" : "); Serial.println("1"); 
    digitalWrite(led,HIGH);
    delay(8000);
    digitalWrite(led,LOW);
    mov = 0;
    delay(300);
  }
    
  else {
    Serial.print(mov); Serial.print(" : "); Serial.println("No se detecta movimiento");
    delay(300);
    }
    }


