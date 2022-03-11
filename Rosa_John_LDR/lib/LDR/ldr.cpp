#include  <Arduino.h>
#include "LDR.h"



void initialiserLDR(){

    pinMode(LDR,ENTREE);
    Serial.begin(BPS);
    Serial.println("SETUP OK");                //Signal sur le moniteur serie du bon fonctionement de la fonction
    
}

void initialiserMLI(){

ledcAttachPin(LED_ROUGE,channelRouge);         //On attache la led rouge au channel rouge
ledcSetup(channelRouge, 500, 12);             //On fixe la frequence de la led et la résolution

ledcAttachPin(LED_ORANGE,channelOrange);       //On attache la led Orange au channel Orange
ledcSetup(channelOrange, 500, 12);             //On fixe la frequence de la led et la résolution

ledcAttachPin(LED_VERTE,channelVert);         //On attache la led Verte au channel Verte
ledcSetup(channelVert, 500, 12);             //On fixe la frequence de la led et la résolution

Serial.println("MLI OK");                //Signal sur le moniteur serie du bon fonctionement de la fonction
     
}
