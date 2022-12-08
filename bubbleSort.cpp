#include <iostream>

using namespace std;

void bubble(int *arr, int size)  // use any arr[] or *arr
{
    // Base case
    if (size == 0 || size == 1)
    {
        return;
    }

    // 1 case solve kr liya, baaki recursive call apne aap dekh lega (largest element ko last mai le gye)
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }

    // Recursive call
    bubble(arr, size - 1);
}

int main()
{
    int arr[7] = {4, 6, 2, 7, 9, 0, 1};

    bubble(arr, 7);

    // Printing sorted array
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}