#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i = 1,j = 0,a = 1;
    while (i<=n){
        j = 0;
        while (j<=n-1-i){
            cout <<" ";
            j++;
        }
        j = 0;
        while (j<a){
            cout <<"*";
            j++;
        }
        a+=2;
        i++;
        cout <<"\n";
    }
    
}