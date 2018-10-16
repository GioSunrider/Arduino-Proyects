int rojo=11;      
int amarillo=12;  
int verde=13;     
int azul=5;
int naranja=7;
int interruptor=3;
int valor=0;

void setup() {
  pinMode(verde,OUTPUT);   
  pinMode(amarillo,OUTPUT);
  pinMode(rojo,OUTPUT);    
  pinMode(azul,OUTPUT);
  pinMode(naranja,OUTPUT);
  pinMode(interruptor, INPUT); 
}

void loop() {
 digitalWrite(verde,HIGH); 
 digitalWrite(naranja,HIGH);
 valor=digitalRead(interruptor);
  if ( valor==HIGH){
   delay(500);
   digitalWrite(verde,LOW); 
   digitalWrite(amarillo,HIGH);
   delay(1000);
   digitalWrite(naranja,LOW);
   delay(500);
   digitalWrite(amarillo,LOW); 
   digitalWrite(rojo,HIGH); 
   delay(200); 
   digitalWrite(azul,HIGH); 
   delay(5000);              
   digitalWrite(rojo,LOW);  
   digitalWrite(azul,LOW);  
   delay(500); 
  } 
}
