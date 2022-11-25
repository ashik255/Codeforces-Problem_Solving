#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,i;
        cin>>x;
        if(x%2!=0){
            for(i=0;i<x;i++){
                cout<<7<<' ';
            }
        }
        else{
            cout<<6<<' '<<2<<' ';
            for(i=0;i<x-2;i++){
                cout<<4<<' ';
            }
            cout<<endl;
        }
    }


}
