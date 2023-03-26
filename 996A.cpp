#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int res = n / 100;
    int x = n % 100;

    res += x / 20;
    x = x % 20;

    res += x / 10;
    x = x % 10;

    res += x / 5;
    x = x % 5;

    res += x / 1;
    cout << res;
}