#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int num, count = 0;
        cin >> num;
        string s;
        cin >> s;
        for (int i = 0; i < num; i += 2)
        {
            for (int j = 1; j < num; j += 2)
            {
                if (s[i] == s[j])
                    count += 1;
            }
        }
        if (count >= 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}