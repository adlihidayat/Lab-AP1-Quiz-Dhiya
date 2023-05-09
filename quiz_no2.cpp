#include <iostream>
#include <stdio.h>

using namespace std;

void finder(int input[5], int find, int sum)
{
    for (int i = 0; i < 5; i++)
    {
        if (input[i] == find)
            sum++;
    };
    cout << "total : " << sum;
}

int main()
{

    int sum, find;

    cout << "5 angka";
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
    cout << "jumlah angka yg dicari : ";
    cin >> find;

    sum = 0;
    finder(input, find, sum);

    return 0;
}