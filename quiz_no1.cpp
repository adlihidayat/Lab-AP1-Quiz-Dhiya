#include <iostream>
#include <stdio.h>

using namespace std;

void remove(int input[5], bool skip)
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = (i + 1); j < 5; j++)
        {
            if (input[i] == input[j])
                skip = true;
        }
        if (skip)
            skip = false;
        else
            cout << input[i];
    };
}

int main()
{
    bool skip;

    int input[5];

    cout << "masukkan 5 angka" << endl;
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
    remove(input, skip);

    return 0;
}