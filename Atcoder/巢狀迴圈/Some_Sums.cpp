#include<iostream>
using namespace std;
int main(){
    int n,a,b;
    int count = 0;
    cin >> n;
    cin >> a >> b;
    b+=1;
    for (int i = 0 ; i<n ; i++){
        for (int j = a ; j<b ; j++){
            count += j;
            cout << j <<"\n";
        }
        a+=9;
        b+=9;
        if (a>=n || b>=n){
            break;
        }
    }
        
    cout << (count)+n << endl;
}