#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, count = 0;
    cin >> t;
    int arr[t];
    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
    }
    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < t; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            count++;
        }
        if (min > arr[i])
        {
            min = arr[i];
            count++;
        }
    }
    cout << count;
}