#include <iostream>

using namespace std;

int stairs(int n)
{
    // Base case
    // Only one way to reach the first stair (you can jump) as you are already stading on it.
    if (n == 0)
    {
        return 1;
    }
    // Only one way to reach the second stair (jump from 1).
    if (n == 1)
    {
        return 1;
    }

    // Recursive relation
    // You came from previous stair
    int penultimate = stairs(n - 1);
    // You came from stais before the previous stair
    int antipenultimate = stairs(n - 2);

    return penultimate + antipenultimate;
}

int main()
{
    int n;
    cin >> n;

    cout << stairs(n) << "\n";
    return 0;
}