#include<iostream>
using namespace std;
signed main(){
    string s;
    cin >> s;
    int count = 0;
    for (int i = 0; i<3 ; i++){
        int k = s[i]-'0';
        if (k == 5){
            ++count;
        }
    }
    if (count == 3){
        cout << 1 << endl;
    }
    else{
        cout << 0 << endl;
    }
    return 0;
}