#include <iostream>

//13) Program prosi o podanie z konsoli imienia a nast�pnie odpowiada: "Witaj [wczytane imi�]!".

using namespace std;

string imie;

int main()
{
    cout << "Podaj swoje imie: ";
    cin >> imie;

    cout << endl << endl;

    cout << "Witaj " << imie << "!";

    return 0;
}
