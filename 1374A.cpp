#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int x, y, n, k, z;
        cin >> x >> y >> n;
        z = (n - y) / x;
        k = z * x + y;
        cout<<k<<endl;
    }
}