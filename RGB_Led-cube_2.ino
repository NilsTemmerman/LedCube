

#include <Adafruit_NeoPixel.h> // De folder Adafruit_NeoPixel uit de bibliotheek aanspreken


/* 
/  Eerste laag;
/  
/  0 ,1 ,2 ,3 ,4
/  5 ,6 ,7 ,8 ,9
/  10,11,12,13,14
/  15,16,17,18,19
/  20,21,22,23,24
/*


/* 3 parameters of argumenten ;
/  Parameter 1 = Nummer van het aantal rgb leds op de strip
/  Parameter 2 = pin nummer
/  Parameter 3 = pixel type flags, add together as needed:

/    NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
/    NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
/    NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
/    NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
*/ 
#define PIN 5
int defineAlles[]=
{
  0  ,1  ,2  ,3  ,4  ,5  ,6  ,7  ,8  ,9  ,10 ,11 ,12 ,13 ,14 ,15 ,16 ,17 ,18 ,19 ,20 ,21 ,22 ,23 ,24 ,
  25 ,26 ,27 ,28 ,29 ,30 ,31 ,32 ,33 ,34 ,35 ,36 ,37 ,38 ,39 ,40 ,41 ,42 ,43 ,44 ,45 ,46 ,47 ,48 ,49 ,
  50 ,51 ,52 ,53 ,54 ,55 ,56 ,57 ,58 ,59 ,60 ,61 ,62 ,63 ,64 ,65 ,66 ,67 ,68 ,69 ,70 ,71 ,72 ,73 ,74 ,
  75 ,76 ,77 ,78 ,79 ,80 ,81 ,82 ,83 ,84 ,85 ,86 ,87 ,88 ,89 ,90 ,91 ,92 ,93 ,94 ,95 ,96 ,97 ,98 ,99 ,
  100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124
};
int kubusGroot[]=
{
  0  ,1  ,2  ,3  ,4  ,5  ,9  ,10 ,14 ,15 ,19 ,20 ,21 ,22 ,23 ,24 ,
  25 ,29 ,45 ,49 ,
  50 ,54 ,70 ,74 ,
  75 ,79 ,95 ,99 ,
  100,101,102,103,104,105,109,110,114,115,119,120,121,122,123,124
};
int kubusKlein[]=
{
  31 ,32 ,33 ,36 ,38 ,41 ,42 ,43 ,
  56 ,58 ,66 ,68 ,
  81 ,82, 83, 86 ,88 ,91 ,92 ,93
};

int x = 125 ;

Adafruit_NeoPixel strip = Adafruit_NeoPixel(125, PIN, NEO_GRB + NEO_KHZ800);   



void setup() 
{

strip.begin();            // We spreken de strip leds aan.

strip.setBrightness(255); // Hier kan de helderheid van de leds veranderd worden. (0-255)

strip.show();             // Hier worden te leds getoond.

}

void loop() 
{

for (int i=0; i<44;i++){
  
strip.setPixelColor(kubusGroot[i] , 255, 255, 255);
}
for (int i=0; i<20;i++){
strip.setPixelColor(kubusKlein[i] , 0, 0, 0);  
}
strip.setPixelColor(62 , 0, 0, 0);  
strip.show();

delay(x);


for (int i=0; i<20;i++){
strip.setPixelColor(kubusKlein[i] , 255, 255, 255);
}
for (int i=0; i<44;i++){
strip.setPixelColor(kubusGroot[i] , 0, 0, 0); 
}
strip.setPixelColor(62 , 0, 0, 0); 
strip.show();

delay(x);


for (int i=0; i<20;i++){
strip.setPixelColor(kubusKlein[i] , 0, 0, 0);
}
for (int i=0; i<44;i++){
strip.setPixelColor(kubusGroot[i] , 0, 0, 0); 
}
strip.setPixelColor(62 , 255, 255, 255); 
strip.show();

delay(x);


for (int i=0; i<20;i++){
strip.setPixelColor(kubusKlein[i] , 255, 255, 255);
}
for (int i=0; i<44;i++){
strip.setPixelColor(kubusGroot[i] , 0, 0, 0); 
}
strip.setPixelColor(62 , 0, 0, 0); 
strip.show();

delay(x);

}
