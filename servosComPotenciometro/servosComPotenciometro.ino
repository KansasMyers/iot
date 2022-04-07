#include <Servo.h>

// Portas do Potenciômetro
#define POTENCIOMETRO1 0
#define POTENCIOMETRO2 1

// Portas do Servo
#define SERVOMOTOR1 11
#define SERVOMOTOR2 3

// Criando os objetos dos Servos
Servo servoMotor1;
Servo servoMotor2;

int valorPot1;
int valorPot2;

void setup()
{
  	// Utilizando o método attach para atrelar o objeto a uma porta pwm
	servoMotor1.attach(SERVOMOTOR1);
	servoMotor2.attach(SERVOMOTOR2);
}

void loop()
{
  	// Faz a leitura do valor do primeiro potenciômetro
	valorPot1 = analogRead(POTENCIOMETRO1);
  	/*
    	Remapeando o valor analógico para um valor entre 0 e 180 que
        irá representar o ângulo do movimento.
    */
	valorPot1 = map(valorPot1, 0, 1023, 0, 180);
  
  	// Faz a leitura do valor do segundo potenciômetro
	valorPot2 = analogRead(POTENCIOMETRO2);
	valorPot2 = map(valorPot2, 0, 1023, 0, 180);
  
  	// Escreve o valor em ângulos no objeto do servo
  	servoMotor1.write(valorPot1);
	servoMotor2.write(valorPot2);

  	delay(20);
}