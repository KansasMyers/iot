int statusLed = LOW;
unsigned long millisAnteriores = 0;
unsigned long millisAtuais;
const long intevaloBlink = 500;

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  millisAtuais = millis();

  if (millisAtuais - millisAnteriores >= intevaloBlink) {
    millisAnteriores = millisAtuais;
    
    if (statusLed == LOW) {
      statusLed = HIGH;
    } else {
      statusLed = LOW;
    }
    
    digitalWrite(LED_BUILTIN, statusLed);
  }
}