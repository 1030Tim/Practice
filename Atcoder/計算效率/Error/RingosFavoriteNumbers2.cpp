#include<iostream>
#in
using namespace std;



signed main(){
    int count = 0;
    int n;
    cin >> n;
    int a[n];
    int arr[200];
    for (int i = 0 ; i<200 ; i++){
        arr[i] = 0;
    }

    for (int i = 0 ; i<n ; i++){
        int j ;
        cin >> j ;
        a[i] = j;
        arr[j%200]++;
        if (arr[j%200]%2 == 0){
            ++count;
        }       // 1 1 1 1
                // 1 2, 1 3, 1 4, 2 3, 2 4, 3 4
    }

    // arr[x] = %200 == x
    // for i = 0~199 -> arr[i]

    cout << count << endl;
    return 0;
}