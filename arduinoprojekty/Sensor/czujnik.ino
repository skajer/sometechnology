int czujnik = 8; 
int dioda = 9;
 
void setup(){
  Serial.begin(9600);        
  pinMode(czujnik, INPUT);   
  pinMode(dioda, OUTPUT);
  Serial.println("---- TEST CZUJNIKA RUCHU ----"); 
}
 
void loop(){
  int ruch = digitalRead(czujnik);     

  if(ruch == HIGH)                      
  {                                   
    Serial.println("Wykryto ruch");
    digitalWrite(dioda, HIGH);
  }
  if(ruch == LOW)
  {
    Serial.println("Brak ruchu");
    delay(3000);
    digitalWrite(dioda, LOW);
  }
        
  delay(200);                         
}
