#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for (int i = 1; i <= t; i++)
    {
        int n,g,p;
        cin>>g>>p;
        cin>>n;
        int a[n];
        int b[n];
        int s1=0,s2=0;
        int c;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i]>>b[i]; 
            s1+= a[i];
            s2+= b[i];         
        }
        if (s1>s2)
        {
            if (g>p)
            {
                c=s1*p + s2*g;
            }
            else 
            {
                c=s1*g + s2*p;
            }
        }
        else
        {
            if (g>p)
            {
                c= s2*p + s1*g;
            }
            else{
                c= s2*g + s1*p;
            }            
        }
        cout<<c<<endl;
    }  
    return 0;
}