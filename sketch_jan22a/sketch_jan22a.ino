

// Wiring / Arduino Code
// Code for sensing a switch status and writing the value to the serial port.

int switchPin = 4;                       // Switch connected to pin 4
int ledPin = 13;

void setup() {
  pinMode(switchPin, INPUT);             // Set pin 0 as an input
  pinMode (ledPin, OUTPUT);
  Serial.begin(9600);                    // Start serial communication at 9600 bps
}

void loop() {
  if (digitalRead(switchPin) == HIGH) {  
   
  //  Serial.print(1, BYTE);    // send 1 to Processing
    digitalWrite(ledPin,HIGH);
   
  // Afficher dans le 
   
  } else {                               // If the switch is not ON,
//      Serial.print(0, BYTE);               // send 0 to Processing
      digitalWrite(ledPin,LOW);       
  }
  delay(100);                            // Wait 100 milliseconds
}



