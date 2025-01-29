#include<iostream>
using namespace std;
int main(){
    int n,a,b,count,count_sum = 0;
    cin >> n >> a >> b;

    while (1<=n){
        count = a;
        while (count<=b){
            cout << count << " ";
            count_sum += count;
            count++;
            
        }
        a+=10-1;
        b+=10-1;
    }
    cout << "\n";
    cout << count_sum << "\n";

}