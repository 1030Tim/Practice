#include<iostream>
using namespace std;
signed main(){
    long long q,p,sun;
    cin >> q >> p;
    sun = abs(q-p)/2;
    cout << min(q,p)+sun << endl;

}