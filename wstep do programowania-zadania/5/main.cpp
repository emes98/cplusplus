#include <iostream>
#include <math.h>
#include <iomanip>

//) Wczytaæ z konsoli dowoln¹ liczbê rzeczywist¹, a nastêpnie wydrukowaæ wartoœæ funkcji cosinus dla tej liczby z dok³adnoœci¹
 //  do 8 miejsc po przecinku (wymagana jest biblioteka math jak w zadniu 3).

using namespace std;

double liczba;
double b;


int main()
{
    cout << "Wpisz liczbe:" << endl;
    cin >> liczba;


    cout << setprecision(8);
    b= cos(liczba);

    cout << b;

    return 0;
}
