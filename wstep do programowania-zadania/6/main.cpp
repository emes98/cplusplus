#include <iostream>

// Zainicjuj tablicê tak, aby zawiera³a 15 liczb zmiennoprzecinkowych. Oblicz minimum, maksimum oraz œredni¹ z tych liczb.

using namespace std;

float tab[14];

float srednia (float *tab, int n)
{
    float wynik=0;

    for (int i=0; i<n; i++)
    {
        wynik+= tab[i];
    }

    return wynik/n;
}


void sortowanie_babelkowe( float *tab, int m)
{
    for (int i=1; i<m; i++)
    {
        for (int j= m-1; j>=1; j--)
        {
            if(tab[j]< tab[j-1])
            {
                float bufor;
                bufor= tab[j-1];
                tab[j-1]=tab[j];
                tab[j]= bufor;
            }
        }
    }
}




int main()
{
    cout << "Wpisz 15 liczb: " << endl;


    for (int i=0; i<15; i++)
    {
        cin >> tab[i];
    }

    cout << endl << endl;

    for (int i=0; i<15; i++)
    {
        cout << "Nr " << i+1 << ": " << tab[i] << endl;

    }

    cout << endl << endl;

    cout << "Srednia z liczb: " << srednia (tab, 15);


    cout << endl << endl;

    sortowanie_babelkowe(tab, 15);

    cout << "Posortowane liczby rosnaco: " << endl << endl;

    for (int i=0; i<15; i++)

    {
        cout << "Liczba nr " << i+1 << ": " << tab[i] << endl;
    }

    cout << endl << endl;

    cout << "Miminalna liczba w tablicy: " << tab[0];

    cout << endl << endl;

    cout << "Maksymalna liczba w tablicy: " << tab[14];





    return 0;
}
