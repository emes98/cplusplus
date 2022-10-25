#include <iostream>
#include <windows.h>
#include <time.h>
#include <unistd.h>

using namespace std;

int liczba;

void wait(int seconds) {
    usleep(seconds * 1000 * 1000);
}

int main()
{
    srand(time(NULL));

    cout << "Za 3 sekundy nast¹pi losowanie";
    cout << endl;

    wait(3);

    for (int i=1; i<=6; i++)
    {
        liczba = rand()%49+1;
        cout << liczba << "\a" << endl;
    }

    return 0;
}
