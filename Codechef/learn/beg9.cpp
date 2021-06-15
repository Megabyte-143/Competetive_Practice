#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    int l[t],p1[t],p2[t],player[t];
    for(int i=0;i<t;i++) 
    {
        l[i]=0;
        p1[i]=0;
        p2[i]=0;
        player[i]=0;
    }
    for(int i=0;i<t;i++) 
    {
        cin >> p1[i] >> p2[i];
        if(p1[i]>=p2[i]) 
        {
            l[i] = p1[i]-p2[i];
            player[i] = 1;
        }
        else 
        {
            l[i] = p2[i]-p1[i];
            player[i] = 2;
        }
    }
    int max=l[0],c=0;
    for(int i=1;i<t;i++) 
    {
        if(l[i]>=max)
        {
            max=l[i];
            c=i;
        }
    }
    cout << c << " " << max << endl;
    
    return 0;
}