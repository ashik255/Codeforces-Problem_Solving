#include <iostream>
using namespace std;

int main ()
{
    int x,a,b,c,n(0);
    cin >> x;
    while (x--)
    {
        cin>>a>>b>>c;
        if(a+b+c >= 2)
        {
            n+=1;
        }
    }
    cout<< n << endl;
    return 0;


}
