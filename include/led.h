//* include/led.h

#ifndef LED_H
#define LED_H

#include <Arduino.h>

class Led
{
private:
    //* Atributos = Variaveis.
    uint8_t _pinLed;
    bool _estadoLed = 0;
    uint32_t _tempoAcaoAnterior_ms = 0;
    bool _estaPiscando = false;
    uint32_t _tempoEsperaAlternar_ms = 0;

public:
    //* Metodos = Funções.
    //? O método construtor é obrigatório.
    //? Regra: O construtor tem que ter o mesmo nome da classe.
    Led(uint8_t pin);

    void iniciar();
    void atualizar();
    void ligar();
    void desligar();
    void ativarPiscar(uint32_t tempoEspera_ms = 500);
    void desativarPiscar();
    void alternar();

    uint8_t getpinLed();
    void setEstadoLed(bool estado);
};

#endif