#include<iostream>
using namespace std;

int main(){
    
    int t;
    cin>>t;

    if(t>=1&&t<=100)
    {
        for (int i = 1; i <= t; i++)
        {
            int n;
            cin>>n;
            if(n>=1 && n<=100)
            {
                int f=1;
                for (int i = 1; i <= n; i++)
                {   
                    f=f*i;
                }
                cout<<f<<endl;
            
                
            }
        }    
    }
    
    return 0;
}