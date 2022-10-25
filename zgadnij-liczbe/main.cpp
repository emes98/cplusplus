#include <iostream>
#include <time.h>
#include <stdio.h>
#include <cstdlib>

using namespace std;
int liczba, strzal;
int proba=0;


int main()
{
    cout << "Pomyslalem liczbe 1..100:" << endl;
    srand(time(NULL));
    liczba=rand()%100+1;

    while(strzal!=liczba)
    {
        proba++;
        cout << "Zgadnij jaka (To twoja "<<proba<<" proba) :";
        cin >> strzal;

        if(strzal==liczba)
        cout <<"Gratulacje! Wygrales w "<<proba<<" probie" << endl;

        else if(strzal<liczba)
        cout << "Za malo" <<endl;

        else if (strzal>liczba)
        cout << "Za duzo" <<endl;
    }

    getchar(); getchar();

    return 0;
}
