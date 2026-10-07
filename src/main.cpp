#include <Arduino.h>
#include "led.h"

Led ledVermelho(5);
Led ledAmarelo(7);
Led ledVerde(16);
Led ledBranco(18);

void setup()
{
  ledVermelho.iniciar();
  ledVermelho.ativarPiscar();

  ledAmarelo.iniciar();
  ledAmarelo.ativarPiscar();

  ledVerde.iniciar();
  ledVerde.ativarPiscar();

  ledBranco.iniciar();
  ledBranco.ativarPiscar();
}

void loop()
{
  ledVermelho.atualizar();
  ledAmarelo.atualizar();
  ledVerde.atualizar();
  ledBranco.atualizar();
}
