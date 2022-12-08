#include <iostream>
#include <vector>

using namespace std;

void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>> &ans)
{
    // Base case
    if (index >= nums.size())
    {
        ans.push_back(output);
        return;
    }

    // Exclude
    solve(nums, output, index + 1, ans);

    // Include
    int element = nums[index];
    output.push_back(element);
    solve(nums, output, index + 1, ans);
}

int main()
{
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> ans; // 2D dynamic array
    vector<int> output;      // an empty array for now {}
    int index = 0;
    solve(nums, output, index, ans);

    // printing answer
    for (int i = 0; i < ans.size(); i++)
    {
        cout << "[";
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j];
        }
        cout << "]" << " ";
    }
    return 0;
}