#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t!=0)
    {
        int d,x,y,z;
        cin>>d>>x>>y>>z;
        int w1,w2,mW;
        w1=7*x;
        w2=(d*y)+((7-d)*z);
        mW=max(w1,w2);
        cout<<mW<<endl;


        t--;
    }
    
}