#include<iostream>
using namespace std;

signed main(){
    int n;
    cin >> n;
    int a[n];

    for (int i = 0 ; i<n ; i++){
        int j ;
        cin >> j ;
        a[i] = j;
    }

    // comput of answer program

    int count = 0 ; 
    for (int i = 0 ; i<n-1 ; i++){ // O(n)^2
        for (int j = i+1 ; j<n ; j++){
            if (abs(a[i]-a[j])%200 == 0){
                ++count;
            }
        }
    }
    cout << count << endl;
    return 0;
}