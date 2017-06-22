#pragma once
#include "Weganin.h"



class Cukrzyk: public Weganin
{



public:
/*int wzyskl;
int czasl;
double zysk;*/
 Cukrzyk(int=1,int=1);
  ~Cukrzyk();
   void wczytaj();//wczytuje menu
    void Zadaj();//u¿ytkownik wybiera danie
   // void Czas();//sprawdza czy jest czas
 void Licz_zysk();//Podlicza wszystkie zyski z obiadu
};
