#include<iostream>
using namespace std;
int main(){
    int n,p,count = 0;
    cin >> n >> p;
    for (int i = 0 ; i<n ; i++){
        int d;
        cin >> d;
        if (d<p){
            ++count; 
        }
    }
    cout << count << endl;
}