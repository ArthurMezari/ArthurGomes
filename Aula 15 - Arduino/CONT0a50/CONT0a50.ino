// Definição dos pinos dos LEDs
const int LED1 = 8;  // LED ligado quando contador = 0
const int LED2 = 9;  // LED ligado quando contador = 50

int contador = 0; // Valor inicial da contagem

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  
  // Inicializa LEDs desligados
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);

  // Inicializa a comunicação serial (opcional, para debug)
  Serial.begin(9600);
}

void loop() {
  // Simulando incremento ou decremento da contagem
  // Aqui vamos só contar de 0 a 50 e depois voltar pra 0, como exemplo
  for (contador = 0; contador <= 50; contador++) {
    atualizarLEDs();
    Serial.println(contador); // Mostrar valor no monitor serial
    delay(200); // Pequeno atraso para visualização
  }

  for (contador = 50; contador >= 0; contador--) {
    atualizarLEDs();
    Serial.println(contador);
    delay(200);
  }
}

void atualizarLEDs() {
  if (contador == 0) {
    digitalWrite(LED1, HIGH);
  } else {
    digitalWrite(LED1, LOW);
  }

  if (contador == 50) {
    digitalWrite(LED2, HIGH);
  } else {
    digitalWrite(LED2, LOW);
  }
}
