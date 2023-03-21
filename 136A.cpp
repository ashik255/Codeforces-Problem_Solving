#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;
    int arr[a];
    for (int i = 0; i < a; i++)
        cin >> arr[i];
    for (int j = 1; j <= a; j++)
    {
        for (int k = 0; k < a; k++)
        {
            if (arr[k] == j)
                cout << k + 1 << ' ';
        }
    }
}