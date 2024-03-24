#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (arr[i] > arr[j])
                swap(arr[i], arr[j]);
            else
                break;
        }
    }
}

int main()
{
    int arr[] = {1, 5, 3, 2, 8, 7};
    bubbleSort(arr, 6);
    for (auto &i : arr)
        cout << i << " ";
    cout << endl;
}