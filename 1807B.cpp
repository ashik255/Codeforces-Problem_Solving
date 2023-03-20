#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, n, sum = 0, count = 0;
        cin >> x;
        for (int i = 0; i < x; i++)
        {
            cin >> n;
            if (n % 2 == 0)
                sum += n;
            else
                count += n;
        }
        if (sum > count)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}