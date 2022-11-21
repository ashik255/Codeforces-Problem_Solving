#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i;

    string str;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>str;
        int x,y;
        char a=str[0];
        for(i=0;i<n;i++)
        {
            if(str[i]>a)
            {
                a=str[i];
            }
        }
        x=a;
        y=x-96;
        cout<<y<<endl;

    }

}
