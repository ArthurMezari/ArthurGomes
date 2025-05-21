#define pin_led1 8     //o define nomeia o seu pino, logo depois você indica onde está conectado o seu cabo no arduino, no caso 8.
#define pin_led2 9
#define pin_led3 10
#define pin_led4 11
#define pin_botao1 2
#define pin_botao2 3



void setup() {
   pinMode(pin_led1, OUTPUT); 
  pinMode(pin_led2, OUTPUT);
  pinMode(pin_led3, OUTPUT);
  pinMode(pin_led4, OUTPUT);
  pinMode(pin_botao1, INPUT);
  pinMode(pin_botao2, INPUT);

}

void loop() {
    bool estado = digitalRead(pin_botao1);
  if (estado == 1) {
    digitalWrite(pin_led1, HIGH);
    digitalWrite(pin_led2)


  

  

}
