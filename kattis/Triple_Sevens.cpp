#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int count = 0;
    for (int i = 0; i<3 ; i++){
        for (int j = 0; j<n ; j++){
            int k;
            cin >> k;
            if (k == 7){
                ++count; 
            }
        }
    }
    if (count != 3){
        cout << 0 << endl;
    }
    else{
        cout << 777 << endl;
    }
    return 0;
}