#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;
    cin>>n;
    while(n--){
        cin>>s;
        cout<<s;
        reverse(s.begin(),s.end());
        cout<<s<<endl;
    }


}
