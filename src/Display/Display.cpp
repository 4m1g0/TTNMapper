/*
  Display.cpp - Class responsible of controlling the display
  
  Copyright (C) 2020 @G4lile0, @gmag12 and @dev_4m1g0

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#include "Display.h"
#include "graphics.h"

SSD1306* display;
OLEDDisplayUi* ui;

void drawFrame1(OLEDDisplay *display, OLEDDisplayUiState* state, int16_t x, int16_t y);
void drawFrame2(OLEDDisplay *display, OLEDDisplayUiState* state, int16_t x, int16_t y);

uint8_t frameCount = 2;
FrameCallback frames[] = { drawFrame1, drawFrame2 };

unsigned long tick_interval;
int tick_timing = 100;
int graphVal = 1;
int delta = 1;

void displayInit(){
  display = new SSD1306(0x3c, 4, 15);

  ui = new OLEDDisplayUi(display);
  
  ui->setTargetFPS(60);
  ui->setActiveSymbol(activeSymbol);
  ui->setInactiveSymbol(inactiveSymbol);
  ui->setIndicatorPosition(BOTTOM);
  ui->setIndicatorDirection(LEFT_RIGHT);
  ui->setFrameAnimation(SLIDE_LEFT);
  ui->setFrames(frames, frameCount);
  ui->init();
  display->flipScreenVertically();

  pinMode(16,OUTPUT);
  digitalWrite(16, LOW);     
  delay(50);
  digitalWrite(16, HIGH);
}

void drawFrame1(OLEDDisplay *display, OLEDDisplayUiState* state, int16_t x, int16_t y) {
  display->drawXbm(x+45, y, ttn_width, ttn_height, ttnLogo);
  display->setFont(ArialMT_Plain_10);
  display->setTextAlignment(TEXT_ALIGN_CENTER);
  display->drawString( x+65, y + 47, "TTN MAPPER");
}


void drawFrame2(OLEDDisplay *display, OLEDDisplayUiState* state, int16_t x, int16_t y) {
  display->setTextAlignment(TEXT_ALIGN_LEFT);
  display->setFont(ArialMT_Plain_16);
  display->drawString(0 + x,  10 + y, "Packets sent:");
  display->drawString( x,  30 + y, String(packetsSent)  );
}

void displayShowWaitingMqttConnection() {
  display->init();
  display->setTextAlignment(TEXT_ALIGN_LEFT);
  display->drawString(20 ,10 , "Waiting for MQTT"); 
  display->drawString(35 ,24 , "Connection...");
  display->drawString(3 ,38 , "Press PROG butt. or send");
  display->drawString(3 ,52 , "e in serial to reset conf.");
  display->display();
}

void displayUpdate() {
  ui->update();
  // NOTE: After some investigation I don't think it's necesary to manage time budget here, 
  // the update methos will skip frames when necesary without stoping the main thread.

  /*int remainingTimeBudget = ui->update();
  if (remainingTimeBudget > 0) {
    // You can do some work here
    // Don't do stuff if you are below your
    // time budget.
    delay(remainingTimeBudget);
  }*/
}