#include<iostream>
using namespace std;
void turns(int r,int c , int ary[][100]){
    int k[100];
    for (int i = 0;i<r/2 ; i++){
        for (int j = 0 ; j<c ; j++){
            k[j] = ary[i][j];
            ary[i][j] = ary[r-i-1][j] ;
            ary[r-i-1][j] = k[j]; 
        }
    }
}
void reverse(int r,int c , int ary[][100]){ //不會的地方
    int news[100][100];
    int a = 0;
    for (int j = 0 ; j<c ; j++){
        int b = 0;
        for (int i = r-1 ; i>=0 ; i--){
            news[a][b] = ary[i][j];
            a++;
        }
    }
    ary = news;
}
signed main(){
    int r,c,m;
    cin >> r >> c >> m;
    int ary[100][100],play[100];


    for (int i = 0 ; i<r ; i++){
        for (int j = 0; j<c ; j++){
            int k;
            cin >> k;
            ary[i][j] = k;
        }
    }
    for (int i = 0; i<m ; i++){
        int k ; 
        cin >> k;
        play[i] = k;
    }

    
    for (int i = m-1 ; i>=0 ; i--){
        if (play[i] == 1){
            turns(r,c ,ary);
        }
        else{
            reverse(r,c,ary);
        }
    }
    for (int i = 0 ; i<r ; i++){
        for (int j = 0 ; j<c ; j++){
            cout << ary[i][j] << " ";
        }
        cout << "\n";
    }

}