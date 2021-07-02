#include<iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t!=0){
        
        int g,c;
        cin>>g>>c;

        double h=((c*c)/(2*g));
        cout<<int(h)<<endl;
        
        
        t--;
    }
}