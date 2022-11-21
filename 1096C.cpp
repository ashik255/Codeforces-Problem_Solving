#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
            int ang,i,x;
            cin>>ang;
            for(i=3;i<=2000;i++){
                if((i*ang)%180==0){
                  x=(i*ang)/180;
                  if(x>=1 and x<=i-2){
                    cout<<i<<endl;
                    break;
                  }
                }
            }
    }
    return 0;
}

