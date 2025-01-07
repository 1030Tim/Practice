#include<iostream>
using namespace std;
int main(){
    unsigned long long n,r,mins = 1000000000,count = 0;
    cin >> n ;
    for (unsigned long long i = 0 ; i<n ; i++){
        cin >> r;
        if (r<mins){
            mins = r;
        }
    }
    while (1){
        if (count > mins){
            break;
        }
        ++count;
    }
    cout << count << endl;
    return 0;
}