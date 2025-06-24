const int leds[] = {3, 4, 5, 6};   
const int botaoIda = 7;             
const int botaoVolta = 8;          
int etapa = -1;
bool sentidoIda = true;
unsigned long tempoAnterior = 0;
const long intervalo = 300;          

void setup() {
  for (int i = 0; i < 4; i++) {
    pinMode(leds[i], OUTPUT);
  }
  pinMode(botaoIda, INPUT_PULLUP);
  pinMode(botaoVolta, INPUT_PULLUP);
}

void loop() {
  static bool ultimaLeituraIda = HIGH;
  static bool ultimaLeituraVolta = HIGH;

  bool leituraIda = digitalRead(botaoIda);
  bool leituraVolta = digitalRead(botaoVolta);

 
  if (leituraIda == LOW && ultimaLeituraIda == HIGH) {
    sentidoIda = true;
    etapa = 0;
    tempoAnterior = millis();
    delay(200);  
  }

  if (leituraVolta == LOW && ultimaLeituraVolta == HIGH) {
    sentidoIda = false;
    etapa = 0;
    tempoAnterior = millis();
    delay(200);  
  }

  ultimaLeituraIda = leituraIda;
  ultimaLeituraVolta = leituraVolta;


  if (etapa >= 0 && millis() - tempoAnterior >= intervalo) {
   
    for (int i = 0; i < 4; i++) {
      digitalWrite(leds[i], LOW);
    }

    if (sentidoIda) {
      if (etapa < 4) digitalWrite(leds[etapa], HIGH);
    } else {
      if (etapa < 4) digitalWrite(leds[3 - etapa], HIGH);
    }

    etapa++;

    if (etapa >= 4) {
      etapa = -1;
    }
    tempoAnterior = millis();
  }
}

