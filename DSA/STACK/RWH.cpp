// Max Area Reactangle in Binary Matrix

#include <iostream>
#include <math.h>
#include <stack>
#include <vector>
#include<algorithm>

using namespace std;

vector<int> nsl(int arr[], int n)
{

    vector<int> l;
    stack<pair<int, int> > s;
    int pI = -1;

    for (int i = 0; i < n; i++)
    {
        if (s.size() == 0)
        {
            l.push_back(pI);
        }
        else if (s.size() > 0 && s.top().first < arr[i])
        {
            l.push_back(s.top().second);
        }
        else if (s.size() > 0 && s.top().first > arr[i])
        {
            while (s.size() > 0 && s.top().first > arr[i])
            {
                s.pop();
            }
            if (s.size() == 0)
            {
                l.push_back(pI);
            }
            else
                l.push_back(s.top().second);
        }
        s.push({arr[i], i});
    }
    return l;
}

vector<int> nsr(int arr[], int n)
{

    vector<int> r;
    stack<pair<int, int> > s;
    int pI = 7;

    for (int i = n - 1; i >= 0; i--)
    {
        if (s.size() == 0)
        {
            r.push_back(pI);
        }
        else if (s.size() > 0 && s.top().first < arr[i])
        {
            r.push_back(s.top().second);
        }
        else if (s.size() > 0 && s.top().first > arr[i])
        {
            while (s.size() > 0 && s.top().first > arr[i])
            {
                s.pop();
            }
            if (s.size() == 0)
            {
                r.push_back(pI);
            }
            else
                r.push_back(s.top().second);
        }
        s.push({arr[i], i});
    }
    
    reserve(r.begin(), r.end());
    
    return r;
}

int MAH(vector<int> v)
{
    vector<int> left = nsl(v, v.size());
    vector<int> right = nsr(arr, n);
    int w[n];
    int a[n];
    int maxA = 0;

    for (int i = 0; i < n; i++)
    {
        w[i] = right[i] - left[i] - 1;
    }
    for (int i = 0; i < n; i++)
    {
        a[i] = w[i] * arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        maxA = max(maxA, a[i]);
    }
    return maxA;
}

int maxArea(int* arr[], int n, int m)
{
    vector<int> v;
    for (int j = 0; j < m; j++)
    {
        v.push_back(arr[0][j]);
    }

    int mx =MAH(v);
    
}