#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i = 0; i<n ; i++){
        int d;cin >> d;
        if ((d+1)%2==0) cout << d << " is odd\n";
        else cout << d <<" is even\n";
    }
    return 0;
}