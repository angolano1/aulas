const int led1 = 2;
const int led2 = 3;
void setup()
{
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
}

void loop()
{
  digitalWrite(led1, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(led1, LOW);
  delay(2000); // Wait for 2000 millisecond(s)
  digitalWrite(led2, HIGH);
  delay(1000);
  digitalWrite(led2, LOW);
  delay(1000);
}
