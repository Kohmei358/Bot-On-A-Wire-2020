#include "DirectionalSound.h"
#include <Arduino.h>

void DirectionalSound::init(){
    pinMode(PWMOutPin, OUTPUT);
    pinMode(AudioIn, INPUT);
    TCCR1A = 0xA8;
    TCCR1B = 0x11;
    ICR1 = 400;
    OCR2A = 0;
}
void DirectionalSound::update(){
   OCR2A =  map(analogRead(AudioIn),0,1023,0,400);
}
