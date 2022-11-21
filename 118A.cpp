#include <iostream>
using namespace std;

int main(){
    string s,result;
    cin>>s;
    int x,i,n;
    x=s.length();
    for(i=0;i<x;i++){
    char n=tolower(s[i]);
      if(n=='a' || n=='e' || n=='i'||n=='o'||n=='u' || n='y'){
        continue;
      }
      else{
       cout<<"."<<n;
      }
    }
        cout<<result;
        return 0;
}


