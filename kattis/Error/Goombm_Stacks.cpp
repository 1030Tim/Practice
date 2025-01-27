#include<iostream>
using namespace std;
int main(){
    int n,count = 1;
    cin >> n;
    for (int i = 0 ; i<n ; i++){
        int a,b;
        cin >> a >> b;
        if (a>b){
            cout << "impossible" << endl;
            count = 0;
            break;
        }
    }
    if (count){
        cout << "possible"<<endl;
    }
    return 0;
}