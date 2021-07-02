#include <iostream>
using namespace std;
class Solution
{
public:
    int reverse(int n)
    {
        int a;
        int r = 0;
        while (n != 0)
        {
            a = n % 10;
            n /= 10;
            if (r > INT_MAX / 10 || (r == INT_MAX / 10 && a > 7))
                return 0;
            if (r < INT_MIN / 10 || (r == INT_MIN / 10 && a < -8))
                return 0;
            r = r * 10 + a;
        }
        return r;
    }
};

int main()
{
    int n;
    cin >> n;
    Solution reverse(n);
    cout <<  << endl;
    return 0;
}