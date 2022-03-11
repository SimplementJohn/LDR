#include <Arduino.h>
#include "ldr.h"

uint16_t valeurLDR;                                  //Création d'une variable de 16bits pour qu'elle puisse stocker des valeurs de 0 à 4095


void setup() {
  initialiserLDR(); //Initialiser le capteur, dortie, entrée et le baudrate
  initialiserMLI(); //Initialiser le fonctionementMLI
}

void loop() {
valeurLDR = analogRead(LDR);                        //On lis la valeur du capteur et on l'affecte à une Variable
Serial.print("La valeur du capteur LDR est de: ");  //Moniteur serie valeur du Capteur LDR
Serial.println( valeurLDR);                         //Moniteur serie valeur du Capteur LDR
ledcWrite(channelRouge,VALEUR_LDR_MAX - valeurLDR); //eclairer la led quand le capteur détecteras de lumiere
ledcWrite(channelOrange,valeurLDR);                 //eclairer la led quand le capteur ne détecteras pas de lumiere
ledcWrite(channelVert,VALEUR_LDR_MAX - valeurLDR);  //eclairer la led quand le capteur détecteras de lumiere
}