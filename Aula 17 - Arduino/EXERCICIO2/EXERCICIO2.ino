const int leds[] = {3, 4, 5, 6};  
unsigned long tempos[] = {125, 250, 500, 1000};  
int etapa = 0;
unsigned long tempoAnterior = 0;

void setup() {
  for (int i = 0; i < 4; i++) {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
  unsigned long agora = millis();

  if (etapa < 4) {
    if (agora - tempoAnterior >= tempos[etapa]) {
      digitalWrite(leds[etapa], HIGH);
      tempoAnterior = agora;
      etapa++;
    }
  } else if (etapa == 4) {
   
    for (int i = 0; i < 4; i++) {
      digitalWrite(leds[i], LOW);
    }
    etapa = 0;
    tempoAnterior = agora;
  }
}

