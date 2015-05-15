const int speaker =9;

const int Pot0 = A0;
float valPot0;

const int Pot1 = A1;
float valPot1;

void setup()
{
	pinMode(speaker, OUTPUT);
}
void loop()
{
	valPot0 = analogRead(Pot0);
	valPot1 = analogRead(Pot1);
        tone(speaker, valPot1, valPot0);
	
        
        delay(2*valPot0);
}
