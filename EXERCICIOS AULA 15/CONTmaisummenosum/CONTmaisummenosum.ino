#define pin_led1 8
#define pin_led2 9
#define pin_led3 10
#define pin_botao1 2
#define pin_botao2 3


int conta = 0;
bool tic = 0;


void setup() {
  

  pinMode(pin_led1, OUTPUT);
  pinMode(pin_led2, OUTPUT);
  pinMode(pin_led3, OUTPUT);
  pinMode(pin_botao1, INPUT);
  pinMode(pin_botao2, INPUT);
  Serial.begin(9600);
}

void loop() {
  bool estado1 = digitalRead(pin_botao1);
  bool estado2 = digitalRead(pin_botao2); 
  if (estado1 == 1 && tic == 0) {
  conta += 1; 
  tic += 1;
  }
  
  if (estado1 == 0 && estado2 == 0) {
  tic = 0; 
  }
  if (estado2 == 1 && tic == 0) {
  conta -= 1;
  tic += 1;
  }
  Serial.println(conta);
}
