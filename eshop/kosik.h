#pragma once
#include "zbozi.h"

struct Kosik {

  Kosik();
  void pridej(Zbozi* polozka);
  void vypis();

private:
  Zbozi* polozky[10];
  int polozek;
};
