#include <iostream>
#include<vector>
using namespace std;

struct two_sum
{
    int n1;
    int n2;
};


two_sum sum(int n, int k)
{
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int c = 0;int x,y;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if ((a[i] + a[j]) == k)
            {
                x=i,y=j;
                c++;
                break;
            }
        }
        if (c > 0)
            break;
    }
    two_sum sum ={x,y};
    return sum; 
}

int main()
{
    int n;
    cin >> n;

    int k;
    cin >> k;

   cout<<
    
   
    return 0;
}