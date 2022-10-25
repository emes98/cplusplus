
// Przygotowa� plik tekstowy zawieraj�cy 5 liczb, w programie wczyta� je i wydrukowa�, a nast�pnie wydrukowa� ich sum�.

#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

 void suma (int *tab, int n)

{
    int wynik=0;

    for(int i=0; i<n; i++)

    {
        wynik+= tab[i];
    }

    cout << "Suma wynosi: " << wynik;
}

int liczby[10];

int main()
{

    string linia;
    int nr_linii=1;

    fstream plik;
    plik.open("pomiary.txt", ios::in);

    if (plik.good()==false)
    {
        cout << "Nie udalo sie otworzyc pliku";
    }

    int licznik=0;

    while(!plik.eof())
    {
        getline(plik,linia);
        liczby[licznik]= atoi(linia.c_str());
        licznik++;
    }

    plik.close();

    cout << "Liczba pomiarow: " << licznik;

    cout << endl << endl;



    for (int i=0; i<licznik; i++)
    {
        cout << liczby[i] << endl;
    }


    cout << endl << endl;



    suma(liczby,licznik);



    return 0;
}
