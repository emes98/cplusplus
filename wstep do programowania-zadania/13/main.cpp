#include <iostream>

//13) Program prosi o podanie z konsoli imienia a nastêpnie odpowiada: "Witaj [wczytane imiê]!".

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
