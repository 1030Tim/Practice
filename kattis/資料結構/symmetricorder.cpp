#include<iostream>
using namespace std;

signed main(){
    int count = 0;
    while (1){
        int n;
        int j = 0;
        cin >> n;
        if (n == 0) break; 
        string news[n];
        string k[n];
            
        for (int i = 0 ; i<n ; i++){
                string d;
                cin >> d;
                k[i] = d;
        }
        
        for (int i = 0 ; i<n ; i++){
            if ((i+1) %2 ==0){
                news[n-j-1] = k[i];
                ++j;
            }
            else{
                news[j] = k[i];
                
            }
        }
        cout << "SET "<< ++count <<"\n";
        for (int i = 0 ; i<n ; i++){
            cout << news[i] << "\n";
        }
    }
}

//這個版本是手推new array 的index
//並沒有模擬出deque