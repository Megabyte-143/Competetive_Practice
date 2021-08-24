#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t != 0)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        double p = 0.0;
        int c = 0, tc = 1;
        for (int i = 0; i < n; i++)
        {
            double x, r;
            if (c < k)
            {
                r = pow(2.0, p);
                x = a[i] ^ (int)r;
                if(x<a[i]){
                    a[i]=x;
                    c++;
                }
                else{
                    if(a[i]==0){
                        continue;
                    }
                    else{
                        p++,i=0,c=0;
                        tc++;
                        continue;
                    }
                }
            }
            else{
                r = pow(2.0, p);
                x = a[i] ^ (int)r;
                if(x<a[i])
                {tc++;
                c=0,i=0;
                p++;
                continue;}
                else{
                    if(a[i]==0){
                        continue;
                    }
                    else{
                        p++,i=0,c=0;
                        tc++;
                        continue;
                    }
                }
            }
            
        }
        tc++;
        cout<<tc<<endl;
        t--;
    }
}