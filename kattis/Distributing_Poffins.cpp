#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int ans = 0;
    if (m%n!=0){
        ans = 1;
    }
    cout << ans << endl;
    return 0;
}