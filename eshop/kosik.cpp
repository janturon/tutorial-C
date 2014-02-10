#include <stdio.h>
#include "kosik.h"


Kosik::Kosik() {
  polozek = 0;
}

void Kosik::pridej(Zbozi* polozka) {
  if(polozek>9) return;
  polozky[polozek] = polozka;
  polozek++;
}

void Kosik::vypis() {
  int celkem = 0;
  puts("Pýidan‚ zbo§¡");
  puts("=============");
  for(int i=0; i<polozek; ++i) {
    puts(polozky[i]->vratPopis());
    celkem+= polozky[i]->vratCenu();
  }
  puts("");
  printf("Celkem: %dKŸ", celkem);
}
