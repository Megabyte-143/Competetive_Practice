#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for (int i = 1; i <= t; i++)
    {
        long long int l;
        double x,y;
        int cost;
        cin>>l;
        cin>>x>>y;
        if (x<(y/2))
        {
            cost= x*l;
        }
        else if (x>=(y/2))
        {
            if (l%2==0)
            {
            cost= y * (l/2);
            }
            else
            cost= (y * ((l-1)/2)) + x;
        }
        cout<<cost<<endl;
    }        
    return 0;
}