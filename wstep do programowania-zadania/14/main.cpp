#include <iostream>

//14) Napisz program wykorzystuj¹cy pêtlê while wypisuj¹cy liczby od 1 do 30 dopisuj¹c przy ka¿dej opis czy jest to liczba
  //  parzysta czy nieparzysta.

using namespace std;

int main()
{
    int i=1;

    while(i<=30)
    {
        if (i%2==0)
        {
            cout << i << " (jest to liczba parzysta) " << endl;
        }

        else
        {
            cout << i << " (jest to liczba nieparzysta)" << endl;
        }

        i++;
    }



}
