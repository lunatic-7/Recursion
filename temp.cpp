#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string to;
    to.push_back('a');
    to.push_back('b');
    to.pop_back();

    cout << to;
    return 0;
}