#include<iostream>
using namespace std;
int main(){
    int L , D , X;
    cin >> L >> D >> X;
    int count = 0,min_value = 100000,max_value = -100000;
    for (int i = L ; i<=D ; i++){
        int k = i;
        count = 0;
        while (k>=1){
            count += k%10;
            k/=10;
        }
        if (count == X){
            min_value = min(i,min_value);
            max_value = max(i,max_value);
        }
    }
    cout << min_value << "\n";
    cout << max_value << "\n";
    return 0;
}

