#include <iostream>
#include "Zarobek.h"
#include <fstream>
#include <cstdlib>
#include <string>
#include <ctime>

using namespace std;

void Zarobek ::Napiwek()
{
 //przedzial 1 0zl-50% przedzial drugi 1-10 zl-30% przedzial 3 od 10 50 zl-15% przedzial 4 50-100 zl-5%
 srand(time(NULL));


a=(std::rand()%100 )+1;
if(a<=50)
{
    b=0;
}
else if(a>=50 && a<=80)
{
    b=(std::rand()%9)+1;
}
else if(a>=80 &&a<=95)
{
    b=(std::rand()%40)+10;
}
else if(a>=95 && a<=100)
{
    b=(std::rand()%50)+50;
}
cout<<"Twoj napiwek to: "<<b<<"zl"<<endl;
}
Zarobek::Zarobek(int be)
{
b=be;
}
Zarobek::~Zarobek()
{
}
