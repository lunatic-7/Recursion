#include <iostream>

using namespace std;

bool isSorted(int arr[], int size)
{
    // Base case
    if (size == 0 || size == 1)
    {
        return true;
    }

    if (arr[0] > arr[1])
    {
        return false;
    }

    bool remainingPart = isSorted(arr + 1, size - 1);
    return remainingPart;
}

int main()
{
    int arr[6] = {2, 4, 15, 6, 7, 9};
    int size = sizeof(arr) / sizeof(int);

    bool ans = isSorted(arr, size);

    if (ans)
    {
        cout << "Array is sorted."
             << "\n";
    }
    else
    {
        cout << "Array is not sorted"
             << "\n";
    }

    return 0;
}