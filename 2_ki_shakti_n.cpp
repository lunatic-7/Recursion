#include <iostream>

using namespace std;

int shakti(int n)
{
    // Base case
    if (n == 0)
    {
        return 1;
    }
    
    // Recursive relation
    // fun(n) = 2 * fun(n - 1)
    int chotiProblem = shakti(n - 1);
    int badiProblem = 2 * chotiProblem;

    return badiProblem;
}

int main()
{
    int n;
    cin >> n;

    cout << shakti(n) << "\n"; 
    return 0;
}