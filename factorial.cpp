#include <iostream>

using namespace std;

int factorial(int n)
{
    // Base case
    if (n == 0)
    {
        return 1;
    }
    
    // Recursive relation
    // fact(n) = n - fact(n-1)
    int chotiProblem = factorial(n - 1);
    int badiProblem = n * chotiProblem;

    return badiProblem;

    // we can write the above three lines like this as well
    // return n * factorial(n - 1);
}

int main()
{
    int n;
    cin >> n;

    cout << factorial(n) << "\n"; 
    return 0;
}