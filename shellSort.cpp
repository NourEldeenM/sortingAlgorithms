#include <bits/stdc++.h>
using namespace std;

template <class T>
void shellSort(T arr[], int n)
{
    // Start with a big gap, halve it every iteration
    for (int gap = n / 2; gap > 0; gap /= 2)
    {
        // Do a gapped insertion sort for this gap size.
        for (int i = gap; i < n; i += 1)
        {
            // Save a[i] in temp and make a hole at position i
            T temp = arr[i];
            // Shift earlier gap-sorted elements up until the correct
            // location for a[i] is found (Insertion sort)
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
                arr[j] = arr[j - gap];
            // Put temp (the original a[i]) in its correct location
            arr[j] = temp;
        }
    }
}


int main()
{
    int arr[] = {1, 5, 3, 2, 8, 7};
    shellSort(arr, 6);
    for (auto &i : arr)
        cout << i << " ";
    cout << endl;
}