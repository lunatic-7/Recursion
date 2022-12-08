#include <iostream>
#include <vector>

using namespace std;

void solve(string str, string output, int index, vector<string> &ans)
{
    // Base case
    if (index >= str.length())
    {
        if (output.length() > 0)  // If we don't want to take empty string case
        {
            ans.push_back(output);
        }
        
        return;
    }

    // Exclude
    solve(str, output, index + 1, ans);

    // Include
    int element = str[index];
    output.push_back(element);
    solve(str, output, index + 1, ans);
}

int main()
{
    string str = "aaa";
    vector<string> ans; // 2D dynamic array
    string output;      // an empty array for now {}
    int index = 0;
    solve(str, output, index, ans);

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