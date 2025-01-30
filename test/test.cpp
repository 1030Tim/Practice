#include<iostream>
using namespace std;
int main(){
    int k ,count = 0;
    cin >> k;
    while (k>=1){
            count += k%10;
            k/=10;
        }
    cout << count << endl;
}