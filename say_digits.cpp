#include <iostream>
#include <vector>

using namespace std;

void breakDigits(int n, vector<int> &ans)
{
    // Base case
    if (n == 0)
    {
        return;
    }

    // Recursive relation
    breakDigits(n / 10, ans);
    ans.push_back(n % 10);    
}

void sayDigits(vector<int> &digits, string arr[])
{
    for (int i = 0; i < digits.size(); i++)
    {
        cout << arr[digits[i]] << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    vector <int> digits;
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    breakDigits(n, digits);
    sayDigits(digits, arr);

    return 0;
}