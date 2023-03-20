#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int up = 0, lo = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (isupper(str[i]))
            up++;
        else
            lo++;
    }
    if (up > lo)
    {
        for (int i = 0; i < str.size(); i++)
        {
            str[i] = toupper(str[i]);
        }
        cout << str << endl;
    }
    if (up < lo)
    {
        for (int i = 0; i < str.size(); i++)
        {
            str[i] = tolower(str[i]);
        }
        cout << str << endl;
    }
    if (up == lo)
    {
        for (int i = 0; i < str.size(); i++)
        {
            str[i] = tolower(str[i]);
        }
        cout << str << endl;
    }
}