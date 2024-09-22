#include <DYPlayerArduino.h>

// Créer une instance du lecteur DYPlayer
DY::Player player;

void setup() {

  // Initialiser la communication série
  player.begin();
  delay(100);
  player.setVolume(20); // 30 = 100% Volume
  player.setCycleMode(DY::PlayMode::Sequence);

  // Tester la carte son
  player.play()
}
