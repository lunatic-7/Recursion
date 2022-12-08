#include <iostream>

using namespace std;

void desr(int src, int dest)
{
    cout << "Source: " << src << " Destination: " << dest << "\n";
    // Base case
    if (src == dest)
    {
        cout << "Phuch gya!"<< "\n";
        return;
    }
    
    // Processing
    src++;

    // Recursive relation
    desr(src, dest);
}

int main()
{
    int src, dest;
    cin >> src >> dest;

    desr(src, dest);
    return 0;
}