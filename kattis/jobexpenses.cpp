#include<iostream>
using namespace std;
signed main(){
    int n,count=0;
    cin >> n;
    for (int i = 0 ; i<n ; i++){
        int d;
        cin >> d;
        if (d<0){
            count+=abs(d);
        }
    }
    cout << count << endl;
}