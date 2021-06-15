#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    double a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int j = 0; j < n; j++)
    {
            for (int i = 0 ; i<n-1; i++)
        {
            if (a[i]<a[i+1])
            {
                double temp= a[i];
                a[i]= a[i+1];
                a[i+1]=temp;

            }   
        }
    }
    int c=0;
    for (int  i = 1; i < n; i++)
    {
        if(a[1]==a[i]&&a[0]!=a[i])
        c++;
    }
    cout<<c<<endl;
    return 0;
}