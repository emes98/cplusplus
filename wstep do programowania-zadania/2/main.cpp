#include <iostream>

using namespace std;

//Wykorzystuj�c p�tl� while, wypisa� na ekranie wszystkie elementy ci�gu Fibonacciego mniejsze od 250


int a,b,c;

int main()
{
    a=1;
    b=1;


    cout << a << endl;
    cout << b << endl;


    int i=3;

    while (c<250)
    {
        c= a+b;

        if (c>250) break;


        cout << c << endl;

        a=b;
        b=c;

        i++;
    }




    return 0;
}
