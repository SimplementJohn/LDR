#ifndef LDR_H
#define LDR_H


#include <Arduino.h>

#define ALLUME      HIGH
#define ETEINDRE    LOW


#define ENTREE INPUT
#define SORTIE OUTPUT

#define LDR 39
#define BPS 9600
#define VALEUR_LDR_MAX 4095

//PARAMETRAGE LED
#define LED_ROUGE   16
#define LED_VERTE   5
#define LED_ORANGE  17

//MLI
#define channelRouge 0
#define channelOrange 1
#define channelVert 2

void initialiserLDR(void);
void initialiserMLI(void);

#endif 

