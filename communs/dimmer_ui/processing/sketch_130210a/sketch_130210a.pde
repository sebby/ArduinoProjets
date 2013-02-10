/* With and without tick marks and snap-to-tick behavior.
*
* find a list of public methods available for the Slider Controller
* at the bottom of this sketch.
*
* by Andreas Schlegel, 2012
* www.sojamo.de/libraries/controlp5
*
*/
// Importer les libraries
import controlP5.*;
import processing.serial.*;
 
// instances
ControlP5 cp5;
Serial port;

// Variables
int myColor = color(0,0,0);
int sliderValue = 20;

void setup(){
  size(400,300);
  noStroke();
  cp5 = new ControlP5(this);
   // add a horizontal sliders, the value of this slider will be linked
  // to variable 'sliderValue' 
  cp5.addSlider("sliderValue")
     .setPosition(50,50)
     .setRange(0,255)
     .setSize(width-150,20)
     ;
     
     
     
  println("Available serial ports:");
 println(Serial.list());
 
 // Uses the first port in this list (number 0).  Change this to
 // select the port corresponding to your Arduino board.  The last
 // parameter (e.g. 9600) is the speed of the communication.  It
 // has to correspond to the value passed to Serial.begin() in your
 // Arduino sketch.
 port = new Serial(this, Serial.list()[0], 9600);    
     
     
}

void draw(){
  fill(sliderValue);
  rect(0,0,width,height);
  port.write(sliderValue);
  
}
