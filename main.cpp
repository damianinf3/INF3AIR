#include <iostream>
#include<string>
#include "Weganin.h"
#include "Miesozerca.h"
#include "Cukrzyk.h"
#include "Paragon.h"
#include "Zarobek.h"
#include "Statystyka.h"

using namespace std;


    void proces(Weganin odpowiedz,Weganin wzyskl,Weganin nr_dan,Weganin zysk)
    {


int wybor,liczba,i;
int sumacen=0;
int sumaczasu=0;
double sumazysk=0;
double sumanap=0;
double zarobek=0;
double sredni_czas=0;
int x=0,y=0,z=0;
int t=0;
cout<<"Witamy w naszej Malej restauracji podaj liczbe klientow"<<endl;
cin>>liczba;


    for(i=1;i<=liczba;i++){


cout<<"Na co masz ochote- podaj numer."<<endl;
cout<<"1.Dania miesne"<<endl;
cout<<"2.Dania wegetarianskie"<<endl;
cout<<"3.Desery"<<endl;
cin>>wybor;



    if(wybor==1)
    {

        cout<<"Wybierz danie"<<endl;
    Miesozerca w[liczba+1];
w[i].nr_dan=1;
w[i].wczytaj();
w[i].Zadaj();
w[i].Licz_zysk();
//int wzyskl;
//wzysk1=atoi(wzysk.c_str());
sumacen+=w[i].wzyskl;
sumaczasu+=w[i].czasl;
sumazysk+=w[i].zysk;
x++;
    }

if(wybor==2)
{

   Weganin w[liczba+1];

w[i].wczytaj();
w[i].Zadaj();
w[i].Licz_zysk();
sumacen+=w[i].wzyskl;
sumaczasu+=w[i].czasl;
sumazysk+=w[i].zysk;
y++;

}
if(wybor==3)
{

  Cukrzyk w[liczba+1];
w[i].nr_dan=1;
w[i].wczytaj();
w[i].Zadaj();
w[i].Licz_zysk();
sumacen+=w[i].wzyskl;
sumaczasu+=w[i].czasl;
sumazysk+=w[i].zysk;
z++;
}



Zarobek w[liczba+1];
w[i].Napiwek();
sumanap=w[i].b;
zarobek=sumanap+sumazysk;


    }
cout<<"Zysk z dan wynosi: "<<sumazysk<<"zl"<<endl;
cout<<"Twoj zarobek to: "<<zarobek<<"zl"<<endl;

cout<<"Do zaplacenia razem "<<sumacen<<"zl"<<endl;
cout<<"Laczny czas : "<<sumaczasu<<"min"<<endl;


t=x+y+z;
sredni_czas=sumaczasu/liczba;



Paragon w1;
w1.sum_cena=sumacen;
w1.sr_czas=sredni_czas;
w1.Druk_paragon();







Statystyka p1;
p1.wybm=x;
p1.wybw=y;
p1.wybd=z;
p1.s=t;
p1.Popularne_D();


}








  int main()
{
    Weganin odpowiedz1=0;
    Weganin wzyskl1=0;
    Weganin nr_dan1=0;
    Weganin zysk1=0;
    proces(odpowiedz1,wzyskl1,nr_dan1,zysk1);
cout<<"Drukowanie paragonu"<<endl;


      return 0;
}
