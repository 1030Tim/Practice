#include<iostream>
using namespace std;


signed main(){
    int x,y;
    cin >> x >> y;
    int ans_a,ans_b,ans_c;
    for (int i = 0 ; i<x ; i++){

        for (int j = 0 ; j<x ; j++){
            ans_c = (x-i+j);
            if (i*10000+j*1000+ans_c*1000 == x){
                ans_a = i;
                ans_b = j;
                break;
            }
        }
    }
    cout << ans_a <<" " << ans_b <<" "<< ans_c <<endl;
}