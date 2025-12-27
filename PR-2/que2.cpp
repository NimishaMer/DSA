#include <iostream>
using namespace std;

main()
{

    int n;
    int count = 0;

    cout << "Enter any Number :";
    cin >> n;

    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    cout << "Total Number :" << count;
}