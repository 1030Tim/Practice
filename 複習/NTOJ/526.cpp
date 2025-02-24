#include<iostream>
using namespace std;
signed main(){
    int n,ans = 0;
    int d = 100;
    cin >> n;
    for (int i = 0 ; i<4 ; i++){
        ans+=(n%10)*d;
        n/=10;
        d/=10;
    }  
    cout << ans << endl;
    return 0;
}