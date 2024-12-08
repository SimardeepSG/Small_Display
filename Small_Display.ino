#include <Wire.h>
#include <U8g2lib.h>

// Constructor for software I2C
U8G2_SSD1306_128X32_UNIVISION_F_SW_I2C u8g2(U8G2_R0, /* clock=*/ 7, /* data=*/ 6, /* reset=*/ U8X8_PIN_NONE);
//the above pins need to be declared correctly otherwise the led board will not register the changes and the microcontroller will not be able to remap the sda and scl pins - i think
//Also found out that the characterization really makes a difference, like Univision or Noname

void setup() {
  Serial.begin(921600);
  u8g2.begin();
  Serial.println("OLED Initialized");
  Wire.begin();
  Serial.println("I2C Scanner");
  for (uint8_t address = 1; address < 127; address++) {
    Wire.beginTransmission(address);
    if (Wire.endTransmission() == 0) {
      Serial.print("Found device at address: 0x");
      Serial.println(address, HEX);
    }
  }
 }

void loop() {
    u8g2.clearBuffer();
//  u8g2.setFont(u8g2_font_ncenB08_tr);
    u8g2.setFontMode(1);	// choose a suitable font
    u8g2.setBitmapMode(1);
    u8g2.setFont(u8g2_font_6x12_tr);
    u8g2.drawStr(0, 27, "U R the Chosen 1");
    u8g2.sendBuffer();
    delay(1000);
}

// code for Arduino Uno

// #include <Arduino.h>
// #include <U8g2lib.h>
// #include <SPI.h>
// #include <Wire.h>

// U8G2_SSD1306_128X32_UNIVISION_F_SW_I2C u8g2(U8G2_R0, /* clock=*/ SCL, /* data=*/ SDA, /* reset=*/ U8X8_PIN_NONE);   // Adafruit Feather ESP8266/32u4 Boards + FeatherWing OLED




// void setup(void) {
//   Serial.begin(9600);
//     u8g2.begin();
// }



// void loop(void) {
//   u8g2.clearBuffer();					// clear the internal memory
//   u8g2.setFontMode(1);	// choose a suitable font
//    u8g2.setBitmapMode(1);
//    u8g2.setFont(u8g2_font_6x12_tr);
//   u8g2.drawStr(28,10,"name name word");	// write something to the internal memory
//   u8g2.sendBuffer();					// transfer internal memory to the display
//   delay(1000);  
// }




