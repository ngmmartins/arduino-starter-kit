#include <Arduino.h>

void setup();
void loop();
#line 1 "src/sketch.ino"
int switchState = 0;

void setup()
{
	Serial.begin(9600);
	Serial.println("TESTE");
	
	pinMode(3, OUTPUT);
	pinMode(4, OUTPUT);
	pinMode(5, OUTPUT);
	pinMode(2, INPUT);
}

void loop()
{
	Serial.println("INSIDE LOOP...");
	switchState = digitalRead(2);

	if ( switchState == LOW) {	// the button is not pressed
		digitalWrite(3, HIGH);
		digitalWrite(4, LOW);
		digitalWrite(5, LOW);
	} else {					// the button is pressed
		digitalWrite(3, LOW);
		digitalWrite(4, LOW);
		digitalWrite(5, HIGH);
		
		delay(250);
		
		digitalWrite(4, HIGH);
		digitalWrite(5, LOW);
		delay(250);
	}
}
