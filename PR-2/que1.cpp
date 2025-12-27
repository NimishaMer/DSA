#include <iostream>
using namespace std;

 main()
{
    char ch = 'a';
    do
    {
        cout << ch << endl;
        ch += 4;
    } while (ch <= 'z');
}