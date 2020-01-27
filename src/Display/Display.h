/*
  Display.h - Class responsible of controlling the display
  
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

#include "SSD1306.h"                         // https://github.com/ThingPulse/esp8266-oled-ssd1306
#include "OLEDDisplayUi.h"                   // https://github.com/ThingPulse/esp8266-oled-ssd1306


void displayInit();
void displayUpdate();
void displayShowWaitingMqttConnection();

extern unsigned int packetsSent;


  
