/*  
 Test the tft.print() viz embedded tft.write() function

 This sketch used font 2, 4, 7
 
 Make sure all the display driver and pin connections are correct by
 editing the User_Setup.h file in the TFT_eSPI library folder.

 Note that yield() or delay(0) must be called in long duration for/while
 loops to stop the ESP8266 watchdog triggering.

 #########################################################################
 ###### DON'T FORGET TO UPDATE THE User_Setup.h FILE IN THE LIBRARY ######
 #########################################################################
 */


#include <TFT_eSPI.h> // Graphics and font library for ST7735 driver chip
#include <SPI.h>

TFT_eSPI tft = TFT_eSPI();  // Invoke library, pins defined in User_Setup.h

#define TFT_GREY 0x5AEB // New colour

void setup(void) {
  tft.init();
  tft.setRotation(1);
}

//void loop() {
//  
//  // Fill screen with grey so we can see the effect of printing with and without 
//  // a background colour defined
//  tft.fillScreen(TFT_GREY);
//  
//  // Set "cursor" at top left corner of display (0,0) and select font 2
//  // (cursor will move to next line automatically during printing with 'tft.println'
//  //  or stay on the line is there is room for the text with tft.print)
//  // Set the font colour to be white with a black background, set text size multiplier to 1
//  tft.setTextColor(TFT_WHITE,TFT_BLACK);  tft.setTextSize(1);
//  // We can now plot text on screen using the "print" class
//  tft.println("Hello World!");
//  
//  // Set the font colour to be yellow with no background, set to font 7
//  tft.setTextColor(TFT_YELLOW); tft.setTextFont(2);
//  tft.println(1234.56);
//  
//  // Set the font colour to be red with black background, set to font 4
//  tft.setTextColor(TFT_RED,TFT_BLACK);    tft.setTextFont(4);
//  tft.println((long)3735928559, HEX); // Should print DEADBEEF
//
//  // Set the font colour to be green with black background, set to font 2
//  tft.setTextColor(TFT_GREEN,TFT_BLACK);
//  tft.setTextFont(2);
//  tft.println("Groop");
//
//  // Test some print formatting functions
//  float fnumber = 123.45;
//   // Set the font colour to be blue with no background, set to font 2
//  tft.setTextColor(TFT_BLUE);    tft.setTextFont(2);
//  tft.print("Float = "); tft.println(fnumber);           // Print floating point number
//  tft.print("Binary = "); tft.println((int)fnumber, BIN); // Print as integer value in binary
//  tft.print("Hexadecimal = "); tft.println((int)fnumber, HEX); // Print as integer number in Hexadecimal
//
//  while(1) yield(); // We must yield() to stop a watchdog timeout.
//}
//
void loop(){
  tft.fillScreen(TFT_GREY);
  tft.setTextColor(TFT_WHITE,TFT_BLACK);  tft.setTextSize(1);


tft.println("       0       0                        "); 
tft.println("      0 0000000 0           give me     ");
tft.println(".    0    I I    0    .        a        ");                                               
tft.println(" 0   0           0   0    hug please    ");
tft.println("  0000  O     O  0000                   ");
tft.println("     0  .  ^     0           I am       ");
tft.println("     0  i        0    00     extra      ");
tft.println("     0  .        0   ..       sad       ");
tft.println("     0  i        0  00       today      ");
tft.println("     0           0 ..                   ");
tft.println("      0         0000                    ");
tft.println("       000000000                        ");
tft.println("        0     0                         ");
tft.println("     .  0     0  .                      ");
tft.println("      000     000                       ");
tft.println("                                        ");
tft.println("                                        ");


   while(1) yield();
}
