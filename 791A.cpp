#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, a, b;
    cin >> a >> b;
    for (i = 1;; i++)
    {
        a *= 3;
        b *= 2;
        if (a > b)
            break;
    }
    cout << i << endl;
}