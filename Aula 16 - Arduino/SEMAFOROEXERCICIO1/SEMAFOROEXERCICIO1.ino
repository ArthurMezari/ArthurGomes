#define led1 8
#define led2 9
#define led3 10
#define led4 11
#define botaoruaA 2
#define botaoruaB 3
bool estadobotaoA = 0;
bool estadobotaoB = 0;




void setup() {
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(led4, OUTPUT);
pinMode(botaoruaA, INPUT);
pinMode(botaoruaB, INPUT);
}

void loop() {
bool estadobotaoA = digitalRead(botaoruaA);
bool estadobotaoB = digitalRead(botaoruaB);

    if(estadobotaoA == 1 && estadobotaoB == 0) 

    {
      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
    }

    if(estadobotaoA == 0 && estadobotaoB == 1)

    {
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, HIGH);
    }
    if(estadobotaoA == 1 && estadobotaoB == 1)

    {
      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
    }
    if(estadobotaoA == 0 && estadobotaoB == 0)

    {
      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
    }


}
