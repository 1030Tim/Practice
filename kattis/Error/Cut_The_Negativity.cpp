#include<iostream>
using namespace std;
signed main(){
    int n,count = 0;
    cin >> n;
    int m = n,arr[n][m];
    int ans[1000][1000];//修改的地方100 -> 1000
    for (int i = 0 ; i<n ; i++){
        for (int j = 0 ; j<m ; j++){
            int k;
            cin >> k;
            arr[i][j] = k;
        }
    }
    int a = 0;
    for (int i = 0 ; i<n ; i++){
        for (int j = 0 ; j<m ; j++){
            if (arr[i][j]!=-1 && i!=j){
                ans[a][0] = i+1 ;ans[a][1] = j+1;ans[a][2] = arr[i][j];
                ++count;
                ++a;
            }
        }
    }
    cout << count << "\n";
    for (int i = 0 ; i<count ; i++){
        for (int j = 0 ; j<3-1 ; j++){
            cout << ans[i][j] << " ";
        }
        cout << ans[i][2] << "\n";
    }
    return 0;
}