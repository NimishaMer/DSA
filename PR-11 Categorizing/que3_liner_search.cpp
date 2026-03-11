#include <iostream>
using namespace std;
int linerseach(int a[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (a[i] == target)
        {
            return i;
        }
    }
    return -1;
}
int main()
{

    int size, target;
    cout << "Enter the size of array :-";
    cin >> size;

    int a[size];
    cout << "Input array :- " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the Target Value :- " << endl;
    cin >> target;

    int result = linerseach(a, size, target);
    if (result != -1)
    {
        cout << "Element is present at index " << result << endl;
    }
    else
    {
        cout << "Element is not present in array" << endl;
    }
    return 0;
}
