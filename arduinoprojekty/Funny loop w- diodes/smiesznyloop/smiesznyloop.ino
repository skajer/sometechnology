//stale


const int LED13 = 13;
const int LED12 = 12;
const int LED11 = 11;
const int LED10 = 10;
const int LED9 = 9;
const int LED8 = 8;
const int LED7 = 7;
const int LED6 = 6;
const int czujnik = 5; // czujnik ruchu



void setup() {

  pinMode(LED13, OUTPUT); //czerowna
  pinMode(LED12, OUTPUT); //niebieska
  pinMode(LED11, OUTPUT); 
  pinMode(LED10, OUTPUT); 
  pinMode(LED9, OUTPUT); 
  pinMode(LED8, OUTPUT); 
  pinMode(LED7, OUTPUT); 
  pinMode(LED6, OUTPUT);   
  pinMode(czujnik, OUTPUT);
  
}
 
void loop() {
    
  digitalWrite(LED13, HIGH);
  digitalWrite(czujnik, HIGH);

  if (LED13 == HIGH);
  {
    delay(1000);
    digitalWrite(LED13, LOW);
    
  } 

  if (LED12 == LOW);
  {
    digitalWrite(LED12, HIGH);
    delay(1000);
    digitalWrite(LED12, LOW);
    
  } 

  if (LED11 == LOW);
  {
    digitalWrite(LED11, HIGH);
    delay(1000);
    digitalWrite(LED11, LOW);
    
  } 

  if (LED10 == LOW);
  {
    digitalWrite(LED10, HIGH);
    delay(1000);
    digitalWrite(LED10, LOW);
    
  } 

  if (LED9 == LOW);
  {
    digitalWrite(LED9, HIGH);
    delay(1000);
    digitalWrite(LED9, LOW);
    
  } 

  if (LED8 == LOW);
  {
    digitalWrite(LED8, HIGH);
    delay(1000);
    digitalWrite(LED8, LOW);
    
  } 

  if (LED7 == LOW);
  {
    digitalWrite(LED7, HIGH);
    delay(1000);
    digitalWrite(LED7, LOW);
    
  } 

  if (LED6 == LOW);
  {
    digitalWrite(LED6, HIGH);
    delay(1000);
    digitalWrite(LED6, LOW);
    delay(2000);
    digitalWrite(LED13, HIGH);
    digitalWrite(LED12, HIGH);
    digitalWrite(LED11, HIGH);
    digitalWrite(LED10, HIGH);
    digitalWrite(LED9, HIGH);
    digitalWrite(LED8, HIGH);
    digitalWrite(LED7, HIGH);
    digitalWrite(LED6, HIGH);
    
  } 
 
}
