#include<iostream>
using namespace std;
signed main(){
    long long x0,x1,x2,x3;
    cin >> x0 >> x1 >> x2 >> x3;

    if (x2<x1 && x2>x0){
        cout << "yes" << endl;
    }
    else if (x2<x0 && x3>x0){
        cout << "yes" << endl;
    }
    else {
        cout << "no" << endl;
    }
    return 0;
}