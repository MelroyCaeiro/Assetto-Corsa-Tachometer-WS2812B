#define FASTLED_ALLOW_INTERRUPTS 0
#include <FastLED.h>

#define LED_PIN     13
//#define CLOCK_PIN 4 
#define NUM_LEDS    12
#define LED_TYPE    WS2812B
#define COLOR_ORDER GRB
#define BRIGHTNESS  50

CRGB leds[NUM_LEDS];

//#define ONBOARD_LED  2

void setup() {
  Serial.begin(115200);
  Serial.setTimeout(1);
  //pinMode(ONBOARD_LED,OUTPUT);
  LEDS.addLeds<LED_TYPE, LED_PIN, COLOR_ORDER>(leds, NUM_LEDS);
  FastLED.setBrightness(BRIGHTNESS);
}

void loop() {
  while (!Serial.available());

  String a = Serial.readString();
  int b = a.toInt();
  
  int lednumInt = b*NUM_LEDS/100;

  if(b>=75)
  {
    fill_solid(leds, 4, CRGB(0, 255, 0));
    fill_solid(leds+4, 4, CRGB(255, 0, 0));
    fill_solid(leds+8, lednumInt-8, CRGB(0, 0, 255));
  }
  else if(b>=42)
  {
    fill_solid(leds, 4, CRGB(0, 255, 0));
    fill_solid(leds+4, lednumInt-4, CRGB(255, 0, 0));
  }
  else if(b>10)
  {
    fill_solid(leds, lednumInt, CRGB(0, 255, 0));
  }
  else
  {
    fill_solid(leds, NUM_LEDS, CRGB(0, 0, 0));
  }
  
  FastLED.show();
  
  //Serial.println(x);
}
