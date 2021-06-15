#include<iostream>
using namespace std;

int main(){

    int t;
    cin>>t;
    for (int i = 1; i <= t; i++)
    {
        int n,s=0;
        cin>>n;

        while(n>0){
            s= s + n%10;
            n=n/10;
        }

        cout<<s<<endl;

    }
    

    return 0;
}