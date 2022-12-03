const int LED13 = 13;
const int LED12 = 12;
const int LED11 = 11;
const int LED10 = 10;
const int LED9 = 9;
const int LED8 = 8;
const int LED7 = 7;
const int LED6 = 6;
  
void setup() {
  pinMode(LED13, OUTPUT); //czerowna
  pinMode(LED12, OUTPUT); //niebieska
  pinMode(LED11, OUTPUT); 
  pinMode(LED10, OUTPUT); 
  pinMode(LED9, OUTPUT); 
  pinMode(LED8, OUTPUT); 
  pinMode(LED7, OUTPUT); 
  pinMode(LED6, OUTPUT); 
}

void loop() {
    
    digitalWrite(LED13, HIGH);
    digitalWrite(LED12, HIGH);
    digitalWrite(LED11, HIGH);
    digitalWrite(LED10, HIGH);
    digitalWrite(LED9, HIGH);
    digitalWrite(LED8, HIGH);
    digitalWrite(LED7, HIGH);
    digitalWrite(LED6, HIGH);

}
