#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

 /* U�ywaj�c p�tli do-while wypisa� na ekranie kolejne pierwiastki (kolejny pierwiastek z pierwiastka kwadratowego)
   liczby 61 (funkcja pierwiastkowania to sqrt i aby jej u�ywa� trzeba wykorzysta� bibliotek� math:
   #include <math.h> oraz gcc -lm ....). Wypisywane warto�ci sformatowa� tak, aby zawiera�y 4 miejsca po przecinku. */

int main()
{

int i=1;
float x= 61;
float y;


    do
        {
            cout << setprecision(5);
            x= sqrt(x);
            i++;

            cout << x << endl;


        } while ( i<40);

    return 0;
}
