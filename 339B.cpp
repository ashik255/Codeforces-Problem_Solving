#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int x = 1;
    long long int ans = 0;
    for (int i = 0; i < b; i++)
    {
        int z;
        cin >> z;
        if (z >= x)
        {
            ans += z - x;
        }
        else
        {
            ans += a - (x - z);
        }
        x = z;
    }
    cout << ans << endl;
}