#include <iostream>
#include <fstream>
#include <cstdlib>

//   Przygotuj plik tekstowy zawieraj�cy 20 liczb. Ka�da liczba jest w oddzielnej linii. Nat�pnie wczytaj te liczby do tablicy
  //  i zapisz do tego samego pliku w odwrotnej kolejno�ci (od ostatniej do pierwszej).

using namespace std;

int main()
{

    int tab[100];


    string linia;

    fstream plik;

    plik.open("liczby.txt", ios::in);

    if( plik.good()==false) cout << "Nie mozna otworzyc pliku";

    int licznik=0;


    while(!plik.eof())
    {

        getline(plik,linia);

        tab[licznik]= atoi(linia.c_str());
        cout << tab [licznik] << endl;

        licznik++;
    }

    cout << endl << endl;

    plik.close();



    plik.open("liczby.txt", ios::in | ios::app);

    plik << endl << endl;

    for (int i= licznik-1; i>=0; i--)
    {
        plik << tab[i] << endl;
    }

    plik.close();




    return 0;
}
