#include<iostream>
using namespace std;
int main(){
    int count,maxs = -10000000;
    int answear = 0;
    for (int i = 0 ; i<5 ; i++){
        count = 0;
        for (int j = 0 ; j<4 ; j++){
            int d;
            cin >> d;
            count += d;
        }
        if (count > maxs){
            maxs = count ;
            answear = i;
        }
    }
    cout << (answear+1) <<" " << maxs << endl;
    return 0;
    
}