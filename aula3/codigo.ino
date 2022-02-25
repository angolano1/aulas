const int led1 = 2;
const int led2 = 3;
const int led3 = 4;
const int led4 = 5;
const int led5 = 6;
const int bot1 = 8;
const int bot2 = 9;
const int bot3 = 10;
void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  
  pinMode(bot1, INPUT);
  pinMode(bot2, INPUT);
  pinMode(bot3, INPUT);
}
 int valor1;
int valor2;
int valor3;

void loop()
{
 valor1 = digitalRead(bot1);
 valor2 = digitalRead(bot2);
 valor3 = digitalRead(bot3);
  
 if(valor1){
  digitalWrite(led1, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led5, HIGH);
 }
 if(valor2){
  digitalWrite(led2, HIGH);
  digitalWrite(led4, HIGH);
 }
 if(valor3){
  digitalWrite(led1, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led4, LOW);
 }
}
    
