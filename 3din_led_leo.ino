#include <FastLED_NeoPixel.h>  // libary needed to run x number of leds


#define DATA_PIN A0   // data line for led
#define NUM_LEDS 1    // leds used on this line
#define DATA_PIN1 A1  // data line for led
#define NUM_LEDS1 1   // leds used on this line
#define DATA_PIN1 A2  // data line for led
#define NUM_LEDS1 1   // leds used on this line

Adafruit_NeoPixel strip(NUM_LEDS, DATA_PIN, NEO_GRB);
Adafruit_NeoPixel strip1(NUM_LEDS1, DATA_PIN1, NEO_GRB);
Adafruit_NeoPixel strip2(NUM_LEDS2, DATA_PIN2, NEO_GRB);

int a;  //LED strip                                              // somewere to store led data
int b;  //LED strip2                                              // somewere to store led data
int c;  //LED strip2                                              // somewere to store led data


void setup() {
  strip.begin();              // initialize strip (required!)
  strip1.begin();             // initialize strip1 (required!)
  strip2.begin();             // initialize strip1 (required!)
  strip.setBrightness(255);   // set default ledstrip brightness
  strip1.setBrightness(255);  // set default ledstrip1 brightness
  strip2.setBrightness(255);  // set default ledstrip2 brightness
}

void loop() {
  for (int a = 0; a < 1; a++) {                      // data count for how many leds inline (change to suit how many leds you are using)
    strip.setPixelColor(a, strip.Color(255, 0, 0));  // set STRIP to red
    strip.show();                                    // needed to show changes
  }
  for (int b = 0; b < 1; b++) {                        // data count for how many leds inline (change to suit how many leds you are using)
    strip1.setPixelColor(b, strip1.Color(0, 0, 255));  // set STRIP to blue
    strip1.show();                                     // needed to show changes
  }
  for (int c = 0; c < 1; c++) {                        // data count for how many leds inline (change to suit how many leds you are using)
    strip2.setPixelColor(c, strip2.Color(0, 255, 0));  // set STRIP to green
    strip2.show();                                     // needed to show changes
  }
}
