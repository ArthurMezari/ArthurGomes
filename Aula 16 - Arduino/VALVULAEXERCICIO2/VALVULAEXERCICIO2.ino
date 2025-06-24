const int sensorA = 2;
const int sensorB = 3;
const int valvula = 4;

void setup() {
  pinMode(sensorA, INPUT);
  pinMode(sensorB, INPUT);
  pinMode(valvula, OUTPUT);
}

void loop() {
  int nivelA = digitalRead(sensorA);
  int nivelB = digitalRead(sensorB);

  if (nivelA == HIGH || nivelB == HIGH) {
    digitalWrite(valvula, HIGH); 
  } else {
    digitalWrite(valvula, LOW);   
  }

  delay(100); 
}

