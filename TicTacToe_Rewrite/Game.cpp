#include <stdint.h>
#include "Game.h"

const unsigned char Game::logoImage[] PROGMEM = {
  0x38, 0x48, 0x88, 0x8, 0x4, 0x2, 0x1, 0xc1, 0x1, 0x1, 0x1, 0x2, 0x4, 0x38, 0x20, 0x20, 0x10, 0x70, 0x40, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xc7, 
  0xc7, 0xc7, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x7, 0x3f, 0x7f, 0xf8, 0xf0, 0xf8, 0x7f, 0x3f, 0x7, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x7, 0x7, 0x7, 0x7, 0x7, 0x7, 
  0x7, 0x7, 0x7, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xc7, 0xc7, 0xc7, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xc7, 0xc7, 0xc7, 0xc7, 0xc7, 0xc7, 0x00, 0x00, 
  0x00, 0xff, 0xff, 0xff, 0x7, 0x7, 0xf, 0x3c, 0x38, 0x3c, 0xf, 0x7, 0x7, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x1, 0xd, 0x3a, 0xc2, 0x80, 0x40, 0x80, 0x00, 0x80, 0x80, 0x40, 
  0x20, 0x10, 0x8, 0x8, 0x4, 0x3, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xc0, 0xc0, 0xc0, 0xc7, 0xc7, 0xc7, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x1, 0x1, 0x1, 0xff, 0xff, 0xff, 
  0x00, 0x00, 0x00, 0xc1, 0xc1, 0xc1, 0xc1, 0xc1, 0xc1, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 
  0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1, 0x1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1, 0x1, 
  0x1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1, 0x1, 0x1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 
  0x1, 0x1, 0x1, 0x00, 0x00, 0x00, 0x1, 0x1, 0x1, 0x00, 0x00, 0x00, 0x1, 0x1, 0x1, 0x00, 0x00, 0x00, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x00, 0x00, 0x00, 0x1, 0x1, 
  0x1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1, 0x1, 0x1, 
};

const unsigned char Game::boardImage[] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0xff, 0xff, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 
  0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0xff, 0xff, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 
  0x18, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0xff, 0xff, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
  0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0xff, 0xff, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  
};

const unsigned char Game::selectorImage[] PROGMEM = {
  0xff, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0xff, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 
};

const unsigned char Game::noughtImage[] PROGMEM = {0xfc, 0xfc, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0xfc, 0xfc, 0x7, 0x7, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x7, 0x7};
const unsigned char Game::crossImage[] PROGMEM = {0x3, 0x3, 0xc, 0xc, 0xb0, 0xf0, 0xe0, 0xf0, 0xb0, 0xc, 0xc, 0x3, 0x3, 0x18, 0x18, 0x6, 0x6, 0x1, 0x1, 0x00, 0x1, 0x1, 0x6, 0x6, 0x18, 0x18};

void Game::drawGridAt(uint16_t x, uint16_t y) {
  arduboy.drawBitmap(x, y, boardImage, 61, 61);
  for(uint8_t yi = 0; yi < 3; ++yi, y += 21) {
    for(uint8_t xi = 0; xi < 3; ++xi, x += 21) {
  
      if(grid[yi][xi] == Cell::Nought)
        arduboy.drawBitmap(x, y, noughtImage, 13, 13);
      else if(grid[yi][xi] == Cell::Cross)
        arduboy.drawBitmap(x, y, crossImage, 13, 13);
          
      if(xi == selector.x && yi == selector.y)
        arduboy.drawBitmap(x, y, selectorImage, 17, 17);
    }
  }
}

void Game::gameSetup() {
  arduboy.boot();
  arduboy.audio.on();
  grid[1][1] = Cell::Cross;

  arduboy.drawBitmap(12, 23, logoImage, 103, 17);
  arduboy.display();

  delay(2500);

  arduboy.clear();
}

void Game::gameLoop() {
  if (!arduboy.nextFrame()) {return;}
  arduboy.pollButtons();
  arduboy.clear();

  if (arduboy.justPressed(RIGHT_BUTTON)) {selector.x++;}
  drawGridAt(64, 1);

  arduboy.display();
}

