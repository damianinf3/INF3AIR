#pragma once
#include <iostream>
#include <string>
using namespace std;
class Weganin
{
protected:
    string danie1;
    string danie2;
    string danie3;
    string danie4;
    string danie5;



    string czas_przygot1;
    string czas_przygot2;
    string czas_przygot3;
    string czas_przygot4;
    string czas_przygot5;
    string zysk1;
    string zysk2;
    string zysk3;
    string zysk4;
    string zysk5;
    string wzysk;
    string czas;



    int punkt; //1lub 0

    int nr_dan;
int odpowiedz;
int wzyskl;
double zysk;

public:
    /*int nr_dan;
int odpowiedz;
int wzyskl;
double zysk;*/
 friend void proces(Weganin odpowiedz,Weganin wzyskl,Weganin nr_dan,Weganin zysk);

int czasl;
  Weganin(int=1,int=1);
  ~Weganin();
   void wczytaj();//wczytuje menu
    void Zadaj();//u¿ytkownik wybiera danie
   // void Czas();//sprawdza czy jest czas
 void Licz_zysk();//Podlicza wszystkie zyski z obiadu



};
