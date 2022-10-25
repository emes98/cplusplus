#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <conio.h>

using namespace std;
float x,y;
char wybor; //znak z klawiatury

int main()
{
    for(;;) // petla nieskonczona, while(true), while(wybor!=5)

   {
    cout <<endl; cout << "Podaj 1 liczbe: " ;
    cin >> x;

    cout << "Podaj 2 liczbe: " ;
    cin >> y;


    cout << endl;
    cout << "MENU GLOWNE" << endl;
    cout << "----------" << endl;
    cout << "1. DODAWANIE" << endl;
    cout << "2. ODEJMOWANIE" << endl;
    cout << "3. MNOZENIE" << endl;
    cout << "4. DZIELENIE" << endl;
    cout << "5. KONIEC PROGRAMU" <<endl;

    cout << "Wybierz: ";
    wybor= getch(); //get character, pobierz znak, funkcja nie czeka na entera

    switch(wybor)
    {
    case '1': //wartosc w nawiasie, bo wybor nie jest intem tylko znakiem z klawiatury
            cout << "Suma= " << x+y;

    break;

    case '2':
            cout << "Roznica= " << x-y;

    break;

    case '3':
            cout << "Iloczyn= " << x*y;
    break;

    case '4':

            if (y==0) cout << "Nie dzielimy przez 0!";
            else cout << "Iloraz= " << x/y;
    break;

    case '5':
        exit(0);
    break;

    default: cout << "Nie ma takiej opcji!";

    }

    }



    return 0;
}
