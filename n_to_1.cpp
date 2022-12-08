#include <iostream>

using namespace std;

// Tail Recursion (jisme processing recursive relation se upr hoti hai)
void nto1(int n)
{
    // Base case
    if (n == 0)
    {
        return;
    }

    //Processing
    cout << n << "\n";

    // Recursive relation
    nto1(n - 1);
    
}

int main()
{
    int n;
    cin >> n;

    nto1(n);
    return 0;
}