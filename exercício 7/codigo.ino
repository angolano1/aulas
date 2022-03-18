const int botao1 = 2;
const int botao2 = 3;
const int botao3 = 4;
const int botao4 = 5;
const int botao5 = 6;
const int botao6 = 7;
const int botao7 = 8;

void setup()
{
  pinMode(botao1, OUTPUT);
  pinMode(botao2, OUTPUT);
  pinMode(botao3, OUTPUT);
  pinMode(botao4, OUTPUT);
  pinMode(botao5, OUTPUT);
  pinMode(botao6, OUTPUT);
  pinMode(botao7, OUTPUT);
  Serial.begin(9600);

}


int valor1;
int valor2;
int valor3;
int valor4;
int valor5;
int valor6;
int valor7;
int analogValue = 0;   

void loop(){
  
  analogValue = analogRead(0);
  valor1 = digitalRead(botao1);
  valor2 = digitalRead(botao2);
  valor3 = digitalRead(botao3);
  valor4 = digitalRead(botao4);
  valor5 = digitalRead(botao5);
  valor6 = digitalRead(botao6);
  valor7 = digitalRead(botao7);
  
  
  if(valor1){
    Serial.println("DO");
 
  }
  if(valor2){
   Serial.println("RE"); 
 
  } 
  if(valor3){
    Serial.println("MI");  
  
  }
  if(valor4){
    Serial.println("FA");
  
  }
    if(valor5){
    Serial.println("SOL");
   
   }
   if(valor6){
    Serial.println("LA");
   
   }
   if(valor7){
    Serial.println("SI");
   
   }

}
