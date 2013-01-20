int lightPin = 0;
int ledPin = 9;


void setup(){
  analogReference(DEFAULT);
   pinMode(lightPin, INPUT);
   pinMode(ledPin, OUTPUT);
  Serial.begin(9600); 
}

void loop(){
  
  // valeurs 700->400
   int val = analogRead(lightPin);
  Serial.println(val);
   val = constrain(val, 300, 400);
   
   int ledLevel =   map (val, 300, 400, 255, 0);
   
   analogWrite(ledPin, ledLevel);
   
   
   
   // Afficher la valeur analogique prise sur la broche 0
  //Serial.println(ledLevel);
  delay(1000); 
}
