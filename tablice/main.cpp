#include <iostream>

using namespace std;

float oceny[1000]; float suma=0, srednia;
int n;

int main()
{
    cout << "Z ilu ocen liczyc srednia: ";
    cin >> n;


    for(int i=0; i<n; i++)
    {
        cout << endl << "Podaj "<<i+1<<" ocene: ";
        cin >> oceny[i];
        suma= suma+oceny[i];
    }
    cout << endl;
    cout << "Suma:";
    cout << suma <<endl<<endl;

    srednia= suma/n;
    cout << "Srednia:";
    cout << srednia;


    return 0;
}
