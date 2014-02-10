#include "tricko.h"
#include <string.h>
#include <stdio.h>

Tricko::Tricko(const char* _znacka, const char* _velikost, int _cena) {
  strcpy(znacka,_znacka);
  strcpy(velikost,_velikost);
  cena = _cena;
}

char* Tricko::vratPopis() {
  sprintf(popis,"triüko %s, %s: %dKü", znacka, velikost, cena);
  return popis;
}

int Tricko::vratCenu() {
  return cena;
}
