#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b, arr[300], count = 0;
    cin >> n >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    cin >> b;
    for (int i = a; i < a + b; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + (a + b));
    for (int i = 0; i < a + b; i++)
    {
        if (arr[i] != arr[i + 1])
            count++;
    }
    if (count == n)
        cout << "I become the guy." << endl;
    else
        cout << "Oh, my keyboard!" << endl;
}