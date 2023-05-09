#include <iostream>
#include <stdio.h>

using namespace std;

void zeroMover(int input[5])
{
    for (int i = 0; i < 5; i++)
    {
        if (input[i] == 0)
        {
            cout << "0 ";
        };
    };
    for (int i = 0; i < 5; i++)
    {
        if (input[i] > 0)
        {
            cout << input[i] << " ";
        };
    };
}

int main()
{
    cout << "5 angka" << endl;
    int input[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "angka ke-" << i << " : ";
        cin >> input[i];
    }
    cout << "input  : ";
    for (int i = 0; i < 5; i++)
    {
        cout << input[i] << " ";
    };
    cout << endl;
    cout << "output : ";
    zeroMover(input);

    return 0;
}