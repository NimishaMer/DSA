#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size :-";
    cin >> size;

    int a[size];
    cout << "Input Array :-" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    cout << "Selection sort :- " << endl;
    for (int i = 0; i < size - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (a[j] < a[minIndex])
            {
                minIndex = j;
            }
        }
        int c = a[i];
        a[i] = a[minIndex];
        a[minIndex] = c;
    }

    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}