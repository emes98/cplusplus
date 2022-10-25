#include <iostream>
#include <fstream>


//U¿ywaj¹c pêli do-while oblicz wartoœæ silni dla zadanej liczby n. Liczbê n wczytaj z pliku. Wynik wypisz do drugiego pliku.

using namespace std;

int n;
int silnia=1;

int main()
{
    fstream plik;
    string linia;

    plik.open("liczba.txt", ios::in);

    if (plik.good()==false) cout << "Nieprawidlowy plik";

    while(!plik.eof())
    {
        getline(plik,linia);
        n= atoi(linia.c_str());
    }

    plik.close();


    cout << endl << endl;


    cout << n;

    cout << endl << endl;




  //  cout << "Podaj liczbe n: " ;
  //  cin >> n;


   int i=n;

   while(i>1)
   {
       silnia= silnia * i;
       i--;
   }



   cout << "!" << "n=" << silnia;


   fstream plik2;

   plik2.open("silnia.txt", ios::out);

   plik2 << "!" << "n=" << silnia;



    return 0;
}
