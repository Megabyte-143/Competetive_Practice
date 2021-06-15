#include<iostream>
using namespace std;

int main() {
    long long int t;
    cin >> t;
    for(long long int i=0;i<t;i++) {
        long long int a=0,f=0,l=0;
        cin >> a;
        l=a%10;
        while(a!=0) {
            f=a%10;
            a=a/10;
        }
        cout << f+l << endl;
    }
    return 0;
}