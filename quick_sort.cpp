#include <iostream>

using namespace std;

int partition(int arr[], int s, int e)
{
    int pivot = arr[s];

    int cnt = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            cnt++;
        }
    }

    // place pivot at right position
    int pivotIndex = s + cnt;
    swap(arr[pivotIndex], arr[s]);

    // left aur right wala smbhaal lete hai
    int i = s, j = e;

    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] < pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}

void quickSort(int arr[], int s, int e)
{
    // Base case
    if (s >= e)
    {
        return;
    }

    // Partition karo
    int p = partition(arr, s, e);

    // left part sort karo
    quickSort(arr, s, p - 1);

    // right part sort karo
    quickSort(arr, p + 1, e);
}

int main()
{
    int arr[9] = {7, 4, 6, 3, 2, 7, 9, 9, 9};
    int n = 9;

    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}