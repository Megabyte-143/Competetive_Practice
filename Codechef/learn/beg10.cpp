#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    for (int i = 1; i <= t; i++)
    {
        long long int n;
        cin>>n;
        cout<<((n/2)+1)<<endl;
    }
    
    return 0;
}