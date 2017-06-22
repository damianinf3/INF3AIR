#include <iostream>
#include "Menu.h"//' oznacza szukaj l=pliku w folderze z projektu
#include <fstream>//korzystanie z pliku tekstowego
#include <cstdlib>//uzycie funkcji exit

using namespace std;

void Zamowienie::wczytaj()
{
    fstream plik;//wspolpraca z plikeim tekstowym zajecia 7 c++
        plik.open("Menu.txt",ios::in);//in jest metoda klasy ios ::-operator zasiegu
        if (plik.good()==false)
        {
            cout<<"Nie udalo sie otworzyc pliku";
            exit(0);
        }
        int nr_linii=(nr_zam-1)*3+1;
        int aktualny_nr=1;
        string linia,typ;
        int wartosc;
if(typ==miesozerca){
        while(getline(plik,linia))//czytajace z pliku jedna linie
        {
            if(aktualny_nr==nr_linii) danie=linia;
            if(aktualny_nr==nr_linii+1) nr_zam=linia;
            if(aktualny_nr==nr_linii+2) czas_przygot=linia;
                if(aktualny_nr==nr_linii+3) zysk=linia;
      aktualny_nr++;
        }
         }

         if(typ==weganin)
         {


             while(getline(plik,linia))//czytajace z pliku jedna linie
        {
            if(aktualny_nr==nr_linii) danie=linia;
            if(aktualny_nr==nr_linii+1) nr_zam=linia;
            if(aktualny_nr==nr_linii+2) czas_przygot=linia;
                if(aktualny_nr==nr_linii+3) zysk=linia;

                      aktualny_nr++;
        }
         }
         if(typ==cukrzyk)
{

                 while(getline(plik,linia))//czytajace z pliku jedna linie
        {
            if(aktualny_nr==nr_linii) danie=linia;
            if(aktualny_nr==nr_linii+1) nr_zam=linia;
            if(aktualny_nr==nr_linii+2) czas_przygot=linia;
                if(aktualny_nr==nr_linii+3) zysk=linia;


            aktualny_nr++;
        }
}
        plik.close();
}
void Pytanie :: Zadaj()
{
    cout<<endl<<tresc<<endl;
cout<<a<<endl;
cout<<b<<endl;
cout<<c<<endl;
cout<<d<<endl;
cout<<"------------------------"<<endl;
cout<<endl<<"Odpowiedz:";
cin>>odpowiedz;
}
void Pytanie :: Sprawdz()
{
    if(odpowiedz==poprawna)
    {
        punkt=1;
    }
    else punkt=0;
}
