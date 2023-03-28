#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int count = 0, x = 0;
    for (int i = 0; i < n; i++)
    {
        if (x <= arr[i])
        {
            x += arr[i];
            count++;
        }
    }
    cout << count << endl;
}