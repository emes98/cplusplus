#include <iostream>

using namespace std;

void wczytaj (float *tablica, int x)
{
    for(int i=0; i<x; i++)
    {
        cin >> tablica [i];
    }
}

void wypisz(float *tablica, int x)
{
    for(int i=0; i<x; i++)
    {
        cout << "Liczba nr " << i+1 << ": " << tablica[i] << endl;
    }
}

float suma (float *tablica, int x)
{
    float wynik=0;
    for(int i=0; i<x; i++)
    {
        wynik+= tablica[i];
    }

    return wynik;
}


float srednia(float *tablica, int x)
{
    return suma(tablica,x)/x;
}

float odleglosc(float *tablica, int x);

float abs2(float n)
{
    if(n<0) return -n;
    else return n;
}



int main()
{
    float tab[100];
    int n;

    cout << "Ile liczb wyznaczyc: ";
    cin >> n;

    /*
    1. Pobrac liczbe n od uzytkownika
    2. Pobrac n liczb od uzytkownika i zapisac je w tablicy
    3. Wypisac srednia liczb w tablicy
    */

    wczytaj(tab,n);

    cout << endl << endl;

    wypisz(tab,n);



    cout << endl << endl;

    cout << "Srednia: " << srednia(tab, n) << endl;

    cout << endl << endl;

    cout << "Odleglosc od sredniej: " << endl << endl;

    odleglosc(tab, n);

    cout << endl << endl;


    return 0;
}





 float odleglosc (float *tablica, int x)
{
    float avg;
    avg = srednia(tablica,x); //avg od sredniej

    // tworzymy nowa tablice o 'x' elementach float
    // do niej mozemy zapisac odleglosci
    
    float *srednie_odleglosci = new float [x];

    for (int i=0; i<x; i++)
    {
        srednie_odleglosci [i]= abs2(tablica [i]-avg);
        cout << "Odleglosc nr" << i+1 << ": " << srednie_odleglosci[i] << endl;
    }

    cout << endl << endl;

    float k= srednie_odleglosci[0];
    int m= k;

    for (int i=1; i<x; i++)
    {
        if(srednie_odleglosci[i]<k)
        {
            k= srednie_odleglosci[i];
            m= i;
        }
    }

    cout << "Najmniejsza odleglosc od sredniej to nr: " << m+1 << endl;
    cout << "Jej wartosc to: " << k;





    return 0;
}




