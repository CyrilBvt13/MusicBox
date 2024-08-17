#include <DYPlayerArduino.h>

// Définir les pins pour les boutons
const int pinPrev = 4;
const int pinPlayPause = 5;
const int pinNext = 6;
const int lowVol = 7;
const int highVol = 8;

// Créer une instance du lecteur DYPlayer
DY::Player player;

// Variable pour suivre l'état de lecture
bool isPlaying = false;

void setup() {
  // Initialiser les pins des boutons comme entrées
  pinMode(pinPrev, INPUT);
  pinMode(pinPlayPause, INPUT);
  pinMode(pinNext, INPUT);
  pinMode(lowVol, INPUT);
  pinMode(highVol, INPUT);

  // Initialiser la communication série
  player.begin();
  delay(100);
  player.setVolume(20); // 30 = 100% Volume
  player.setCycleMode(DY::PlayMode::Sequence);
}

void loop() {
  if (digitalRead(pinPrev) == HIGH) {
    // Commande pour la musique précédente
    player.previous();
    delay(500); // Anti-rebond
  }

  if (digitalRead(pinPlayPause) == HIGH) {
    // Commande pour play/pause
    if (isPlaying) {
      player.pause();
      isPlaying = false;
    } else {
      player.play();
      isPlaying = true;
    }
    delay(500); // Anti-rebond
  }

  if (digitalRead(pinNext) == HIGH) {
    // Commande pour la musique suivante
    player.next();
    delay(500); // Anti-rebond
  }

  if (digitalRead(lowVol) == HIGH) {
    // Commande pour la musique suivante
    player.volumeDecrease();
    delay(500); // Anti-rebond
  }

  if (digitalRead(highVol) == HIGH) {
    // Commande pour la musique suivante
    player.volumeIncrease();
    delay(500); // Anti-rebond
  }
}
