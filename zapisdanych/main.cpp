#include <iostream>
#include <fstream> // f od file i stream strumien danych

using namespace std;

string imie, nazwisko;
int nr_tel;

int main()
{

    cout << "Podaj imie: ";              cin >> imie;
    cout << "Podaj nazwisko: ";          cin >> nazwisko;
    cout << "Podaj numer tel: ";         cin >> nr_tel;

    fstream plik;
    plik.open("wizytowka.txt", ios::out | ios::app);

    // app od append, zalacz dodatkowe dane

    /*operacja open ma byc wykonana na rzecz zmiennej plik
    input output stream
    out czyli wyprowadz dane do pliku */

    plik << imie << endl;
    plik << nazwisko << endl;
    plik << nr_tel << endl;

    plik.close(); //zawsze zamknac plik

    return 0;
}

{
    string linia;
    bool result;

    result = getline(plik, linia);
    getline(plik, linia);
}
