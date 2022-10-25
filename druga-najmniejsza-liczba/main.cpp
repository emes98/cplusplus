#include <iostream>

using namespace std;

int ile;
int tab[100];

void sortowanie_babelkowe (int *tab, int n)
{
    for (int i=1; i<n; i++)
    {
        for (int j= n-1; j>=1; j--)
        {
            if (tab[j-1] > tab[j])
            {
                int bufor;
                bufor= tab[j-1];
                tab[j-1]= tab[j];
                tab[j]= bufor;
            }
        }
    }
}


int main()
{
    cout << "Ile liczb wpisac do tablicy: " << endl;
    cin >> ile;

    cout << endl;

    for (int i=0; i<ile; i++)
    {
        cin >> tab[i];
    }


    cout << endl << endl;

    for (int i=0; i<ile; i++)
    {
        cout << "Liczba nr " << i+1 << ": " << tab[i] << endl;
    }

    cout << endl << endl;

    cout << "Sortowanie liczb w tablicy rosnaco..." << endl;

    sortowanie_babelkowe (tab,ile);

    cout << endl << endl;

    for (int i=0; i<ile; i++)
    {
        cout << "Liczba nr "<< i+1 << ": " << tab[i] << endl;
    }

    cout << endl << endl;

    cout << "Druga najmniejsza liczba to: " << tab[1] << endl;






    return 0;
}
