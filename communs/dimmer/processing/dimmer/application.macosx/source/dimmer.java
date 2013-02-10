import processing.core.*; 
import processing.data.*; 
import processing.event.*; 
import processing.opengl.*; 

import processing.serial.*; 

import java.util.HashMap; 
import java.util.ArrayList; 
import java.io.BufferedReader; 
import java.io.PrintWriter; 
import java.io.InputStream; 
import java.io.OutputStream; 
import java.io.IOException; 

public class dimmer extends PApplet {

/* Processing code for this example*/
 // Dimmer - sends bytes over a serial port
 // by David A. Mellis
 //This example code is in the public domain.
 
 
 Serial port;
 
 public void setup() {
 size(256, 150);
 
 println("Available serial ports:");
 println(Serial.list());
 
 // Uses the first port in this list (number 0).  Change this to
 // select the port corresponding to your Arduino board.  The last
 // parameter (e.g. 9600) is the speed of the communication.  It
 // has to correspond to the value passed to Serial.begin() in your
 // Arduino sketch.
 port = new Serial(this, Serial.list()[0], 9600);  
 
 // If you know the name of the port used by the Arduino board, you
 // can specify it directly like this.
 //port = new Serial(this, "COM1", 9600);
 }
 
 public void draw() {
 // draw a gradient from black to white
 for (int i = 0; i < width; i++) {
 stroke(i);
 line(i, 0, i, 150);
 }
 
 // write the current X-position of the mouse to the serial port as
 // a single byte
 port.write(mouseX);
 }
 
  static public void main(String[] passedArgs) {
    String[] appletArgs = new String[] { "dimmer" };
    if (passedArgs != null) {
      PApplet.main(concat(appletArgs, passedArgs));
    } else {
      PApplet.main(appletArgs);
    }
  }
}
