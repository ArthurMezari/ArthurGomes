#define pin_led1 12
#define pin_led2 13

void setup()
{
  pinMode(pin_led1, OUTPUT);
  pinMode(pin_led2, OUTPUT);
}

void loop()
{
 digitalWrite(pin_led1, HIGH);
 digitalWrite(pin_led2, LOW);
 delay(500);
  
 digitalWrite(pin_led1, LOW);
 digitalWrite(pin_led2, HIGH);
 delay(500);
}
