# Small_Display
Using the XIAO ESP32-C3 with a 0.91" Display Module

For this module there are a few notes: 


In order to get the device functioning I used the following video and written tutorials to get a general gist of how to operate and go about the project that you may also find helpful:
Resource: https://www.youtube.com/watch?v=EVMXTBBCO3A
Resource 2: https://forum.seeedstudio.com/t/about-using-hardware-i2c-of-xiao-esp32c3/267751

One of the videos mentioned a display editor that may also be useful in creating custom patterns: 
Display Editor: https://lopaka.app/sandbox

I got this display from Amazon which cost me 20$ for a pack of 10 which is not bad: 

https://www.amazon.com/dp/B0B53355JW?ref=ppx_yo2ov_dt_b_fed_asin_title&th=1
10 Pieces I2C Display Module 0.91 Inch I2C OLED Display Module I2C OLED Screen Driver DC 3.3V~5V 4PINS for Arduino ESP32 ESP8266 AVR PIC STM32 for Raspberry pi (White Color)

Specs: 

About this item
❃❃ for Arduino, ESP8266, ESP32, STM32, etc; 3.35v Power; Operating temperature:-40 - 85 ℃; Resolution: 128 x 32
❃❃ The display performance is better than the traditional LCD display, it uses the very common I2C bus, and runs on the display driver, also lower consumption; IIC (I2C communications) simplifies connections.
❃❃ OLED display, no need backlight, self-illumination, the display performance is better than the traditional LCD display, also lower consumption.
❃❃ Driver IC: SSD1306
❃❃ this i2c oled display module is compatible with Raspberry Pi 4B/3B+/3B/2B/Zero, compatible with Arduino, also compatible with ESP8266, ESP32, STM32, etc.
❃❃You will get 10pcs I2C OLED Display Module 0.91 Inch I2C SSD1306 OLED Display Module Blue I2C OLED Screen Driver DC 3.3V~5V



Errors: 

Sometimes on the ESP I get an error in the arduino IDE that "No serial data received. Failed uploading: uploading error: exit status 2"

In order to counter that error you can use the following link: 

Unresponsive potential Errors: https://forum.seeedstudio.com/t/help-a-fatal-error-occurred-no-serial-data-received-failed-uploading-uploading-error-exit-status-2/273628/4