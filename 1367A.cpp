#include <bits/stdc++.h>
using namespace std;

void EvenArray()
{
    int n;
    cin >> n;
    int count1 = 0, count2 = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x % 2 != i % 2)
        {
            if (i % 2 == 0)
            {
                count1++;
            }
            else
            {
                count2++;
            }
        }
    }

    if (count1 != count2)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << count1 << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        EvenArray();
    }
}