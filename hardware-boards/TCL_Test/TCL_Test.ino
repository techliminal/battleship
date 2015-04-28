/* 
  Battleship Board and Lights controller prototype.
  
  For lighting, using demo code from https://bitbucket.org/devries/arduino-tcl
  
  Switches are multiplexed.
*/

#include <SPI.h>
#include <TCL.h>

const int numPixels = 18;


void setup() {
  TCL.setupDeveloperShield();
  TCL.begin();
 
}

void loop() {
    TCL.sendEmptyFrame();
    for (int i = 0; i<numPixels/3; i++){
      TCL.sendColor(0xff,0x00,0x00);
      TCL.sendColor(0xff,0x60,0x00);
      TCL.sendColor(0xff,0xb0,0x00);
      TCL.sendColor(0x00,0x80,0x00);
      TCL.sendColor(0x00,0x00,0xff);
      TCL.sendColor(0x66,0x00,0xff);
    }    
    TCL.sendEmptyFrame();
    delay(1000);
}
