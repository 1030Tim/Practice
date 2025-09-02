#include<iostream>
using namespace std;

void output(int r, int c, int arr[][10]){
    int i,j;
    for (i = 0; i<r; i++){
        for (j = 0; j<c-1; j++){
            cout << arr[i][j] << " ";
        }
        cout << arr[i][c-1] << "\n";
    }
}



void turn(int r, int c, int arr[][10]){
    int i,j;
    for (i = 0; i<(r/2); i++){
        for (j = 0; j<c; j++){
            int switchs = arr[i][j];
            arr[i][j] = arr[r-i-1][j];
            arr[r-i-1][j] = switchs;
        }
    }
}

void transform(int &r, int &c, int arr[][10]){
    int i,j,temp[10][10];
    for (i = 0; i<r; i++){
        for (j = 0; j<c; j++){
            temp[j][i] = arr[i][j];
        }
    }

    for (i = 0; i<c; i++){
        for (j = 0; j<r; j++){
            arr[i][j] = temp[i][j];
        }
    }

    swap(r,c);
    turn(r,c,arr);
}

signed main(){
    int r,c,m,i,j;
    cin >> r >> c >> m;
    int arr[10][10];
    for (i = 0; i<r; i++){
        for (j = 0; j<c; j++){
            int d;
            cin >> d;
            arr[i][j] = d;
        }
    }
    int play[10];
    for (i = 0; i<m ; i++){
        int d;
        cin >> d;
        play[i] = d;
    }
    for (i = 0; i<m; i++){
        if (play[m-i-1] == 0){
            transform(r,c,arr);
        }
        else{
            turn(r,c,arr);
        }
    }

    cout << r << " " << c << "\n";
    output(r,c,arr);
    return 0;
}