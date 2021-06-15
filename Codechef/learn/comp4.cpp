#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int a[7];
    for(int j=1 ; j<=t; j++)
    {
        int s=0;
        for (int i = 0; i < 7; i++)
        {
            cin>>a[i];
            s= s+ a[i];
        }
        cout<<floor(s/7)<<endl;
    }
    return 0;
}