#include<iostream>
using namespace std;
signed main(){
    int n = 5,m = 6,count,flog = 0;
    int arr[n][m];
    for (int i = 0; i<n ; i++){
        for (int j = 0 ; j<m ; j++){
            int k;
            cin >> k;
            arr[i][j] = k;
        }
    }
    //列
    for (int i = 0 ; i<n ; i++){
        count = 1;
        int k = arr[i][0];
        for (int j = 1 ; j<m ; j++){
            if (k == arr[i][j]){
                ++count;
            }
            else{
                k = arr[i][j];
                count = 1;
            }
            if (count == 3){
                flog = 1;
                break;
            }
        }
    }
    //行
    for (int j = 0 ; j<m ; j++){
        count = 1;
        int k = arr[0][j];
        for (int i = 1 ; i<n ; i++){
            if (arr[i][j] == k){
                ++count;
            }
            else{
                k = arr[i][j];
                count = 1;
            }
            if (count == 3){
                flog = 1;
                break;
            }
        }
    }
    if (flog){
        cout << "Yes" <<"\n";
    }
    else cout << "No" <<"\n";
}