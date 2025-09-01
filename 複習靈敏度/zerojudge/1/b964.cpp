#include<iostream>
using namespace std;
signed main(){
    int n;
    cin >> n;
    int arr[n];
    int i,j;
    for (i = 0 ; i<n ; i++){
        int d;
        cin >> d;
        arr[i] = d;
    }

    // sort to array arr
    for (i = 0 ; i<n-1 ; i++){
        
        for (j = 0 ; j<n-1 ; j++){
            if (arr[j] > arr[j+1]){
                int switchs = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = switchs;
            }
        }
    }
    // output sorted arr
    for (i = 0 ; i<n-1 ; i++){
        cout << arr[i] << " ";
    }
    cout << arr[n-1] << "\n";


    // conpute max and min score
    int maxs = 0;
    int mins = 100;

    for (i = 0 ; i<n ; i++){
        if (arr[i] >= 60 && maxs == 0){
            maxs = arr[i];
        }
        else if (arr[i] < 60){
            mins = arr[i];
        }
    }

    // max and min score output
    if (mins != 100){
        cout << mins << "\n";
    }
    else{
        cout << "best case" << "\n";
    }

    if (maxs !=0){
        cout << maxs << "\n";
    }
    else{
        cout << "worst case" << "\n";
    }
    return 0;
}