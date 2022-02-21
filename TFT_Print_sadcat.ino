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

#define TFT_GREY 0x5AEB // New color

void setup(void) {
  tft.init();
  tft.setRotation(1);
}

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
