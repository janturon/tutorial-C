#pragma once
#include "zbozi.h"

struct Boty : Zbozi {
  char znacka[64];
  int velikost;
  char typ[16];
  int cena;

  Boty(const char* _znacka, int _velikost, const char* _typ, int _cena);
  char* vratPopis();
  int vratCenu();

private:
  char popis[100];
};
