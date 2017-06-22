#include <iostream>
#include "Miesozerca.h"//' oznacza szukaj l=pliku w folderze z projektu
#include <fstream>//korzystanie z pliku tekstowego
#include <cstdlib>//uzycie funkcji exit
#include <string>


using namespace std;

void Miesozerca::wczytaj()
{
    fstream plik;
        plik.open("Menu.txt",ios::in);//in jest metoda klasy ios ::-operator zasiegu
        if (plik.good()==false)
        {
            cout<<"Nie udalo sie otworzyc pliku";
            exit(0);
        }
        int nr_linii=(nr_dan-1)*15+1;
        int aktualny_nr=1;

        string linia;


        while(getline(plik,linia))//czytajace z pliku jedna linie
        {
            if(aktualny_nr==nr_linii) danie1=linia;

            if(aktualny_nr==nr_linii+1) czas_przygot1=linia;
            if(aktualny_nr==nr_linii+2) zysk1=linia;
                        if(aktualny_nr==nr_linii+3) danie2=linia;
            if(aktualny_nr==nr_linii+4) czas_przygot2=linia;
            if(aktualny_nr==nr_linii+5) zysk2=linia;
                        if(aktualny_nr==nr_linii+6) danie3=linia;
            if(aktualny_nr==nr_linii+7) czas_przygot3=linia;
            if(aktualny_nr==nr_linii+8) zysk3=linia;
                        if(aktualny_nr==nr_linii+9) danie4=linia;

            if(aktualny_nr==nr_linii+10) czas_przygot4=linia;
            if(aktualny_nr==nr_linii+11) zysk4=linia;
                        if(aktualny_nr==nr_linii+12) danie5=linia;
            if(aktualny_nr==nr_linii+13) czas_przygot5=linia;
            if(aktualny_nr==nr_linii+14) zysk5=linia;

      aktualny_nr++;
        }



        plik.close();
}
void Miesozerca :: Zadaj()
{
    cout<<endl<<danie1<<endl;
    cout<<czas_przygot1<<endl;
    cout<<zysk1<<endl;
      cout<<endl<<danie2<<endl;
      cout<<czas_przygot2<<endl;
      cout<<zysk2<<endl;
        cout<<endl<<danie3<<endl;
        cout<<czas_przygot3<<endl;
        cout<<zysk3<<endl;
          cout<<endl<<danie4<<endl;
          cout<<czas_przygot4<<endl;
          cout<<zysk4<<endl;
            cout<<endl<<danie5<<endl;
            cout<<czas_przygot5<<endl;
            cout<<zysk4<<endl;
cout<<"------------------------"<<endl;
cout<<endl<<"Podaj numer dania:";
cin>>odpowiedz;
}

void Miesozerca :: Licz_zysk()
{

    if(odpowiedz==1)
    {
        czas_przygot1.erase(0,20);
        czas_przygot1.erase(2,3);
       zysk1.erase( 0, 6 );
       zysk1.erase( 2, 2);
wzysk=zysk1;
 czas=czas_przygot1;
 wzyskl=atoi(wzysk.c_str(  ));
 czasl=atoi(czas.c_str( ));
 zysk=(double(wzyskl)*7)/100;
cout<<"Cena: "<<wzysk<<"zl"<<endl;
        cout<<"Czas przygotowania: "<<czas<<"min"<<endl;

    }

 if(odpowiedz==2)
    {
          czas_przygot2.erase(0,20);
            czas_przygot2.erase(2,3);
        zysk2.erase( 0, 6 );
       zysk2.erase( 2, 2);
        wzysk=zysk2;
        czas=czas_przygot2;
        wzyskl=atoi(wzysk.c_str(  ));
        czasl=atoi(czas.c_str( ));
        zysk=(double(wzyskl)*7)/100;
        // cout<<"Wzyskl:"<<wzyskl<<endl;
        cout<<"Cena: "<<wzysk<<"zl"<<endl;
        cout<<"Czas przygotowania: "<<czas<<"min"<<endl;

    } if(odpowiedz==3)
    {
          czas_przygot3.erase(0,20);
            czas_przygot3.erase(2,3);
        zysk3.erase( 0, 6 );
       zysk3.erase( 2, 2);
        wzysk=zysk3;
         czas=czas_przygot3;
         wzyskl=atoi(wzysk.c_str(  ));
         czasl=atoi(czas.c_str( ));
         zysk=(double(wzyskl)*7)/100;
        cout<<"Cena: "<<wzysk<<"zl"<<endl;
        cout<<"Czas przygotowania: "<<czas<<"min"<<endl;
    } if(odpowiedz==4)
    {
          czas_przygot4.erase(0,20);
            czas_przygot4.erase(2,3);
       zysk4.erase( 0, 6 );
       zysk4.erase( 2, 2);
        wzysk=zysk4;
         czas=czas_przygot4;
      wzyskl=atoi(wzysk.c_str(  ));
      czasl=atoi(czas.c_str( ))  ;
      zysk=(double(wzyskl)*7)/100;
cout<<"Cena: "<<wzysk<<"zl"<<endl;
cout<<"Czas przygotowania: "<<czas<<"min"<<endl;
} if(odpowiedz==5)
    {
          czas_przygot5.erase(0,20);
            czas_przygot5.erase(2,3);
        zysk5.erase( 0, 6 );
       zysk5.erase( 2, 2);
        wzysk=zysk5;
         czas=czas_przygot5;
         wzyskl=atoi(wzysk.c_str(  ));
         czasl=atoi(czas.c_str( ));
         zysk=(double(wzyskl)*7)/100;
        cout<<"Cena: "<<wzysk<<"zl"<<endl;
        cout<<"Czas przygotowania: "<<czas<<"min"<<endl;
    }

  if(odpowiedz>=6)
  {
      wzysk="brak";
      czas="brak";
      cout<<"Podales zly numer dania"<<endl;
  }


}
Miesozerca::Miesozerca(int nr, int odp){

odpowiedz=odp;
    nr_dan=nr;

}
Miesozerca::~Miesozerca()

{

}
