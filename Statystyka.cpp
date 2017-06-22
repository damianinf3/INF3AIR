#include <iostream>
#include "Statystyka.h"//' oznacza szukaj l=pliku w folderze z projektu
#include <fstream>//korzystanie z pliku tekstowego
#include <cstdlib>//uzycie funkcji exit
#include <string>
#include <ctime>

using namespace std;

void Statystyka ::Popularne_D()
{


m=(wybm/s)*100;
w=(wybw/s)*100;
d=(wybd/s)*100;
cout<<"Statystycznie "<<m<<"% wybralo dania miesne"<<endl;
cout<<""<<w<<"% wybralo dania wegetarianskie"<<endl;
cout<<""<<d<<"% wybralo desery"<<endl;

}


