const int speaker =9;
const int Pot = A0;
float valPot;
void setup()
{
	pinMode(speaker, OUTPUT);
}
void loop()
{
	valPot = analogRead(Pot);
	tone(speaker, 100, valPot);
	delay(2*valPot);
}
