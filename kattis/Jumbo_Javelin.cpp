#include<iostream>
using namespace std;
int main(){
    int n,sun = 0;
    cin >> n;
    for (int i = 0; i<n ; i++){
        int d;cin >> d;

        sun += d;
    }
    sun -= (n-1);
    cout << sun << endl;
    return 0; 
}