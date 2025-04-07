#include<iostream>
using namespace std;

signed main(){
    int x;
    cin >> x;
    int arr[x];
    for (int i = 0 ; i<x ; i++){
        int k; cin >> k;
        arr[i] = k;
    }
    for (int i = 0 ; i<x ; i++){
        for (int j = 0 ; j<x ; j++){
            if (abs(arr[i]-arr[j])%200 == 0){
                cout << i+1 << "," << j+1 << "\n";
            }
        }
    } 
}