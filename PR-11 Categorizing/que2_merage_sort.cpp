#include <iostream>
#include <vector>
using namespace std;
void print_array(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
void merge(vector<int> &a, int low, int mid, int high)
{
    vector<int> tmp;
    int left = low;
    int right = mid + 1;
    while (left <= mid && right <= high)
    {
        if (a[left] <= a[right])
        {
            tmp.push_back(a[left]);
            left++;
        }
        else
        {
            tmp.push_back(a[right]);
            right++;
        }
    }
    while (left <= mid)
    {
        tmp.push_back(a[left]);
        left++;
    }
    while (right <= high)
    {
        tmp.push_back(a[right]);
        right++;
    }
    for (int i = low; i <= high; i++)
    {
        a[i] = tmp[i - low];
    }
}
void merge_sort(vector<int> &a, int low, int high)
{
    if (low >= high)
    {
        return;
    }

    int mid = (low + high) / 2;
    merge_sort(a, low, mid);
    merge_sort(a, mid + 1, high);
    merge(a, low, mid, high);
}
int main()
{
    int size;
    cout << "Enter array size :- ";
    cin >> size;
    vector<int> a;
    cout << "Enter Array Elements : " << endl;
    for (int i = 0; i < size; i++)
    {
        int element;
        cin >> element;
        a.push_back(element);
    }
    cout << "Before Merge sort :- " << endl;
    print_array(a);
    merge_sort(a, 0, size - 1);
    cout << "after Merge sort :- " << endl;
    print_array(a);

    return 0;
}