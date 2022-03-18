const int botao1 = 2;
const int botao2 = 3;
const int botao3 = 4;
const int botao4 = 5;
const int botao5 = 6;

void setup()
{
  pinMode(botao1, OUTPUT);
  pinMode(botao2, OUTPUT);
  pinMode(botao3, OUTPUT);
  pinMode(botao4, OUTPUT);
  pinMode(botao5, OUTPUT);
  Serial.begin(9600);

}


int valor1;
int valor2;
int valor3;
int valor4;
int valor5;
int analogValue = 0;   

void loop(){
  
  analogValue = analogRead(0);
  valor1 = digitalRead(botao1);
  valor2 = digitalRead(botao2);
  valor3 = digitalRead(botao3);
  valor4 = digitalRead(botao4);
  valor5 = digitalRead(botao5);
  
 
  if(valor1){
    Serial.println("cavalo-andando");
 
  }
  if(valor2){
   Serial.println("cavalo-morrendo"); 
 
  } 
  if(valor3){
    Serial.println("Cavalo-nadando");  
  
  }
  if(valor4){
    Serial.println("cavalo-romano");
  
  }
    if(valor5){
    Serial.println("cavalo-espartano");
   
   }
 }
