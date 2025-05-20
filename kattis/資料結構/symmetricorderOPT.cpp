//基數項直接輸出，偶數項丟stack
#include<iostream>
using namespace std;
signed main(){
    int count = 0;
    while (1){
        int n;
        cin >> n;
        if (n == 0) break;
        cout << "SET "<< ++count <<"\n";
        string stack[n];
        string arr[n];

        for (int i = 0 ;i<n ; i++){
            string k;
            cin >> k;
            arr[i] = k;
        }
        int j = 0;
        for (int i = 0 ; i<n ; i++){
            if ((i+1)%2 == 0){
                stack[j] = arr[i];
                ++j;
            }
            else{
                cout << arr[i] << "\n";
            }
        }
        for (int i = j-1 ; i>=0 ; i--){
            cout << stack[i] << "\n";
        }
}
}