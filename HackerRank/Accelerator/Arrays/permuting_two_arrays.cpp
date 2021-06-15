#include<iostream>
using namespace std;

int main(){
    int q;
    for (int i = 0; i < q; i++)
    {
        int n,k;
        cin>>n,k;
        int a[n],b[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            cin>>b[i];
        }
        for (int i = 0; i < n; i++)
        {int mini=0;
            for (int j = 0; j < n; j++)
            {
                if (a[i]+b[j]>=k)
                {
                    mini= min(mini,b[j]);
                    
                }
                
            }
            
            b[i]=mini;
        }
        
    }
    
}