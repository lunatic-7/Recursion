#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print(vector<string> ans)
{
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j];
        }
        cout << " ";
    }
}

bool isSafe(int x, int y, int n, vector<vector<int>> visited, vector<vector<int>> &m)
{
    if ((x >= 0 && x < n) && (y >= 0 && y < n) && visited[x][y] == 0 && m[x][y] == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void solve(vector<vector<int>> &m, int n, vector<string> &ans, int x, int y, vector<vector<int>> visited, string path)
{
    // You have reached x, y here

    // Base case
    if (x == n - 1 && y == n - 1)
    {
        ans.push_back(path);
        return;
    }

    visited[x][y] = 1;

    // 4 choices - D, L, R, U

    // Down
    int newx = x + 1;
    int newy = y;
    if (isSafe(newx , newy, n, visited, m))
    {
        path.push_back('D');
        solve(m , n, ans, newx, newy, visited, path);
        path.pop_back();
    }
    
    // Left
    newx = x;
    newy = y - 1;
    if (isSafe(newx , newy, n, visited, m))
    {
        path.push_back('L');
        solve(m , n, ans, newx, newy, visited, path);
        path.pop_back();
    }
       
    // Right
    newx = x;
    newy = y + 1;
    if (isSafe(newx , newy, n, visited, m))
    {
        path.push_back('R');
        solve(m , n, ans, newx, newy, visited, path);
        path.pop_back();
    }

    // Up
    newx = x - 1;
    newy = y;
    if (isSafe(newx , newy, n, visited, m))
    {
        path.push_back('U');
        solve(m , n, ans, newx, newy, visited, path);
        path.pop_back();
    }
    
    visited[x][y] = 0;
}

int main()
{
    int n = 4; // 4 x 4 matrix
    vector<vector<int>> m = {{1, 0, 0, 0},
                             {1, 1, 0, 1},
                             {1, 1, 0, 0},
                             {0, 1, 1, 1}};

    vector<string> ans;

    if (m[0][0] == 0)
    {
        print(ans);
    }

    // Starting points
    int srcx = 0;
    int srcy = 0;

    // Creating a visited vector
    vector<vector<int>> visited = m;
    // Initializing all the values of visited vector with 0
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            visited[i][j] = 0;
        }
    }

    string path = "";
    solve(m, n, ans, srcx, srcy, visited, path);

    // Sorting the ans we get in lexographical order
    sort(ans.begin(), ans.end());

    // Printing answer
    print(ans);

    return 0;
}