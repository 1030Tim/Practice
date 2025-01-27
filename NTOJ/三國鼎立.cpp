#include<iostream>
using namespace std;
int main(){
    unsigned long long a,b,c;
    unsigned long long size;
    unsigned long long count = 0;
    cin >> a >> b >> c;
    if (b>c) size = b;
    else size = c;

    if (size < a) size = a;

    if (size!=a) count+=a;
    if (size!=b) count+=b;
    if (size!=c) count+=c;

    if (count>=size) cout << "yes" << endl;
    else cout << "no" << endl;
    return 0;
}