#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

class Zwierze
{
    public:
    Zwierze(string imie) {
        this->imie = imie;
        //...
    }
    virtual ~Zwierze() { cout << "R.I.P zwierze " << imie << endl; }
    virtual void glos() {};
    string imie;
};


class Koza : public Zwierze{
    public:
    Koza(string imie) : Zwierze(imie) {}
    virtual ~Koza() { cout << "R.I.P koza " << imie << endl; }
    virtual void glos() { cout << imie << ": " << " Meeee!" << endl; }
};
class Owca : public Zwierze {
    public:
    Owca(string imie) : Zwierze(imie) {}
    virtual ~Owca() { cout << "R.I.P owca " << imie << endl; }
    virtual void glos() { cout << imie << ": " << " BeeeeEEEE!" << endl; }
};
class Forfiter : public Zwierze {
    public:
    Forfiter(string imie) : Zwierze(imie) {}
    virtual ~Forfiter() { cout << "R.I.P Forfiter " << imie << endl; }
    virtual void glos() { cout << imie << ": " << " szwagier!" << endl; }
};
class Langusta : public Zwierze {
    public:
    Langusta(string imie) : Zwierze(imie) {}
    virtual ~Langusta() { cout << "R.I.P Langusta " << imie << endl; }
    virtual void glos() { cout << imie << ": " << " Krrk!" << endl; }
};

string losujImie()
{
    switch(rand()%7)
    {
        case 0: return "Matylda";
        case 1: return "Zocha";
        case 2: return "Stefan";
        case 3: return "Andrzej";
        case 4: return "Popierduka";
        case 5: return "Zdzichu Mortal Combat";
        case 6: return "Gajusz Maksymilian Wladimir Mortemoriusz Ignacy Jan Babtysta";
    }
    throw -666;
    //return "???";
}

Zwierze* wyprodukujZwierza()
{
    switch(rand() % 4)
    {
        case 0: return new Koza(losujImie()); break;
        case 1: return new Owca(losujImie()); break;
        case 2: return new Forfiter(losujImie()); break;
        case 3: return new Langusta(losujImie()); break;
    }
}

int main()
{
    srand(time(NULL));

    vector<Zwierze *> farma;
    for(int i=0; i<10; i++)
        farma.push_back(wyprodukujZwierza());

    for(int i=0; i<farma.size(); i++)
        farma.at(i)->glos();

    for(int i=0; i<farma.size(); i++)
        delete farma.at(i);
    farma.clear();

    return 0;
}
