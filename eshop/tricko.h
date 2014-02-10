#pragma once
#include "zbozi.h"

struct Tricko : Zbozi {
  char znacka[64];
  char velikost[5];
  int cena;

  Tricko(const char* _znacka, const char* _velikost, int _cena);
  char* vratPopis();
  int vratCenu();

private:
  char popis[100];
};
