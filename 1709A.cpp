#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int key;
        cin >> key;
        int arr[4];
        for (int i = 1; i <= 3; i++)
            cin >> arr[i];

        if (arr[key] == 0)
            cout << "NO" << endl;
        else if (arr[arr[key]] == 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}