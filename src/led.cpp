//? src/led.cpp

#include "led.h"

Led::Led(int pin)
{
    _pinLed = pin;
}

void Led::ligar()
{
    _estadoLed = HIGH;
}

void Led::desligar()
{
    _estadoLed = LOW;
}

void Led::ativarPiscar(uint32_t tempoEspera)
{
    _estaPiscando = true;
    _tempoEsperaAlternar_ms = tempoEspera;
}

void Led::iniciar()
{
    pinMode(_pinLed, OUTPUT);
    digitalWrite(_pinLed, LOW);
}

void Led::atualizar()
{
    digitalWrite(_pinLed, _estadoLed);
}

void Led::alternar()
{
    _estadoLed = !_estadoLed;
}