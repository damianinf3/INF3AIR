#include <iostream>
#include "Paragon.h"//' oznacza szukaj l=pliku w folderze z projektu
#include <fstream>//korzystanie z pliku tekstowego
#include <cstdlib>//uzycie funkcji exit
#include <string>
#include <ctime>


using namespace std;

void Paragon ::Licz_czas()
{

}

void Paragon :: Druk_paragon()
{
srand(time(NULL));

    fstream plik;
remove("paragon.txt");
    plik.open("paragon.txt",ios::out | ios::app);



    plik<<"Mala restauracja"<<endl;
    plik<<"Rachunek za posilki"<<endl;
    plik<<"Lacznie wydales : "<<sum_cena<<"zl."<<endl;
    plik<<"Sredni czas oczekiwania to: "<<sr_czas<<"min"<<endl;
    plik<<"Twoj numerek to: "<<( std::rand() % 50 ) + 1<<endl;

    plik.close();

}
