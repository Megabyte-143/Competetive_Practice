#include <iostream>
using namespace std;
int *reverse(int n)
{
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n-1 ; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            int temp = a[j];
            a[j] = a[j + 1];
            a[j + 1] = temp;
        }
    }

    return a;
}

int main()
{
    int n;
    cin >> n;
    int *ptr = reverse(n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]);
    }

    return 0;
}