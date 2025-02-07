#include<iostream>
using namespace std;
signed main(){
    int n;
    cin >> n;
    int ary[n];
    for (int i = 0; i<n ; i++){
        int k;
        cin >> k;
        ary[i] = k;
    }
    int arr[n];
    arr[0] = ary[0];
    int count = 0,point = ary[0];
    for (int i = 0 ; i<n ; i++){
        if (ary[i]>=point){
            arr[count] = ary[i];
            point = arr[count];
            count++;
        }
    }
    cout << count-1 << "\n";
    for (int i = 0 ; i<count ; i++){
         cout << arr[i] << " ";
    }
    return 0;
}