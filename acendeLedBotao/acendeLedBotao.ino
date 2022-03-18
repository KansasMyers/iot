#define PUSHBUTTON 2
#define LED 13

void setup()
{
	pinMode(PUSHBUTTON, INPUT_PULLUP);
	pinMode(LED, OUTPUT);
}

void loop()
{
	int valorBotao = digitalRead(PUSHBUTTON);
  	bool acendeLed = (valorBotao == LOW);
  	digitalWrite(LED, acendeLed);
}