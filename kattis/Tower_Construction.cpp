#include<iostream>
using namespace std;

signed main(){
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0 ; i<n ; i++){
        int k ;
        cin >> k;
        arr[i] = k;
    }

    int count = 1;
    for (int i = 1 ; i<n-1 ; i++){
        if (arr[i]<arr[i+1]){
            break;
        }
        else if (arr[i]>arr[i+1]){
            ++count;
        }
    }

    cout << count << endl;
    return 0;
}
