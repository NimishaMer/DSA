#include <iostream>
using namespace std;
int binarySearch(int a[], int size, int target)
{

    int low = 0;
    int high = size - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (a[mid] == target)
        {
            return mid;
        }
        else if (a[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
void sortArray(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
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
    sortArray(a, size);

    cout << "Sort array :- " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    cout << "\nEnter the Target Value :- " << endl;
    cin >> target;

    int result = binarySearch(a, size, target);
    if (result != -1)
    {
        cout << "Element is present at index " << result << endl;
    }
    else
    {
        cout << "Eleemnt is not present in array" << endl;
    }

    return 0;
}