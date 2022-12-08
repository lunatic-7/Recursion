#include <iostream>
#include <string>

using namespace std;

void revSt(string &S, int i, int j)  // &S because we need to pass the address of original string
{
    // Base case
    while (i > j)
    {
        return;
    }

    swap(S[i], S[j]);
    i++;
    j--;
    
    // Recursive call
    revSt(S, i, j);
}

int main()
{
    string S;
    cin >> S;
    int i = 0;
    int j = S.length() - 1;

    cout << "Before: " << S << "\n";

    revSt(S, i, j);

    cout << "After: " << S << "\n";
    return 0;
}