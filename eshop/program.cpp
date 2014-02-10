#include <stdio.h>
#include <string.h>

#include "zbozi.h"
#include "tricko.h"
#include "boty.h"
#include "kosik.h"

int main() {
  Zbozi* t = new Tricko("Adidas Fashion", "XXL",120);
  Zbozi* b = new Boty("Puma",42,"p nsk‚",52);
  Zbozi* u = new Tricko("Hugo Boss", "M",220);

  Kosik* kosik = new Kosik();
  kosik->pridej(t);
  kosik->pridej(b);
  kosik->pridej(u);
  kosik->vypis();

  getchar();
}
