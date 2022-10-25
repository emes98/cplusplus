#include <iostream>

//  Wypisz liczby z zakresu od 1 do 100 podzielne przez 3, a niepodzielne przez 2.

using namespace std;

int main()
{

    for( int i=1; i<=100; i++)
    {
        if ((i%3==0) && (i%2!=0))
        {
            cout << i << endl;
        }

    }


    return 0;
}
