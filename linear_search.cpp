#include <iostream>

using namespace std;

bool linearSearch(int arr[], int size, int key)
{
    // Base case
    if (size == 0)
    {
        return false;
    }
    
    if (arr[0] == key)
    {
        return true;
    }
    
    // Recursive relation
    int remainingPart = linearSearch(arr + 1, size - 1, key);
    return remainingPart;
}

int main()
{
    int arr[7] = {3, 6, 8, 29, 18, 7, 33};
    int size = sizeof(arr)/ sizeof(int);
    int key = 33;

    bool ans = linearSearch(arr, size, key);

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