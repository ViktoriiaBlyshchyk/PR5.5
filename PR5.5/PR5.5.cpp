#include <iostream> 
#include <cmath> 

using namespace std;
int f(int n, int level, int& depth)
{
    if (level > depth)
        depth = level;
    if (n == 0)
        return 0;
    else
        return n % 10 + f(n / 10, level + 1, depth);
}
int main()
{
    int n, depth;

    cout << "n = "; cin >> n;
    cout << "f(n) = " << f(n, 1, depth) << endl;
    cout << "Depth = " << depth << endl;
    return 0;
}
