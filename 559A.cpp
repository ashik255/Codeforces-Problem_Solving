#include <iostream>
using namespace std;

int main() {
    int a1,a2,a3,a4,a5,a6,x,y;
    cin>>a1>>a2>>a3>>a4>>a5>>a6;
    x=(a1+a2+a3)*(a1+a2+a3);
    y=(a1*a1)+(a3*a3)+(a5*a5);
    cout<<(x-y)<<endl;
    return 0;
}
