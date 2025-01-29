#include<iostream>
using namespace std;
int main(){
    int x,count = 1;
    cin >> x;
    while (x>=10){
        count = 1;
        while (x!=0){
            if (x%10!=0){
                count *= x%10;
            }
            x/=10;
        }
        x = count ;
    }
    cout << x << endl; 
}