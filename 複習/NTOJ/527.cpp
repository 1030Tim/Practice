#include<iostream>
using namespace std;
signed main(){
    long long n,k;
    cin >> n;
    k = n;
    if (k%9!=0){
        k = 9-(k%9);
        n+=k;
    }
    else{n+=9;}
    cout << n << endl;
    return 0;
}