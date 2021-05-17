/*
03-02-2021
 Test du GROVE 16x2 LCD (black on yellow)
*/

#include <Wire.h>
#include "rgb_lcd.h"

rgb_lcd lcd;

const int colorR = 255;
const int colorG = 0;
const int colorB = 0;

void setup() 
{
    lcd.begin(16, 2);
    lcd.setRGB(colorR, colorG, colorB);
    
}

void loop() 
{
    lcd.print("Test du LCD");
    lcd.setCursor(0, 1);
    lcd.print("Projet SI... Good !");
    delay(1000);
    lcd.clear();
   
}

/*********************************************************************************************************
  END FILE
*********************************************************************************************************/
