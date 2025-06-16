int led1 = 2;
int led2 = 3;
int led3 = 4;
int led4 = 5;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
}

void loop() {
  for (int count = 0; count < 16; count++) {
    if (count % 2 == 1) {
      digitalWrite(led1, HIGH);
    } else {
      digitalWrite(led1, LOW);
    }

    if ((count / 2) % 2 == 1) {
      digitalWrite(led2, HIGH);
    } else {
      digitalWrite(led2, LOW);
    }

    if ((count / 4) % 2 == 1) {
      digitalWrite(led3, HIGH);
    } else {
      digitalWrite(led3, LOW);
    }

    if ((count / 8) % 2 == 1) {
      digitalWrite(led4, HIGH);
    } else {
      digitalWrite(led4, LOW);
    }

    delay(500);
  }
}

