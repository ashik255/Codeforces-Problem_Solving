#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int j = 1; j < n; j++)
        {
            if (arr[j] % arr[0] != 0)
            {
                c += 1;
                break;
            }
        }
        if (c == 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}