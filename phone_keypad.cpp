#include <iostream>
#include <vector>

using namespace std;

void solve(string digit, string output, int index, vector<string> &ans, string mapping[])
{
    // Base case
    if (index >= digit.length())
    {
        ans.push_back(output);
        return;
    }
    
    int number = digit[index] - '0'; // converting char to int
    string value = mapping[number];

    for (int i = 0; i < value.length(); i++)
    {
        output.push_back(value[i]);
        solve(digit, output, index + 1, ans, mapping);
        output.pop_back();
    }
}

int main()
{
    string digits = "23";
    vector<string> ans;
    
    string output = "";
    int index = 0;

    string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

    solve(digits, output, index, ans, mapping);

    // printing answer
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j];
        }
        cout << " ";
    }

    return 0;
}