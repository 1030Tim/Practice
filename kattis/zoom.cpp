#include<iostream>
using namespace std;
signed main(){
    int k,n;
    cin >> k >> n;
    int ary[k];
    for (int i = 0 ; i<k ; i++){
        int k;
        cin >> k;
        ary[i] = k;
    }
    int point = -1;
    while (point < k){
        point+=n;
        if (point<k) 
            cout << ary[point] << " ";
        else return 0;
    }
}