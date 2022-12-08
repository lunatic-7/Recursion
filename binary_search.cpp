#include <iostream>

using namespace std;

void print(int arr[], int s, int e)
{
    for (int i = s; i <= e; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

bool binarySearch(int arr[], int s, int e, int key)
{
    // Only for me (for unsderstanding)
    print(arr, s, e);
    // Base case
    // element not found
    if (s > e)
    {
        return false;
    }

    int mid = s + (e - s)/2;
    // Only for me (for unsderstanding)
    cout << "Mid term is: " << arr[mid] << "\n\n";

    // element found
    if (arr[mid] == key)
    {
        return true;
    }

    if (arr[mid] < key)
    {
        return binarySearch(arr, mid + 1, e, key);
    }
    else
    {
        return binarySearch(arr, s, mid - 1, key);
    }
}

int main()
{
    int arr[7] = {3, 6, 8, 19, 20, 27, 33};
    int size = sizeof(arr)/ sizeof(int);
    int key = 6;

    bool ans = binarySearch(arr, 0, size - 1, key);

    if (ans)
    {
        cout << key << " is present" << "\n"; 
    }
    else
    {
        cout << key << " is absent" << "\n"; 
    }
    return 0;
}