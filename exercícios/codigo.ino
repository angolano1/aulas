const int led1 = 2;
void setup()
{
pinMode(led1, OUTPUT);
}

void loop()
{
  digitalWrite(led1, HIGH);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(led1, LOW);
  delay(500); // Wait for 500 millisecond(s)
}
