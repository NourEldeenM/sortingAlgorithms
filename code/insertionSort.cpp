#include <iostream>
using namespace std;

void insertionSort(int arr[], int length)
{
    int i, j, tmp;
    for (i = 1; i < length; i++)
    {
        j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            tmp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = tmp;
            j--;
        }
    }
}

int main()
{
    int arr[] = {1, 5, 3, 2, 8, 7};
    insertionSort(arr, 6);
    for (auto& i : arr)
        cout << i << " ";
    cout << endl;
}