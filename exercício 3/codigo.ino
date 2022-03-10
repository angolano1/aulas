const int led1 = 1;
const int led2 = 2;
const int led3 = 3;
const int led4 = 4;
const int led5 = 5;



void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);




}

void loop()

 {  
  delay(2000);
  digitalWrite(led1, HIGH);
  delay(2000);
  digitalWrite(led2, HIGH);  
  delay(2000);
  digitalWrite(led3, HIGH);  
  delay(2000);
  digitalWrite(led4, HIGH);  
  delay(2000);
  digitalWrite(led5, HIGH);
  delay(2000);
  apagarTudo();
  delay(2000);
 }
  
   
   
  
   
   void apagarTudo(){
   digitalWrite(led1, LOW);
   digitalWrite(led2, LOW);
   digitalWrite(led3, LOW);
   digitalWrite(led4, LOW);   
   digitalWrite(led5, LOW);   
 
   }
