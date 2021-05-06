// Biblioteca de tons
#include "notas.h"
#include "Musicas.h"

void freeStyle(int n);
void musica();

int keys[] = {14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};
int leds[] = {38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
int tones[] = {NOTE_C4, NOTE_CS4 , NOTE_D4, NOTE_DS4, NOTE_E4, NOTE_F4, NOTE_FS4, NOTE_G4, NOTE_GS4, NOTE_A4, NOTE_AS4, NOTE_B4}; // melhor tom
// int ordem[] = {C, D, E, F_, F_, F_, C, D, C, D, D, D, C, G, F_, E, E, E, C, D, E, F_, F_, F_}; // pegar o tamanho desse vetor

int keys_musica[sizeof(ordem)/sizeof(int)];
int musicas[sizeof(ordem)/sizeof(int)];
int leds_musica[sizeof(ordem)/sizeof(int)];

void setup() {
  for(int i=0;i<(sizeof(ordem)/sizeof(int)); i++){
    keys_musica [i] = keys[ordem[i]];
    musicas[i] = tones[ordem[i]];
    leds_musica[i] = leds[ordem[i]];
  }
  pinMode(SPK, OUTPUT);
  for(int i=0; i<12; i++){
    pinMode(keys[i], INPUT);
    pinMode(leds[i], OUTPUT);
  }
  for (int k = 30; k < 35; k++){
    pinMode(k, INPUT);
  }
//  Serial.begin(9600);
  digitalWrite(leds_musica[0], HIGH);
  
}
int i = 0;
void loop() {
  
  musica();

}

void freeStyle(int tom[]){
   int lastState = LOW;
   for(int i=0; i<12; i++){
     while(digitalRead(keys[i])==HIGH){
       tone(SPK, tom[i]);
       digitalWrite(leds[i], HIGH);
       delay(200); // debounce
       lastState=HIGH;
       
     }
     if(lastState==HIGH){
       lastState=LOW;
       noTone(SPK);
       digitalWrite(leds[i], LOW);
    }
  }
}
void musica(){
   if (digitalRead(keys_musica[i])){
    tone(SPK, musicas[i]);
    digitalWrite(leds_musica[i], LOW);
    delay(500);
    i++;
    noTone(SPK);
    if (i > (sizeof(ordem)/sizeof(int))-1){
      i = 0;
    }
    digitalWrite(leds_musica[i], HIGH);
    delay(200);
  }
  
}
