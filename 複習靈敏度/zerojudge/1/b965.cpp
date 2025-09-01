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


    cout <<"=================="<<"\n";
    for (i = 0 ; i<m ; i++){
        cout << play[i] << " ";
    }


    output( r, c, arr);
}