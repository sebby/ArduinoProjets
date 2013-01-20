int switchPin = 8;
int ledPin = 11;
boolean lastButton = LOW;
boolean currentButton =LOW ;
int ledLevel  = 0;

void setup()
{
  pinMode(switchPin, INPUT);
  pinMode(ledPin, OUTPUT);
}




boolean debounce (boolean last){
  boolean current = digitalRead(switchPin);
  if(current!=last){
     delay (5);
     current = digitalRead(switchPin); 
  }
  return current;
}




void loop()
{
  currentButton =  debounce(lastButton);
 if(currentButton == HIGH && lastButton==LOW){
  ledLevel = ledLevel + 51;
  
 } 

   lastButton = currentButton;
   
   if(ledLevel>255) ledLevel=0;
 analogWrite(ledPin,ledLevel);
}