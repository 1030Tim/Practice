#include<iostream>
using namespace std;
int main(){
    unsigned long long n,k;
    cin >> n;
    if (n%9 != 0)
    {
        k = n;
        k%=9;
        k = 9-k;
        cout << k+n << endl;
    }
    else{
        cout << n+9 << endl;
    }
    return 0;
    
}