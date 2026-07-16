#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        if(i>0)
        {
            a[i] += a[i-1];
        }
    }
    int m;
    cin >> m;
    while(m--)
    {
        int x;
        cin >> x;
        int l=0, r = n-1;
        while(l < r)
        {
            int mid = (l+r)/2;

            if(a[mid] >= x)
            {
                r = mid;
            }
            else
            {
                l = mid+1;
            } 
        }
        cout << l+1 << endl;
    }
    return 0;
}