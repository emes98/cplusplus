#include <iostream>
#include <cmath>

using namespace std;

int metal= 20000;
int krysztal= 7000;
int deuter= 2000;

int m,k,d;

int ile_krazownikow (int x,int y, int z)
{
    int a,b,c;
    int n;

    a= trunc(x/metal);
    b= trunc(y/krysztal);
    c= trunc(z/deuter);

    n= a;

    if (b<a) {n=b;}
    if (c<b) {n=c;}

   // cout << "Ten cout jest w funkcji ile_krazownikow, n = " << n << endl;

    cout << "Tyle krazownikow mozesz kupic: " ;

    return n;
}


int main()
{
    cout << "Aby kupic krazownik potrzebujesz: " << endl << endl;

    cout << metal << " metalu" << endl;
    cout << krysztal << " krysztalu" << endl;
    cout << deuter << " deutru" << endl;

    cout << endl << endl;

    cout << "Ile metalu posiadasz? ";
    cin >> m;

    cout << "Ile krysztalu posiadasz? ";
    cin >> k;

    cout << "Ile deutru posiadasz? ";
    cin  >> d;


    cout << ile_krazownikow(m,k,d);


    return 0;
}
