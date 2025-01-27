#include<iostream>
using namespace std;
int main(){
    int n;
    int count = 0;
    cin >> n;
    for (int i = 0; i<n ; i++){
        int a,b;
        cin >> a >> b;
        if (count+a >= b){
            count += a;
        }
        else{
            cout << "impossible"<<endl;
            return 0;
        }
    }
    cout << "possible" << endl;
    return 0;
}