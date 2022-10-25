#include <iostream>

using namespace std;


// Wykorzystuj¹c pêtlê while, wypisaæ na ekranie wszystkie elementy ci¹gu Fibonacciego mniejsze od 250


int main()
{

    int a,b,c;

     a=1;
     b=1;


    int i=3;

    cout << a << endl;
    cout << b << endl;

    while( c<250)
    {
        c= a+b;
        a=b;
        b=c;

        if (c>250) break;

        cout << c << endl;
         i++;

    }

    cout << endl << endl;

    int fib[100];

    fib[1]=1;
    fib[0]=1;

   cout << fib[0] << endl;
    cout << fib[1] << endl;


    int j=2;

    while (j<250)
    {
     fib[j]= fib[j-2]+ fib[j-1];

     if (fib[j]>250) break;

    cout << fib[j] << endl;

        j++;

    }



    return 0;
}
