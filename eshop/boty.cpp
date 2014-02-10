#include <string.h>
#include <stdio.h>
#include "boty.h"


Boty::Boty(const char* _znacka, int _velikost, const char* _typ, int _cena) {
  strcpy(znacka,_znacka);
  velikost = _velikost;
  strcpy(typ,_typ);
  cena = _cena;
}

char* Boty::vratPopis() {
  sprintf(popis,"boty %s %s, vel.%d: %dKŸ", znacka, typ, velikost, cena);
  return popis;
}

int Boty::vratCenu() {
  return cena;
}
