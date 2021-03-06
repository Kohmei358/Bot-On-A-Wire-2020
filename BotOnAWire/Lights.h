#ifndef LIGHTS_H
#define LIGHTS_H
#include <Arduino.h>

class Lights{
    private:
        const int lightsPin = 11;
        bool active = false;
        const int frequency = 10; // in Hz
    public:
        void init();
        void off();
        void on();
        void flash();
        
};

#endif
