#include<iostream>
using namespace std;

signed main(){
    int n;
    cin >> n;
    int ary[n];

    for (int i = 0 ; i<n ; i++){
        int k;
        cin >> k;
        ary[i] = k;
    }
    for (int i = 0 ; i<n ; i++){
        for (int j = 0 ; j<n ; j++){
            if ((ary[j]-ary[i])%200 == 0){

            }
        }
    }
}