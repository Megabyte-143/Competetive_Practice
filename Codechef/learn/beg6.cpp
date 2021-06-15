#include<iostream>
using namespace std;

int main() {
    long long int t;
    scanf("%lld", &t);
    for (int i = 1; i <= t; i++)
    {
        long long int n;
        scanf("%lld", &n);
        int a[n];
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[j]);
        } 
            for (int l = 0; l < n-1; l++)
            {
                if (a[l]>=a[l+1])
                {
                    int temp= a[l+1];
                    a[l+1]= a[l];
                    a[l]=temp;
                    l=-1;
                }
            }
            for(int k=0;k<n;k++) {
                cout << a[k] << endl;
            }
    }
    return 0;
}