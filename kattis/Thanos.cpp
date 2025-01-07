#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    for (int i = 0 ; i<n ;i++){
        long long p,r,f;
        int count = 0;
        cin >> p >> r >> f;
        for (long long j = p ; j<=f ; j*=r){
            ++count;
        }
        cout << count <<"\n";
    }

    

}