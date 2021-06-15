#include<iostream>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    
    for (int i = 1; i <= t; i++)
    {
        long long int n,c=0;
        cin>>n;
        if(n<=9&&n>=0)
        {
            int a;
            while (n!=0)
            {
                a=n%10;
                n=n/10;
                if (a==4)
                {
                    c++;
                }
            }
            cout<<c<<endl;
        }
        else if (n>=10)
        {
            int a;
            while (n!=0)
            {
                a=n%10;
                n=n/10;
                if (a==4)
                {
                    c++;
                }
            }
            cout<<c<<endl;
        }
               
    }
    

    return 0;
}