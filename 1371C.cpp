#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b, m, n;
        cin >> a >> b >> m >> n;
        if (a > b)
            swap(a, b);

        if (a + b < m + n)
            cout << "NO" << endl;
        else if (a < n)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}