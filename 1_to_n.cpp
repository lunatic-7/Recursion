#include <iostream>

using namespace std;

// Head recursion
void oneton(int n)
{
    // Base case
    if (n == 0)
    {
        return;
    }
    
    // Recursive relation
    oneton(n - 1);

    // Processing
    cout << n << "\n";
}

int main()
{
    int n;
    cin >> n;

    oneton(n);
    return 0;
}