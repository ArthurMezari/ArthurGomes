const int botao = 2;      
const int led = 13;        
bool estadoPisca = false;  
bool estadoLed = LOW;      
unsigned long tempoAnterior = 0;
const long intervalo = 500;

void setup() {
  pinMode(botao, INPUT_PULLUP);
  pinMode(led, OUTPUT);
}

void loop() {
  static bool ultimoEstadoBotao = HIGH;
  bool estadoBotao = digitalRead(botao);

  if (estadoBotao == LOW && ultimoEstadoBotao == HIGH) {
    estadoPisca = !estadoPisca;  
    delay(200); 
  }
  ultimoEstadoBotao = estadoBotao;

  if (estadoPisca) {
    if (millis() - tempoAnterior >= intervalo) {
      tempoAnterior = millis();
      estadoLed = !estadoLed;
      digitalWrite(led, estadoLed);
    }
  } else {
    digitalWrite(led, LOW);  
  }
}

