#include <iostream>
#include <fstream>
#include <cstdlib>

//12) Przygotuj plik tekstowy zawieraj�cy wi�cej ni� 10 linii tekstu. Nast�pnie wczytaj kolejne linie tekstu z pliku i wypisz
 //   je na konsoli poprzedzaj�c ka�dy tekst numerem linii. Wykorzystaj p�tl� while i funkcj� feof.

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
