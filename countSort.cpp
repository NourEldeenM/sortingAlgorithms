#include <iostream>

using namespace std;

int getMax(int arr[], int l)
{
    int result = INT_MIN;
    for (int i = 0; i < l; i++)
        result = max(result, arr[i]);

    return result;
}

// Error here
void countsort(int arr[], int length)
{
    int k = getMax(arr, length);
    int count[k];

    for (int i = 0; i < k; i++)
        count[i] = 0;
    
    for (int i = 0; i < length; i++)
        count[arr[i]]++;

    for (int i = 1; i < k; i++)
        count[i] += count[i - 1];

    int output[length];
    for (int i = length - 1; i >= 0; i--)
        output[count[arr[i]]] = arr[i]; 
    
    for (int i = 0; i < length; i++)
        arr[i] = output[i];
    
}

int main()
{
    int arr[5] = {1, 6, 2, 8 , 9};
    countsort(arr, 5);
    for (auto i : arr)
        cout << i << ' ';
    cout << endl;
}