#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

 /* U¿ywaj¹c pêtli do-while wypisaæ na ekranie kolejne pierwiastki (kolejny pierwiastek z pierwiastka kwadratowego)
   liczby 61 (funkcja pierwiastkowania to sqrt i aby jej u¿ywaæ trzeba wykorzystaæ bibliotekê math:
   #include <math.h> oraz gcc -lm ....). Wypisywane wartoœci sformatowaæ tak, aby zawiera³y 4 miejsca po przecinku. */

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
