#include <iostream>
#include <fstream>

// Z pomoc¹ pêtli for wypisaæ kolejne wartoœci funkcji f(x)=3*x*x-7*x+1 z przedzia³u od 0.5 do 3.5 z krokiem co 0.1.
//   Wyniki zapisywaæ do pliku tekstowego.

using namespace std;

float tab[100];

int main()
{

/* int licznik=0;


    for (float x=0.5; x <=3.5; x=x+0.1)
        {

            tab[licznik]= 3*x*x-7*x+1;
            cout << tab[licznik] << endl;
            licznik++;
        }

*/

    fstream plik;

    plik.open("funkcja.txt", ios::out);


int licznik=0;


    for (float x=0.5; x <=3.5; x=x+0.1)
        {

            tab[licznik]= 3*x*x-7*x+1;
            plik << tab[licznik] << endl;
            licznik++;
        }

        plik.close();

    return 0;
}
