// https://zerojudge.tw/ShowProblem?problemid=c295
#include<iostream>
using namespace std;
int main(){
    int n,m,count = 0;
    cin >> n >> m;
    int ary[n][m],ans[n];
    //=======================================save value to ary
    for (int i = 0 ; i<n ;i++){
        for (int j = 0 ; j<m ; j++){
            int d;
            cin >> d;
            ary[i][j] = d;
        }
    }
    //======================================== search max value
    int point = 0;
    for (int i = 0; i < n ; i++){
        int maxs = ary[i][0];
        for (int j = 0; j < m ; j++){
            if (ary[i][j]>maxs){
                maxs = ary[i][j]; 
            }
        }
        ans[point++] = maxs;
    }
    // ================================= add value to count
    for (int i = 0 ; i<n ; i++){
        count += ans[i];
    }
    // ================================== print answars
    cout << count << endl;
    int t = 0;
    int ans_print[n];
    for (int i = 0 ; i<n ; i++){
        if (count%ans[i] == 0){
            ans_print[t++] = ans[i];
        }
    }
    if (t == 0) cout << t-1 << endl;
    else{
        for (int i = 0 ; i<t-1 ; i++){
            cout << ans_print[i] << " ";
        }
        cout << ans_print[t-1] << endl;
    }
    return 0;
}
