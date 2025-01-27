#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int count = 0;
    int flag = 0;
    for (int i = 0; i<n ; i++){
        int gi,bi;
        cin >> gi >> bi;
        if (i!=0 && count!=(gi+bi) ){
            cout << "impossible"<<endl;
            flag = 0;
            break;
        }
        count = (gi+bi);
    if (flag){
        cout << "possible" << endl;
    }
}
}