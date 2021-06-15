#include<iostream>
using namespace std;

float roundf(float r)
{
    float value= 0.0;
    value=(int)(100*r + 0.5);
    return((float)value/100);
}

int main()
{
    int t;
    cin>>t;
    for (int i = 1; i <= t; i++)
    {
        float k1, k2, k3, v, s, ts;
        cin>>k1>>k2>>k3>>v;

        s= k1*k2*k3*v;
        ts= 100/s;

        if (roundf(ts)<(9.58))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }  
    }
    return 0;
}