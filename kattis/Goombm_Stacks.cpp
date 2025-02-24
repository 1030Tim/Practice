#include<iostream>
using namespace std;
signed main(){
    int n,ord = 0;
    bool flag = 0;
    cin >> n;
    for (int i = 0 ; i<n ; i++){
        int g,b;
        cin >> g >> b;
        if (g+ord>=b){
            ord += g;
        }
        else{
            flag = 1;
            break;
        }
    }
    if (flag) cout <<"impossible\n";
    else cout << "possible\n";
    return 0; 
}