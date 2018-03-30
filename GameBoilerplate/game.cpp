#include <stdint.h>
#include "game.h"

// Functions
void Game::gameBoot() {
  arduboy.boot(); // So I can use my custom splash
  arduboy.audio.begin(); // Begin audio
  arduboy.audio.on(); // Begin audio for emulator (REMOVE ON PUBLICATION OF REGULAR MODE)

  arSound.tone(200, 150, 300, 150, 250, 200);
  arduboy.drawBitmap(12, 23, splash, 103, 17);
  arduboy.display();
  
  delay(1500);

  arduboy.clear();
}

void Game::gameLoop() {
  if (!arduboy.nextFrame()) {return;}
  arduboy.pollButtons();
  
  arduboy.clear();

  arduboy.print("Placeholder.");
  
  Serial.write(arduboy.getBuffer(), 128 * 64 / 8);
  arduboy.display();
}

// Images
const unsigned char Game::splash[] PROGMEM = {
  0x38, 0x48, 0x88, 0x8, 0x4, 0x2, 0x1, 0xc1, 0x1, 0x1, 0x1, 0x2, 0x4, 0x38, 0x20, 0x20, 0x10, 0x70, 0x40, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xc7, 0xc7, 0xc7, 0xff, 
  0xff, 0xff, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xc0, 0xc0, 0xc0, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x7, 0x7, 0x7, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x00, 0x00, 
  0x00, 0xff, 0xff, 0xff, 0xc7, 0xc7, 0xc7, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xc7, 0xc7, 0xc7, 0xc7, 0xc7, 0xc7, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x7, 0x3f, 0x3f, 
  0xf8, 0xc0, 0xf8, 0x3f, 0x3f, 0x7, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x1, 0xd, 0x7a, 0x82, 0x00, 0x80, 0x80, 0x00, 0x80, 0x80, 0x40, 0x20, 0x10, 0x8, 0x8, 0x4, 0x3, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0xff, 0xff, 0xff, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x00, 0x00, 0x00, 0x1, 0x1, 0x1, 0xff, 0xff, 0xff, 0x1, 0x1, 0x1, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xc0, 0xc0, 0xc0, 0xc3,
  0xc3, 0xc3, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x1, 0x1, 0x1, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0xc1, 0xc1, 0xc1, 0xc1, 0xc1, 0xc1, 0xff, 0xff, 0xff, 0x00, 0x00, 
  0x00, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x1, 0x1, 0x1, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1, 0x1, 0x00, 0x1, 0x1, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1, 0x1, 0x1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1, 0x1, 0x1, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x00, 0x00, 0x00, 0x1, 0x1, 0x1, 0x00, 0x00, 0x00, 0x1, 0x1, 0x1, 0x00, 0x00, 0x00, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 
  0x1, 0x1, 0x00, 0x00, 0x00, 0x1, 0x1, 0x1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1, 0x1, 0x1
};

