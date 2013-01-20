int buttonPin = 0;

int ledPin = 13;

void setup(){
   pinMode(buttonPin, INPUT);
   pinMode(ledPin, OUTPUT);  
  
  Serial.begin(9600); 
}

void loop(){
 
 
  //digitalWrite(ledPin, digitalRead(buttonPin));
   
    Serial.println(analogRead(buttonPin));
  delay(100); 
}
