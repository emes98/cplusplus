#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;
string text;

int main()
{
    fstream plik;
    plik.open("main.cpp", ios::in);

    if(plik.good()==false)
    {
        cout << "Nie udalo sie otworzyc pliku";
        exit(0);
    }

    int linia=1;
    while(getline(plik, text))

    {   cout << linia++ << " ";
        cout << text << endl;
    }



    return 0;
}
