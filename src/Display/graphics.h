/*
  graphics.h - Static images to display on the screen
  
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



#define ttn_width 42
#define ttn_height 53
static uint8_t ttnLogo[] PROGMEM = { 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6C, 0x00, 0x00, 0x00, 
  0x00, 0x80, 0xFF, 0x07, 0x00, 0x00, 0x00, 0xE0, 0xFF, 0x0F, 0x00, 0x00, 
  0x00, 0xF0, 0xFF, 0x3F, 0x00, 0x00, 0x00, 0xFC, 0xFF, 0x7F, 0x00, 0x00, 
  0x00, 0xFE, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x01, 0x00, 
  0x00, 0xFF, 0xDF, 0xFF, 0x01, 0x00, 0x80, 0xFF, 0x07, 0xDF, 0x03, 0x00, 
  0x80, 0x7F, 0x03, 0x9E, 0x07, 0x00, 0xC0, 0x3F, 0x00, 0x8C, 0x07, 0x00, 
  0xC0, 0x1F, 0x00, 0x20, 0x07, 0x00, 0xC0, 0x0F, 0x00, 0x40, 0x07, 0x00, 
  0xC0, 0x07, 0x00, 0x80, 0x0F, 0x00, 0xC0, 0x03, 0x00, 0xC0, 0x07, 0x00, 
  0xE0, 0x01, 0x00, 0xC0, 0x0F, 0x00, 0xC0, 0x01, 0x00, 0x80, 0x07, 0x00, 
  0xC0, 0x03, 0x00, 0xC0, 0x07, 0x00, 0xC0, 0x9F, 0xA6, 0xF5, 0x07, 0x00, 
  0x80, 0xFF, 0xFF, 0xFF, 0x07, 0x00, 0x80, 0xFF, 0xFF, 0xFF, 0x03, 0x00, 
  0x80, 0xFF, 0xFF, 0xFF, 0x03, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x01, 0x00, 
  0x00, 0xFF, 0xFF, 0xFF, 0x01, 0x00, 0x00, 0xFE, 0xFF, 0xFF, 0x00, 0x00, 
  0x00, 0xFC, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0xFC, 0xFF, 0x7F, 0x00, 0x00, 
  0x00, 0xF8, 0xFF, 0x3F, 0x00, 0x00, 0x00, 0xF8, 0xFF, 0x3F, 0x00, 0x00, 
  0x00, 0xF0, 0xFF, 0x1F, 0x00, 0x00, 0x00, 0xE0, 0xFF, 0x1F, 0x00, 0x00, 
  0x00, 0xE0, 0xFF, 0x0F, 0x00, 0x00, 0x00, 0xC0, 0xFF, 0x07, 0x00, 0x00, 
  0x00, 0x80, 0xFF, 0x33, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x33, 0x00, 0x00, 
  0x00, 0x00, 0xFE, 0x31, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x20, 0x00, 0x00, 
  0x00, 0x00, 0x7C, 0x60, 0x00, 0x00, 0x48, 0x00, 0x38, 0x60, 0x00, 0x00, 
  0x00, 0x14, 0x30, 0x60, 0x00, 0x00, 0x00, 0x60, 0x00, 0x60, 0x00, 0x00, 
  0x00, 0x80, 0xD9, 0xF5, 0x55, 0x01, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 
  0x00, 0x00, 0x03, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x02, 0xC0, 0x00, 0x00, 
  0x00, 0x00, 0x02, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x01, 0x00, 
  0x00, 0x80, 0x01, 0x80, 0x01, 0x00, 0x00, 0x80, 0x01, 0xC0, 0x01, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};


  
const uint8_t activeSymbol[] PROGMEM = {
    B00000000,
    B00000000,
    B00011000,
    B00100100,
    B01000010,
    B01000010,
    B00100100,
    B00011000
};

const uint8_t inactiveSymbol[] PROGMEM = {
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00011000,
    B00011000,
    B00000000,
    B00000000
};
