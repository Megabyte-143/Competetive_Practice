#include <iostream>
using namespace std;

int fun(int n)
{
    static int y;
    if (n > 0)
    {
        y++;
        return fun(n - 1) + y;
    }
    return 0;
}

int main()
{
    int x;
    x = fun(5);
    cout << x;
    return 0;
}