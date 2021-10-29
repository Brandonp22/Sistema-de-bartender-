#include <Arduino.h>
#include <Wire.h>
#include <menu.h>
#include <menuIO/serialOut.h>
#include <menuIO/serialIn.h>
#include <menuIO/altKeyIn.h>
#include <menuIO/chainStream.h>
#include <menuIO/u8g2Out.h>

using namespace Menu;

#define SOFT_DEBOUNCE_MS 100
#define MAX_DEPTH 2

// pins for buttons:
#define BTN_SEL 6  // Select button
#define BTN_UP 4 // Up
#define BTN_DOWN 5 // Down

#define fontName u8g2_font_7x13_mf
#define fontX 7
#define fontY 16
#define offsetX 0
#define offsetY 3
#define U8_Width 128
#define U8_Height 64
#define USE_HWI2C

U8G2_SSD1306_128X64_NONAME_1_HW_I2C display(U8G2_R0, U8X8_PIN_NONE, 4, 5);
//U8X8_SSD1306_128X64_NONAME_HW_I2C display(U8X8_PIN_NONE);

// define menu colors --------------------------------------------------------
//each color is in the format:
//  {{disabled normal,disabled selected},{enabled normal,enabled selected, enabled editing}}
// this is a monochromatic color table

// Variables
#define RELE_ON 0
#define RELE_OFF 1
const int bombaCoca = 13;
const int bombaSeven = 12;
const int bombaWhiskey = 11;
const int bombaRon = 10;
#include "Recetas.h";

const colorDef<uint8_t> colors[6] MEMMODE={
  {{0,0},{0,1,1}},//bgColor
  {{1,1},{1,0,0}},//fgColor
  {{1,1},{1,0,0}},//valColor
  {{1,1},{1,0,0}},//unitColor
  {{0,1},{0,0,1}},//cursorColor
  {{1,1},{1,0,0}},//titleColor
};


// EVENTOS
void ronCocaEvent(){
  display.drawStr(0,0,"RON COCA");
  Serial.println("Entro");
  ronCoca();
  Serial.println("Salio");
  return proceed;
  
}

void ronSevenEvent(){
  Serial.println("Entro");
  RonSeven();
  Serial.println("Salio");
  return proceed;
}

void whiskeySourEvent(){
  Serial.println("Entro");
  whiskeySour();
  Serial.println("Salio");
  return proceed;
}

void whiskeyCocaEvent(){
  Serial.println("Entro");
  whiskeyCoca();
  Serial.println("Salio");
  return proceed;
}

void ronEvent(){
  Serial.println("Entro");
  ron();
  Serial.println("Salio");
  return proceed;
}

void whiskeyEvent(){
  Serial.println("Entro");
  whiskey();
  Serial.println("Salio");
  return proceed;
}

void cocaEvent(){
  Serial.println("Entro");
  coca();
  Serial.println("Salio");
  return proceed;
}

void sevenEvent(){
  Serial.println("Entro");
  seven();
  Serial.println("Salio");
  return proceed;
}

MENU(mainMenu,"     CANCHITO",doNothing,noEvent,wrapStyle
  ,OP(" Ron & Coca",ronCocaEvent,enterEvent)
  ,OP(" Ron & Seven",ronSevenEvent,enterEvent)
  ,OP(" Whiskey Sour",whiskeySourEvent,enterEvent)
  ,OP(" Whiskey & Coca",whiskeyCocaEvent,enterEvent)
  ,OP(" Ron",ronEvent,enterEvent)
  ,OP(" Whiskey",whiskeyEvent,enterEvent)
  ,OP(" Coca",cocaEvent,enterEvent)
  ,OP(" Seven",sevenEvent,noEvent)
);

MENU_OUTPUTS(out,MAX_DEPTH
  ,SERIAL_OUT(Serial)
  ,U8G2_OUT(display,colors,fontX,fontY,offsetX,offsetY,{0,0,U8_Width/fontX,U8_Height/fontY}) /* x_offset, y_offset, x_width, y_width*/
);

// define button list and functions:
keyMap btn_map[]={
 {BTN_SEL, defaultNavCodes[enterCmd].ch, INPUT_PULLUP},
 {BTN_UP, defaultNavCodes[upCmd].ch, INPUT_PULLUP},
 {BTN_DOWN, defaultNavCodes[downCmd].ch, INPUT_PULLUP}
};
keyIn<3> btns(btn_map); // 3 buttons

serialIn serial(Serial);
menuIn* inputsList[]={&serial, &btns};
chainStream<2> in(inputsList);//2 is the number of inputs

NAVROOT(nav,mainMenu,MAX_DEPTH,in,out);

void setup() {
  Serial.begin(9600);
  pinMode(bombaCoca, OUTPUT);//Configuro bomba como salida
  pinMode(bombaSeven, OUTPUT);//Configuro bomba como salida
  pinMode(bombaWhiskey, OUTPUT);//Configuro bomba como salida
  pinMode(bombaRon, OUTPUT);//Configuro bomba como salida

  digitalWrite(bombaCoca,RELE_OFF);
  digitalWrite(bombaSeven,RELE_OFF);
  digitalWrite(bombaWhiskey,RELE_OFF);
  digitalWrite(bombaRon,RELE_OFF);
  while(!Serial);
  btns.begin();
  Serial.println("Menu test");
  display.begin();
  display.setFont(fontName);
  display.drawStr(0,0,"Menu test");
  delay(1000);
}

void loop() {
  nav.doInput();
  if (nav.changed(0)) {//only draw if menu changed for gfx device
    //change checking leaves more time for other tasks
    display.firstPage();
    do nav.doOutput(); while(display.nextPage());
  }
}
