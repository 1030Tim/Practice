#include<iostream>
using namespace std;

int f91(int n){
    if (n>=101) return n-10;
    else{
        return f91(f91(n+11));
    }
}

signed main(){
    int n;
    while (cin >> n && n!=0){
        cout << "f91(" << n << ") = " << f91(n) << "\n";
    }
    return 0;
}