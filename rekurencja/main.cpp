#include <iostream>
#include <time.h>
#include <windows.h>

//znalezc 40. wyraz ciagu
// zmierzyc czas

using namespace std;

int fib [100000];
int n;
int m;

clock_t start, stop;
double czas;


  int rek (int m)
 {
     if (m==1 || m==2) return 1;
     else return  rek(m-2) + rek(m-1);
 }



int main()
{



   fib[0]=1;
   fib[1]=1;

   for (int i=2; i<100000; i++ )
   {
       fib[i] = fib[i-2] + fib[i-1];
   }


   cout << "Ktory wyraz ciagu wyznaczyc? " << endl;
   cin >> n;

   cout << endl << endl;



   start= clock ();

   cout << fib[n-1];


   stop= clock ();


   czas= (double) (stop-start) / CLOCKS_PER_SEC;

    cout << endl << endl;

    cout << "Czas przy metodzie iteracyjnej: " << czas << "s";
    cout << endl << endl;

   cout << "Metoda rekurencyjna:" << endl;
   cout << endl;


   cout << "Ktory wyraz ciagu wyznaczyc? " << endl;
   cin >> m;


    cout << endl << endl;


    start= clock ();

   cout << rek(m);


   stop= clock ();

   czas= (double) (stop-start) / CLOCKS_PER_SEC;

   cout << endl << endl;

   cout << "Czas przy metodzie rekurencyjnej: " << czas << "s";













    return 0;
}
