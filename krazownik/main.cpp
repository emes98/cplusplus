#include <iostream>
#include <cmath>

using namespace std;

class Maszyna
{
    public:

    int metal;
    int krysztal;
    int deuter;
    int m;
    int k;
    int d;


    void posiadane_zasoby ()
    {
        cout << "Ile metalu posiadasz: " ;
        cin >> m;

        cout << "Ile krysztalu posiadasz: ";
        cin >> k;

        cout << "Ile deutru posiadasz: ";
        cin>> d;
    }


    void ile_kupisz ()
    {
        int n;
        int a,b,c;

        a= trunc(m/metal);
        b= trunc(k/krysztal);
        c= trunc(d/deuter);

        n= a;

        if (b<a) {n=b;}
        if (c<b) {n=c;}


        cout << "Mozesz kupic " << n << " sztuk" ;

    }
};





int main()
{

  Maszyna krazownik;
  krazownik.metal = 1000;
  krazownik.krysztal = 3500;
  krazownik.deuter = 500;


  Maszyna nielot;
  nielot.metal = 1000;
  nielot.krysztal = 3500;
  nielot.deuter = 500;



  Maszyna hiperlot;
  hiperlot.metal = 1000;
  hiperlot.krysztal = 3500;
  hiperlot.deuter = 500;


 krazownik.posiadane_zasoby();
 krazownik.ile_kupisz();





    return 0;
}
