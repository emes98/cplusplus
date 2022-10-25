#include <iostream>
#include <fstream>
#include <cstdlib>

//12) Przygotuj plik tekstowy zawieraj¹cy wiêcej ni¿ 10 linii tekstu. Nastêpnie wczytaj kolejne linie tekstu z pliku i wypisz
 //   je na konsoli poprzedzaj¹c ka¿dy tekst numerem linii. Wykorzystaj pêtlê while i funkcjê feof.

using namespace std;

int main()
{

    string linia;
    int nr_linii=1;


    fstream plik;

    plik.open("tekst.txt", ios::in);

    if (plik.good()==false)
    {
        cout << "Nieprawidlowy plik";
    }

    while(!plik.eof())
    {

        getline(plik,linia);


        cout << nr_linii << ". " ;
        cout <<  linia << endl;
        nr_linii ++;
    }



    return 0;
}
