#include <iostream>

using namespace std;

main()
{

    int n;

    cout << "enter any number :";
    cin >> n;
    int rem = n % 10;

    while (n >= 10)
    {
        n = n / 10;
    }

    cout << "sum of first and last digit :" << (n + rem) << endl;
}