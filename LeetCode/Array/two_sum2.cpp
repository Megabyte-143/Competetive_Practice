#include<iostream>
#include<vector>
using namespace std;

std::vector<int >sumf(int n,int k){
    int a[n];
    std::vector<int > sum;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int c = 0;int x,y;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if ((a[i] + a[j]) == k)
            {
                x=i,y=j;
                c++;
                break;
            }
        }
        if (c > 0)
            break;
    }
    sum.push_back(x);
    sum.push_back(y);
    return sum;
}

int main(){
    int n;cin>>n;
    int k ;cin>>k;
    sumf(n,k);
    for (int i = 0; i < n; i++)
    {
        cout<<sumf[i];
    }
    
}