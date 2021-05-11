// Biblioteca de tons
#include "notas.h"
#include "Musicas.h"

//Função para o modo freestyle
/* */
void freeStyle(int tom[]);

//Função para o modo aprendizado
void musica();

// Vetor com o valor das portas do arduino referentes as teclas de C(Dó) a B(Si)
int keys[] = {14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};
// Vetor com o valor das portas do arduino referentes aos leds de C(Dó) a B(Si)
int leds[] = {38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
// Vetor das oitavas de um piano (oitava: conjunto de 7 notas e 5 acidentes (sustenidos))
int tones[][13] = {  {NOTE_C1, NOTE_CS1 , NOTE_D1, NOTE_DS1, NOTE_E1, NOTE_F1, NOTE_FS1, NOTE_G1, NOTE_GS1, NOTE_A1, NOTE_AS1, NOTE_B1}
                    ,{NOTE_C2, NOTE_CS2 , NOTE_D2, NOTE_DS2, NOTE_E2, NOTE_F2, NOTE_FS2, NOTE_G2, NOTE_GS2, NOTE_A2, NOTE_AS2, NOTE_B2}
                    ,{NOTE_C3, NOTE_CS3 , NOTE_D3, NOTE_DS3, NOTE_E3, NOTE_F3, NOTE_FS3, NOTE_G3, NOTE_GS3, NOTE_A3, NOTE_AS3, NOTE_B3}
                    ,{NOTE_C4, NOTE_CS4 , NOTE_D4, NOTE_DS4, NOTE_E4, NOTE_F4, NOTE_FS4, NOTE_G4, NOTE_GS4, NOTE_A4, NOTE_AS4, NOTE_B4}
                    ,{NOTE_C5, NOTE_CS5 , NOTE_D5, NOTE_DS5, NOTE_E5, NOTE_F5, NOTE_FS5, NOTE_G5, NOTE_GS5, NOTE_A5, NOTE_AS5, NOTE_B5}
                    ,{NOTE_C6, NOTE_CS6 , NOTE_D6, NOTE_DS6, NOTE_E6, NOTE_F6, NOTE_FS6, NOTE_G6, NOTE_GS6, NOTE_A6, NOTE_AS6, NOTE_B6}
                    ,{NOTE_C7, NOTE_CS7 , NOTE_D7, NOTE_DS7, NOTE_E7, NOTE_F7, NOTE_FS7, NOTE_G7, NOTE_GS7, NOTE_A7, NOTE_AS7, NOTE_B7}}; // melhor tom


//Vetor com a sequência das teclas a serem tocadas no modo aprendizado
int keys_musica[sizeof(ordem)/sizeof(int)];
//Vetor das notas em sequência com seus respectivos tons para o modo aprendizado
int musicas[sizeof(ordem)/sizeof(int)];
//Vetor com a sequencia dos leds a acenderem no modo aprendizado
int leds_musica[sizeof(ordem)/sizeof(int)];

void setup() {
  //Preenchimento dos vetores listados fora do setup (modo aprendizado)
  for(int i = 0; i < (sizeof(ordem)/sizeof(int)); i++){
    keys_musica [i] = keys[ordem[i]];
    musicas[i] = tones[tom[i]-1][ordem[i]];
    leds_musica[i] = leds[ordem[i]];
  }
  
  //SPK: macro que contem a porta do arduino referente ao speaker (definido na biblioteca "musicas.h")
  //Inicializando a porta do buzzer como output para reprodução sonora
  pinMode(SPK, OUTPUT);
  
  //Inicializando as portas das teclas e dos leds
  for(int i = 0; i < 12; i++){
    pinMode(keys[i], INPUT);
    pinMode(leds[i], OUTPUT);
  }
  
  //Ligando o led da primeira tecla a ser tocada (modo aprendizado)
  digitalWrite(leds_musica[0], HIGH);
  
}

void loop() {
  
  //Chamada da função do modo aprendizado
   musica();
  //Chamada da função do modo freestyle
   //freeStyle(tones);
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
  int lastState = LOW, i=0;
  while(digitalRead(keys_musica[i])){
       tone(SPK, musicas[i]);
       digitalWrite(leds_musica[i], LOW);
       delay(200); // debounce
       lastState=HIGH;
     }
     if(lastState==HIGH){
       lastState=LOW;
       noTone(SPK);
       digitalWrite(leds_musica[i+1], HIGH);
       i++;
     }
     if (i > (sizeof(ordem)/sizeof(int))-1){
       i = 0;
       noTone(SPK);
       delay(500);
       for(int p = 0; p < 12; p++){
        digitalWrite(leds[p], HIGH);
        delay(200);
        digitalWrite(leds[p], LOW);
        delay(100);
       }
       digitalWrite(leds_musica[0], HIGH);
     }
}
