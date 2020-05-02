
int boardLed = D7;

void myHandler(const char *event, const char *data);

void setup() {

	pinMode(boardLed,OUTPUT); 
	

	Particle.subscribe("Deakin_RIOT_SIT210_Photon_Buddy", myHandler);
}


void loop() {
	
}


// Now for the myHandler function, which is called when the cloud tells us that our buddy's event is published.
void myHandler(const char *event, const char *data)
{
	

	if (strcmp(data,"wave")==0) {
		
		digitalWrite(boardLed,HIGH);
		delay(1000);
		digitalWrite(boardLed,LOW);
		delay(1000);
		digitalWrite(boardLed,HIGH);
		delay(1000);
		digitalWrite(boardLed,LOW);
		delay(1000);
		digitalWrite(boardLed,HIGH);
		delay(1000);
		digitalWrite(boardLed,LOW);
		delay(1000);
	}
	else if (strcmp(data, "pat") == 0) {
	    digitalWrite(boardLed,HIGH);
		delay(300);
		digitalWrite(boardLed,LOW);
		delay(300);
		digitalWrite(boardLed,HIGH);
		delay(300);
		digitalWrite(boardLed,LOW);
		delay(300);
		digitalWrite(boardLed,HIGH);
		delay(300);
		digitalWrite(boardLed,LOW);
		delay(300);
		digitalWrite(boardLed,HIGH);
		delay(300);
		digitalWrite(boardLed,LOW);
		delay(300);
		digitalWrite(boardLed,HIGH);
		delay(300);
		digitalWrite(boardLed,LOW);
		delay(300);
		digitalWrite(boardLed,HIGH);
		delay(300);
		digitalWrite(boardLed,LOW);
		delay(300);
	}
	
	else {
	
	}
}