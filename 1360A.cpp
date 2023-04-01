#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, k, i;
        cin >> n >> k;
        long long int ans = n;
        for (i = 1; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                if (i <= k)
                {
                    ans = min(ans, n / i);
                }
                if (n / i <= k)
                {
                    ans = min(ans, i);
                }
            }
        }
        cout << ans << endl;
    }
}