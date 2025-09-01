#include<iostream>
using namespace std;

void output(int r,int c, int arr[][1000]){
        int i,j;
        for (i = 0 ; i<r ; i++){
            for (j = 0 ; j<c-1 ; j++){
                cout << arr[i][j] << " ";
            }
            cout << arr[i][c-1] << "\n";
        }
}
void turn(int r, int c, int arr[][1000]){
    int i,j;
    for (i = 0 ; i<(r/2) ; i++){
        for (j = 0 ; j<c ; j++){
            int switchs = arr[r-i-1][j];
            arr[r-i-1][j] = arr[i][j];
            arr[i][j] = switchs;
        }
    }
}
void transfers(int &r, int &c, int arr[][1000]) {
    int temp[1000][1000];
    // 做轉置：新矩陣的 [j][i] = 原矩陣的 [i][j]
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            temp[j][i] = arr[i][j];
        }
    }

    // 把轉置後的資料放回 arr
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            arr[i][j] = temp[i][j];
        }
    }
    // 更新 r 和 c
    swap(r, c);
    turn(r,c,arr);
}


signed main(){
    int r,c,m,i,j;
    cin >> r >> c >> m;
    int arr[1000][1000];

    // save values to array
    for (i = 0 ; i<r ; i++){
        for (j = 0 ; j<c ; j++){
            int d;
            cin >> d;
            arr[i][j] = d;
        }
    }
    

    // play instruction
    int play[100];
    for (i = 0 ; i<m ; i++){
        int d;
        cin >> d;
        play[i] = d;
    }
    for (i = 0 ; i<(m/2) ; i++){
        int swatch = play[i];
        play[i] = play[m-1-i];
        play[m-1-i] = swatch;
    }


    
    for (i = 0 ; i<m ; i++){
        if (play[i] == 0){
            transfers(r,c,arr);
        }
        else if (play[i] == 1){
            turn(r,c,arr);
        }
    }

    cout << r << " " << c << "\n";

    output(r,c,arr);
    return 0;
}
