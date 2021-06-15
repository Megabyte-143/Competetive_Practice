#include <iostream>

using namespace std;

int main()
{

    int n, d;
    cin >> n >> d;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    while (d != 0)
    {
        for (int i = 0; i < n - 1; i++)
        {

            int temp = a[i];
            a[i] = a[i + 1];
            a[i + 1] = temp;
        }

        d--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i]<<" ";
    }
    return 0;
}