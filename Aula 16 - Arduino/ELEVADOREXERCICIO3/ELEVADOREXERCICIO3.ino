const int M = 2;    
const int F1 = 3;   
const int F2 = 4;   
const int F3 = 5;   
const int porta = 6;  

void setup() {
  pinMode(M, INPUT);
  pinMode(F1, INPUT);
  pinMode(F2, INPUT);
  pinMode(F3, INPUT);
  pinMode(porta, OUTPUT);
}

void loop() {

  int movimento = digitalRead(M);
  int pisoF1 = digitalRead(F1);
  int pisoF2 = digitalRead(F2);
  int pisoF3 = digitalRead(F3);


  if (movimento == LOW && (pisoF1 == HIGH || pisoF2 == HIGH || pisoF3 == HIGH)) {
    digitalWrite(porta, HIGH);  
  } else {
    digitalWrite(porta, LOW);   
  }

  delay(100);  
}

