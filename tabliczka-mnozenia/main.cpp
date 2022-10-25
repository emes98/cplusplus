#include <iostream>

using namespace std;

/*
 * OUTPUT:
 * 1 2 3
 * 2 4 6
 * 3 6 9
 * 4 8 12
 * 5 10 15
 * 6 12 18
 * 7 14 21
 * 8 16 24
 * 9 18 28
 */

int main()
{

    for (int j=1; j<=10; j++)
    {
        for( int i=j; i<=j*10; i=i+j) // j = 1
        {
            cout << i << " ";
        }

        cout << endl;
    }


    for (int j = 1; j <= 10; j++) {
        for (int i = 1; i <= 10; i++) {
            cout << i * j << " ";
        }
        cout << endl;
    }


    return 0;
}
