#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,a,b,c,d,x,y;
    cin>>t;
    while(t--){
    cin>>a>>b>>c>>d;
        x=max(a,b);
        y=max(c,d);
        if( x+y>a+b && x+y>c+d){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }



}


