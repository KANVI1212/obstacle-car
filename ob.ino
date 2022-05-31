const int RM1 = A0;
const int RM2 = A2;
const int LM1 =A4 ;
const int LM2 =A5;
const int trigPin =4;
const int echoPin =2;
void setup() {
  delay(random(500,2000)); 
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode (RM1, OUTPUT);
  pinMode (RM2, OUTPUT);
  pinMode (LM1, OUTPUT);
  pinMode (LM2, OUTPUT);
}
  long duration, distance;
void loop() {
   digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);  
  duration = pulseIn(echoPin, HIGH);
  distance = duration/58.2;
    Serial.println(distance);   
 if (distance > 15)            
  {
    digitalWrite(RM1, HIGH);                    // move forward 
    digitalWrite(RM2, LOW);
    digitalWrite(LM1, HIGH);                                
    digitalWrite(LM2, LOW);  
    Serial.println("f");                                                     
  }

 else
  {
    digitalWrite(RM1, LOW);  //Stop                
    digitalWrite(RM2, LOW);
    digitalWrite(LM1, LOW);                                
    digitalWrite(LM2, LOW);
    delay(500);
    digitalWrite(RM1, LOW);      //movebackword         
    digitalWrite(RM2, HIGH);
    digitalWrite(LM1, LOW);                                
    digitalWrite(LM2, HIGH);
    delay(500);
    digitalWrite(RM1, LOW);  //Stop                
    digitalWrite(RM2, LOW);
    digitalWrite(LM1, LOW);                                
    digitalWrite(LM2, LOW);  
    delay(500);  
    digitalWrite(RM1, HIGH);       
    digitalWrite(RM2, LOW);   
    digitalWrite(LM1, LOW);                                 
    digitalWrite(LM2, LOW);  
    delay(500);
  }}
