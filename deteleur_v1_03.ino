
/////////////////////////// SERVOS ////////////////////////////
#include <Servo.h>
// Définition des Ag en tant que servo moteurs
Servo Ag1, Ag2, Ag3, Ag4, Ag5, Ag6;
Servo servo;

// Boolean pour les commandes Ag : 0(False) pour Gauche et 1(True) pour Droite
// Peut-être accésoire à cause de la commande par Pos
boolean CAg1, CAg2, CAg3, CAg4, CAg5, CAg6;

// Variable pour indiquer quel angle prendre
// Permet de régler les angles depuis le TCO
int Pos1, Pos2, Pos3, Pos4, Pos5, Pos6;
//////////////////////////////////////////////////////////////




void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);

  pinMode(A0, INPUT_PULLUP);
  pinMode(A1, INPUT_PULLUP);
  pinMode(A2, INPUT_PULLUP);
  pinMode(A3, INPUT_PULLUP);
  pinMode(A4, INPUT_PULLUP);
  pinMode(A5, INPUT_PULLUP);

  CAg1, CAg2, CAg3, CAg4, CAg5, CAg6 = false;

}


