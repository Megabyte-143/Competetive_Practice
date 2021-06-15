#include<iostream>
using namespace std;

int main()
{
   long long int n, k, c=0;
    cin>>n>>k;

    int t[n];

    for (int i = 0; i < n; i++)
    {
        cin>>t[i];
        
        if (t[i]%k==0)
        {
            c++;
        }
    }
    cout<<c<<endl;

    return 0;
    
    
}
