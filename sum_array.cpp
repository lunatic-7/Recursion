#include <iostream>

using namespace std;

int arrSum(int arr[], int size)
{
    // Base case
    if (size == 0)
    {
        return 0;
    }
    if (size == 1)
    {
        return arr[0];
    }
    
    int remainingPart = arrSum(arr + 1, size - 1);
    int sum = arr[0] + remainingPart;
    
    return sum;
    
}

int main()
{
    int arr[7] = {3, 5, 2, 7, 8, 9, 6};
    int size = sizeof(arr)/ sizeof(int);

    int ans = arrSum(arr, size);

    cout << ans << "\n";
    return 0;
}