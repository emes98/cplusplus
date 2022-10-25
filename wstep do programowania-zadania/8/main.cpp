#include <iostream>

//8) Wykorzystuj¹c instrukcjê switch-case wczytaj z konsoli cyfrê i wypisz j¹ s³ownie.

using namespace std;

int liczba;

int main()
{
    cout << "Podaj liczbe z zakresu od 0 do 10: ";
    cin >> liczba;

    cout << endl << endl;



    switch(liczba)
    {
        case 0:
                cout << "Wybrana liczba to zero";
        break;

        case 1:
                cout << "Wybrana liczba to jeden";
        break;

        case 2:
                cout << "Wybrana liczba to dwa";
        break;


        case 3:
                cout << "Wybrana liczba to trzy";
        break;

        case 4:
                cout << "Wybrana liczba to cztery";
        break;

        case 5:
                cout << "Wybrana liczba to piec";
        break;

        case 6:
                cout << "Wybrana liczba to szesc";
        break;


        case 7:
                cout << "Wybrana liczba to siedem";
        break;

        case 8:
                cout << "Wybrana liczba to osiem";
        break;


        case 9:
                cout << "Wybrana liczba to dziewiec";
        break;

        case 10:
                cout << "Wybrana liczba to dziesiec";
        break;

        default: cout << "Liczba z poza zakresu!";



    }


    return 0;
}
