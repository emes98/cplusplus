#include <iostream>

using namespace std;


   class Samochod
    {
        public:
        string marka;
        string model;
        int rocznik;
        float przebieg;


        void wczytaj()
        {
            cout << "Marka samochodu: ";
            cin >> marka;


            cout << "Model: ";
            cin >> model;

            cout << "Rocznik: ";
            cin >> rocznik;

            cout << "Przebieg: ";
            cin >> przebieg;
        }

        void wypisz()
        {


            cout << "Marka: " << marka << endl;
            cout << "Model: " << model << endl;
            cout << "Rocznik: " << rocznik << endl;
            cout << "Przebieg: " << przebieg << endl;

        }

    };


int main()
{

    int n;
    int nr_samochodu;

    cout << "Ile modeli samochodu wpisac do bazy: " ;
    cin >> n;

    Samochod sam[n];


    for (int i=0; i<n; i++)
    {

        nr_samochodu= i+1;
        cout << "Samochod nr " << nr_samochodu << ":" << endl;
        sam[i].wczytaj();

        cout << endl << endl << endl;

    }

    cout << "Samochody: " << endl << endl;

    for (int i=0; i<n; i++)
    {
        nr_samochodu= i+1;
        cout << "Samochod nr " << nr_samochodu << ":" << endl;
        sam[i].wypisz();

        cout << endl << endl;
    }




    return 0;
}
