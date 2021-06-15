#include<iostream>
using namespace std;

int main()
{
    int N;
    cin>>N;
    int a[N];
    for (int i = 0; i < N; i++)
    {
        cin>>a[i];
    }
    int A;
    cin>>A;
    if(A>0 && A<30001 && N>0 && N<51)
    {
        for (int i = 0; i < N-1; i++)
        {
            if(a[i]>a[i+1])
            {
                int temp= a[i];
                a[i]=a[i+1];
                a[i+1]= temp;
            }
        }
        int s=0;
        for (int i = 0; i < N; i++)
        {   
            if(A>=s || s> A)
            {
                s=s+a[i];
            }
        }
        float bill;
        if(s>=A)
        {
            bill= s- (s*0.3);
            cout<<bill<<endl;
        }
        else
        {
            cout<<"You cannot avail this offer"<<endl;
        }
    }
    
    return 0;
}